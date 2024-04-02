#include "lab01/headers/greeter.h"
#include "lab01/headers/asker.h"

int main() {
    Asker asker;
    Greeter greeter;
    string name = asker.ask("What is ur name?");
    greeter.greet("OOP");
    return 0;
}