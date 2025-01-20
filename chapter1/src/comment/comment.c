#include "stdio.h"
#include "comment.h"

static void comment_print_stuff(comment cmnt) {
    printf("Hello from static method, %s\n", cmnt.fullname);
};

comment comment_new(const char* fullname) {
    comment comm = {fullname};
    comment_print_stuff(comm);
    return comm;
};

void comment_save() {};
void comment_destroy() {};
void comment_update() {};
