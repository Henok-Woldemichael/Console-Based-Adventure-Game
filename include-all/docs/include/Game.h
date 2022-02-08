/**
* Author: Brodie Agretto
* Author: Key Ng                    <k.ng@uleth.ca>
* Author: Michael Morgan-Daniels
* Author: Henok Woldemichael
* Date 2021-11
*/

#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <stdlib.h>
#include "Environment.h"
#include "Item.h"
#include "Player.h"

/**
* Contains all informations related to the game(enivronment, player, rules).
* The central class used to control the other classes behaviours
*/

class Game {
 public:
   /**
   * Default constructor, create player, item and Environment
   * @param[in] N/a
   */
    Game();
    /**
    * Default Destructor, delete player, item and Environment
    * And set all the pointers to nullptr
    * @param[in] N/a
    */
    virtual ~Game();
    /**
    * Method for getting the player's name when creating Player object.
    * @param[in] N/a
    * return string(Name)
    */
    std::string getPlayerName();
    /**
    * Method for printing the beginning message when game starts.
    * @param[in] N/a
    */
    void printWelcomeMessage() const;
    /**
    * Method for printing help message when player needed.
    * @param[in] N/a
    */
    void printHelpMessage() const;
    /**
    * Method for printing help Rules when player needed.
    * @param[in] N/a
    */
    void printRules() const;
    /**
    * Method for printing "-----------" to format the texts.
    * @param[in] N/a
    */
    void printSeparatorLine() const;
    /**
    * Method for player location
    * @param[in] N/a
    */
    void printPlayerLocation();
    /**
    * Method for checking if the Player is still alive
    * @param[in] N/a
    * @return False if a Player is dead
    */
    bool checkPlayerStatus();
    /**
    * Method for checking if the game has ended
    * @param[in] N/a
    * @return true if a Player has won the game.
    */
    bool checkGameStatus();
    /**
    * Method for moving the Player to a different room
    * @param[in] string room name
    */
    void movePlayer(std::string);

    /*
    should be in environment class;
    bool checkRoomStatus();
    */

 private:
   Player* player;
   Item* item;
   Environment* environment;
};

#endif
