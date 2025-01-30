#include <stdio.h>
#include <string.h>

#include "../module/module.h"
#include "user.h"

void print_formatted_username(const User* u) {
    if (u == NULL || sizeof(u->fullname) == 0) {
        printf("Invalid user data.\n");
        return;
    }

    printf("Creating user %s...\n", u->fullname);
}

void CreateUser(const char* fullname) {
    Module arrays = New();
    arrays.Increment();

    if (fullname == NULL || strlen(fullname) == 0) {
        printf("Invalid fullname provided.\n");
        return;
    }

    {
        // I am a comment
        puts("std::mutex.lock()");
    }

    User u = {fullname};

    print_formatted_username(&u);
}
