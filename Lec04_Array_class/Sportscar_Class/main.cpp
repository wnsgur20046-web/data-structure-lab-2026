#include "Sportscar_Class.h"

int main() {
    Car c1;
    c1.display();

    Car c2(0, "Sonata", 1);
    c2.display();

    c2.speedUp();
    c2.changeGear(2);
    c2.display();

    return 0;
}