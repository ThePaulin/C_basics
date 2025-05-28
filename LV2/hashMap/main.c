#include <stddef.h>
#include <stdio.h>
#include <string.h>
/*
struct { int a; int b; } v; // v is a variable of type anonymous struct

struct x { int a; int b; }; // Define a struct tagged x
struct x v; // v is a variable of type struct x

typedef struct { int a; int b; } y; // Anonymous struct aliased to type y;
y v; // v is a variable of type anonymous struct aliased to type y

typdef struct x { int a; int b; } y; // struct tagged x is aliased as type y
struct x v; // as above
y v; // as above
 
*/

typedef struct {
  char* key;
  int value;
} item ;

typedef struct packet {
  char* color;
  int ID;
};

typedef struct Student {
  char* name;
  int ID;
  int age;
} stu;

// linear Search
item* linear_search(item* items, size_t size, const char* key) {
  for (size_t i = 0; i<size; i++) {
    if (strcmp(items[i].key, key) == 0) {
      return &items[i];
    }
  }
  return NULL;
}

int main(void) {

  item items[] = {
  {"foo", 10},
  {"bar", 11},
  {"fizz", 77},
  {"buzz", 22}
  };

  size_t num_items = sizeof(items) / sizeof(item);

  // using linear search to find key "fizz"
  item* found = linear_search(items, num_items, "fizz");

  stu s;
  // strcpy(s.name, "Paulin");
  s.age = 26;
  s.name = "Paulin";
  s.ID = 1234;
  // strcpy(s.ID, 1234);
  // strcpy(s.age, 26);

  


  printf("linear_search of value \'fizz\' returns: %d \n",  found->value);
  printf("%s has ID: %d and is %d years old today.\n", s.name, s.ID, s.age);



};
