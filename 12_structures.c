#include <stdio.h>

typedef struct {
  char * name;
  int age;
} Person;

int main() {
  Person person;

  person.name = "John";
  person.age = 27;

  printf("%s is %d years old.\n", person.name, person.age);
}
