#include "FieldBase.cpp"
#include "InputController.cpp"

using namespace std;


void s(char c) {
        cout << c << endl;
    }

int main() {
    //FieldBase field;
    //field.field_init();
    //field.output_field();
    InputController ic;

    ic.add_listener(s);
    ic.remove_listener();


    return 0;
}
