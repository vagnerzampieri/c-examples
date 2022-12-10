#include <stdio.h>

typedef struct {
  char * name;
  int age;
} Person;

void birthday(Person * person) {
  person->age++;
}

int main() {
  Person person;
  person.name = "John";
  person.age = 27;

  printf("%s is %d years old.\n", person.name, person.age);

  birthday(&person);

  printf("Happy birthday! %s is now %d years old.\n", person.name, person.age);

  return 0;
}

