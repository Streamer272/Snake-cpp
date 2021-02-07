#include <iostream>
#include <string>
#include <unistd.h>
#include "FieldBase.h"
#include "InputController.cpp"

using namespace std;


int main() {
    FieldBase field;
    while (true) {
        field.output_field();
        sleep(1);
        cout << "ASK:";
        int direction = InputController::ask_input();
        field.move(direction);
        clear();
    }

    return 0;
}
