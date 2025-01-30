#include "stdio.h"
#include "module.h"

// static variables allow "module" wide private variables
static int counter = 0;

void arrays_print_all_variants() {
    counter++;
    printf("%i", counter);
}

Module New() {
    Module module;
    module.Increment = arrays_print_all_variants;
    return module;
}
