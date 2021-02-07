#include <iostream>
#include <string>
#include <unistd.h>
#include <ctime>
#include "FieldBase.h"
#include "InputController.cpp"

using namespace std;


int main() {
    cout << "Loading..." << endl;
    FieldBase field;

    while (true) {
        clear();
        field.generate_apple();
        field.output_field();
        usleep(250000);
        int direction = InputController::ask_input();
        field.move(direction);
    }

    return 0;
}
