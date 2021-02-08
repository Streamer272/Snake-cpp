#include <iostream>
#include <string>
#include <unistd.h>
#include <tuple>
#include <ctime> // dont delete, needed, bug in IDE
#include "InnerSystem.cpp"
#include "Field.h"
#include "InputController.cpp"

using namespace std;


void start() {
    Field field;
    field.generate_apple();

    while (field.playing) {
        clear();
        field.render();
        usleep(250000);
        field.move(InputController::ask_input());
    }

    clear();
    cout << "GAME OVER WITH SCORE " << field.score << endl;
    system("pause");
}


int main() {
    start();

    return 0;
}
