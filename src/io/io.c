#include "stdio.h"

void RepeatInput() {
    long nc = 0;
    int c; // Character in ascii table

    // getchar returnt ein int um EOF feststellen zu koennen
    // die Zahl ist ein buchstabe aus einer ascii tabelle
    // Mit getchar kann schon ne Menge gemacht werden, zb inputs pipen
    // cat test.txt | ./a.out
    while((c = getchar()) != EOF) {

        // IMPORTANTE
        if (c == ' ') { // <----------------- Multi character inside '123' are not interpreted as ints instead chars i think

        }

        if(c == '  ') {} // <----------------- Multi character inside '123' are not interpreted as ints instead chars i think
        // clang: Multi-character character constant

        nc++;
    }

    // long double zahl printen
    printf("%ld\n", nc);
}
