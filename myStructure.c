#include <stdio.h>
#include <string.h>

struct Person {
   char name[50];
};

// Function to set the name of a Person struct
void set_name(struct Person *person, const char *new_name) {
   strcpy(person->name, new_name);
}

// Function to get the name of a Person struct
const char *get_name(const struct Person *person) {
   return person->name;
}

int main() {
   struct Person person1;

   set_name(&person1, "Alice");

   printf("Person's name: %s\n", get_name(&person1));

   return 0;
}
