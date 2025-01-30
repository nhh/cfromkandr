#include <stdio.h>
#include "src/user/user.h"
#include "src/fahrenheit/fahrenheit.h"
#include "src/comment/comment.h"
#include "src/io/io.h"
#include "src/module/module.h"

int main() {
    PrintFahrenheit();
    PrintFahrenheitWithForLoop();
    CreateUser("Niklas Hanft");
    RepeatInput(); // cat test.txt | ./a.out

    // I read about modules and naming conventions. The comment folder tries to implement these conventions
    // 1. Module prefixes
    // 2. Information Hiding
    // 3. Encapsulation
    comment comment = comment_new("Niklas Hanft");

    Module arrays = New(); // expect to print 2
    arrays.Increment();
}
