#include "FieldBase.h"


using namespace std;


int main() {
    FieldBase field(8*8);
    field.field_init();
    field.output_field();

    return 0;
}
