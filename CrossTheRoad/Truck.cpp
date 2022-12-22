#include "Truck.h"

Truck::Truck(int row, int col, Light* light) : Car(row, col, light) {

}

vector<string> Truck::getImgString() {
	vector<string> img;
	img.push_back({ char(32),char(95),char(95),char(95),char(95) });
	img.push_back({ char(124),char(95),char(95),char(124),char(95),char(92),char(95) });
	img.push_back({ char(124),char(95),char(95),char(124),char(95),char(95),char(95),char(124) });
	img.push_back({ char(32),char(79),char(32),char(32),char(32),char(32),char(79),char(32) });
	return img;
}

void Truck::makeSound() {
	sound(truckSound, false);
}

int Truck::color() {
	return colorRed;
}