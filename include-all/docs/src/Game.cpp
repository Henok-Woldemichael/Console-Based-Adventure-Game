/**
* Author: Brodie Agretto
* Author: Key Ng                    <k.ng@uleth.ca>
* Author: Michael Morgan-Daniels
* Author: Henok Woldemichael
* Date 2021-11
*/

#include <iostream>
#include "Game.h"

Game::Game() {
  std::string PName = this->getPlayerName();
  player = new Player(PName);
  item = new Item();
  environment = new Environment("Spawn", nullptr, nullptr, true);
}


Game::~Game() {
  Player* tempPlayer = player;
  Item* tempItem = item;
  Environment* tempEnvironment = environment;

  player = nullptr;
  item = nullptr;
  environment = nullptr;

  //delete tempPlayer;
  delete tempItem;
  delete tempEnvironment;
}

std::string Game::getPlayerName() {
  std::string playerName = "";
  std::cout << "Please enter your name : " << std::endl;
  std::cin >> playerName;
  std::cout << std::endl;
  return playerName;
}

void Game::printWelcomeMessage() const {
  std::string PName = player->getPlayerName();
  std::cout << PName << " wakes up in their chambers, " <<
  "memory foggy as they exit their cryo-bed. Suddenly heard a voice saying" <<
  " [you must find a way to leave]" << std::endl;
}
void Game::printPlayerLocation() {
  std::cout << "You are currently in :" << player->getLocation() << std::endl;
}
void Game::printHelpMessage() const {
  std::cout << "" << std::endl;
}
void Game::printRules() const {
    std::cout << "action number" << std::endl;
}

void Game::printSeparatorLine() const {
  std::cout << "---------------------------------------------------------" <<
  "----------------------------------------------------------------------" <<
  "----------" << std::endl;
}

bool Game::checkPlayerStatus() {
  if (player->getPlayerHealth() == 0) {
    std::cout << "Game Over" << std::endl;
    return false;
  }
  return true;
}

bool Game::checkGameStatus() {
  /*
  Environment* evnTemp = player->getLocation();
  if (evnTemp->getName() == "Escape Pod") {
    return true;
  }
  return false;*/
}

void Game::movePlayer(std::string roomName) {
  player->setLocation(roomName);
}
