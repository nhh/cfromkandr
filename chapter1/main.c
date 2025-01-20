#include <stdio.h>
#include "src/user/user.h"
#include "src/fahrenheit/fahrenheit.h"
#include "src/io/io.h"

int main() {
    PrintFahrenheit();
    PrintFahrenheitWithForLoop();
    CreateUser("Niklas Hanft");
    RepeatInput(); // cat test.txt | ./a.out
}
