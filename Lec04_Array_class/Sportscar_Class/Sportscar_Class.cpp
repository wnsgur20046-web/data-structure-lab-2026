#include "Sportscar_Class.h"

Car::Car() {
    speed = 0;
    strcpy_s(name, "No name");
    gear = 0;
}

Car::Car(int s, const char* n, int g)
    : speed(s), gear(g) {
    strcpy_s(name, n);
}

void Car::changeGear(int g) {
    gear = g;
}

void Car::speedUp() {
    speed += 5;
}

void Car::display() {
    printf("[%s] : gear=%d speed=%d kmph\n", name, gear, speed);
}

void Car::whereAmI() {
    printf("object name = %p \n", this);
}