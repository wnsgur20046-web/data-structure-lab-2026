#include <iostream>
#include "Lec04_Array_Class.h"

int image[HEIGHT][WIDTH] = {
    { 10,  30,  55,  80, 120, 160, 200, 230},
    { 20,  45,  70, 100, 140, 180, 220, 210},
    { 35,  60,  90, 130, 170, 210, 240, 190},
    { 50,  80, 115, 150, 190, 230, 255, 170},
    { 40,  65, 100, 140, 175, 215, 235, 150},
    { 25,  50,  80, 115, 155, 195, 210, 130},
    { 15,  35,  60,  90, 130, 165, 185, 110},
    {  5,  20,  40,  70, 105, 140, 160,  90}
};

int main() {
	arraymaxbrightness arr(image);
    std::cout << "image's Max Brightness: " << arr.getarraymaxbrightnes() << std::endl;
}