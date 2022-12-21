#include <stdio.h>
#include <curl/curl.h>

// https://dadosabertos.camara.leg.br/swagger/api.html#api
// gcc -o main dados-abertos-camara.c -lcurl

int main(void) {
  // GET https://dadosabertos.camara.leg.br/api/v2/proposicoes with:
  // ano integer
  // itens integer (número máximo de páginas)
  // pagina integer
  // keywords array
  // o retorno vem um array de dados e links links para as próximas páginas

  CURL *curl;
  CURLcode response;
  curl_global_init(CURL_GLOBAL_ALL);

  curl = curl_easy_init();

  if(curl == NULL) return 128;

  struct curl_slist *headers = NULL;
  curl_slist_append(headers, "Accept: application/json");
  curl_slist_append(headers, "Content-Type: application/json");

  curl_easy_setopt(curl, CURLOPT_URL, "https://dadosabertos.camara.leg.br/api/v2/proposicoes?ano=2022&itens=10&pagina=1&keywords=bicicleta&keywords=transporte ativo&keywords=ciclovia&keywords=mobilidade ativa&keywords=mobilidade sustentável&keywords=transporte por bicicleta");
  curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

  response = curl_easy_perform(curl);

  if(response != CURLE_OK) {
    fprintf(stderr, "Request failed: %s\n", curl_easy_strerror(response));
  } else {
    long response_code;

    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
  }

  curl_easy_cleanup(curl);
  curl_global_cleanup();

  return 0;
}
