#include "Bicycle.h"

Bicycle::Bicycle(int row, int col, Light* light) : Car(row, col, light) {

}

vector<string> Bicycle::getImgString() {
	vector<string> img;
	img.push_back({ char(32),char(111),char(32) });
	img.push_back({ char(95),char(40),char(84) });
	img.push_back({ char(48),char(42),char(48) });
	return img;
}

void Bicycle::makeSound() {
	sound(bicycleSound, false);
}

int Bicycle::color() {
	return colorBlue;
}