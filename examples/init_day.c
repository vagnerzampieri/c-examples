#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Start Spotify");
  system("spotify &");

  printf("Start Slack");
  system("slack &");

  printf("Start Brave");
  system("brave-browser &");

  printf("Start SaaS");
  system("code ~/Projects/capim/capim-dash-backend &");

  printf("Start BNPL");
  system("code ~/Projects/capim/capim-backend &");

  return 0;
}
