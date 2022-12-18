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
    { "Brave", "brave-browser &" },
    { "SaaS", "code ~/Projects/capim/capim-dash-backend &" },
    { "BNPL", "code ~/Projects/capim/capim-backend &" },
  };

  size_t size = sizeof(commands) / sizeof(command);

  for (size_t i = 0; i < size; i++) {
    printf("Start %s", commands[i].name);
    system(commands[i].value);
  }

  return 0;
}
