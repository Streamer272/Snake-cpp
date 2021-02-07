#include <iostream>
#include "FieldBase.h"
#include "InputController.cpp"

using namespace std;


int main() {
    //FieldBase field;
    //field.field_init();
    //field.output_field();


    cout << InputController::ask_input() << endl;


    return 0;
}
