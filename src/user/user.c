#include <stdio.h>
#include "user.h"

void print_formatted_username(User u) {
  printf("Creating user %s...\n", u.fullname);
}

void CreateUser(char name[255]) {
  User u = {name};
  print_formatted_username(u);
}
