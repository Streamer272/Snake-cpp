#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>
#include <ctime> // dont delete, needed, just bug is IDE
#include "InnerSystem.cpp"
#include "Field.h"
#include "InputController.cpp"

using namespace std;


int main() {
    Field field;

    while (true) {
        clear();
        field.render();
        usleep(250000);
        field.move(InputController::ask_input());
    }
}
