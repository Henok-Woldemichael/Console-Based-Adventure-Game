/**
* Author: Brodie Agretto
* Author: Key Ng                    <k.ng@uleth.ca>
* Author: Michael Morgan-Daniels
* Author: Henok Woldemichael
* Date 2021-11
*/

#ifndef Player_H_
#define Player_H_

#include <string>
#include <vector>
#include "Item.h"
#include "Environment.h"

/*
*This class contains all information related to the player character.
*/
class Player {
public:

    /*
    * The Constructor creates the player
    * @param takes in n as the player name.
    */
    Player(std::string n);

    /*
    *The default destructor
    */
    virtual ~Player();

    /*
    * Takes in the action and calls the appropriate function
    * @param the string a which is an action
    */
    void action(std::string a);

    /*
    * Checks to see players bag (inventory)
    */
    void checkBag();

    /*
    * This function returns the players name.
    * @return the players name as a string.
    */
    std::string getPlayerName();

    /*
    * This function returns a pointer to an item in the bag
    * @return a pointer to the appropriate item.
    */
    Item* getItem(std::string id);

    /*
    * Sets the location of the player
    * @param loc a string for the new location
    */
    void setLocation(std::string loc);

    /*
    * Returns the location of the player
    * @return an environment pointer
    */
    std::string getLocation();

    /*
    *Takes in the players movement decision
    *and moves the player there.
    */
    void movement();

    /*
    * This function returns the players current health
    * @return health as an integer
    */
    int getPlayerHealth();

    private:

    //a vector of Item pointers for the players inventory
    std::vector<Item*> bag;
    //the players name as a string.
    std::string name;
    //Player Health
    int health;
    //Player location
    std::string location;
};

#endif
