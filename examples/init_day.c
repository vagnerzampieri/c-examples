#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char * name;
  char * value;
} command;

int main() {
  command commands[] = {
    { "Spotify", "spotify &" },
    { "Slack", "slack &" },
    { "Google", "google-chrome &" },
  };

  size_t size = sizeof(commands) / sizeof(command);

  for (size_t i = 0; i < size; i++) {
    printf("Start %s", commands[i].name);
    system(commands[i].value);
  }

  return 0;
}
