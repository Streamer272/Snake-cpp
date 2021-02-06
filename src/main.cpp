#include <iostream>
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

    InputController ic;
    ic.add_listener(s);

    return 0;
}
