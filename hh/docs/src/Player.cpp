/**
* Author: Brodie Agretto <brodie.agretto@uleth.ca>
* Author: Key Ng                    <k.ng@uleth.ca>
* Author: Michael Morgan-Daniels
* Author: Henok Woldemichael
* Date 2021-11
*/

#include "Player.h"
#include <iostream>

Player::Player(std::string n) {
    name = n;
    health = 10;
    location = "Spawn";
}

Player::~Player() {
    name = null;
    health = null;
    location = null;
    bag = null;
}

void Player::action(std::string a) {
    if(a == "move"){
        movement();
    } else if (a == "Inventory"){
        checkBag();
    } else {
        std::cout << "Invalid Choice" << std::endl;
    }
}

void Player::checkBag() {
    for(int i = 0; i < bag.size(); i++) {
        std::cout << " | " << bag[i];
    }
        std::cout << std::endl;
}

std::string Player::getPlayerName() {
    return name;
}

Item* Player::getItem(std::string id) {
    for(int i = 0; i < bag.size(); i++) {
        if(bag[i]->getType() == id) {
            return bag[i];
        }
    }
}

void Player::setLocation(std::string loc) {
    location = loc;
}

std::string Player::getLocation() {
    return location;
}

void Player::movement() {
    std::string l;

    std::cout << "Where would you like to go?";
    std::cin >> l;
    std::cout << std::endl;
    setLocation(l);
    std::cout << "You are now in " << getLocation() << std::endl;
}

int Player::getPlayerHealth() {
    return health;
}
