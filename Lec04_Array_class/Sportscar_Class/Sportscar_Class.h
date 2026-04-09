#pragma once
#include <stdio.h>
#include <cstring>

class Car {
protected:
	int speed; 
	char name[40]; 

public:
	int gear; 

	Car() {
		speed = 0; 
		strcpy_s(name, "No name");
		gear = 0;
	}

	Car(int s, const char* n, int g) 
		: speed(s), gear(g) { 
		strcpy_s(name, n); 
	}
	void changeGear(int g = 4) { 
		gear = g;
	}
	void speedUp() { 
		speed += 5;
	}
	void display() {
		printf("[%s] : gear=%d speed=%d kmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("object name = %p \n", this); 
	}
};