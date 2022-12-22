#include "Player.h"

void Player::setName(string name) {
	this->name = name;
}

string Player::getName() {
	return name;
}

Player::Player() {
	name = "";
	alive = false;
}

void Player::setAlive(bool alive) {
	this->alive = alive;
}

Movable* Player::isTouch(vector<Movable*> listEnemy) {
	for (int i = 0; i < listEnemy.size(); i++) {
		int row = listEnemy[i]->getRow();
		int col = listEnemy[i]->getCol();
		if (row == getRow() && abs(col - getCol()) < 3) {
			return listEnemy[i];
		}
	}
	return nullptr;
}

bool Player::isAlive() {
	return alive;
}

vector<string> Player::getImgString() {
	vector<string> img;
	
	img.push_back({ char(32),char(64),char(32) });
	img.push_back({ char(47),char(124),char(92) });
	img.push_back({ char(47),char(32),char(92) });

	return img;
}

void Player::makeSound() {
	sound(buttonSound, 0);
}

int Player::color() {
	return colorBlack;
}