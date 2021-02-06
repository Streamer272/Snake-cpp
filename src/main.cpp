#include <iostream>
#include <thread>
#include "FieldBase.cpp"
#include "InputController.cpp"

using namespace std;


void s(int ascii) {
    cout << "Ascii: " << ascii << endl;
}

int main() {
    //FieldBase field;
    //field.field_init();
    //field.output_field();

    InputController::ask_input(s);

    return 0;
}
