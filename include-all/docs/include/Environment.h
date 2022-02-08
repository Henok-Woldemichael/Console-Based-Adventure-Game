/**
* Author: Brodie Agretto
* Author: Key Ng                    <k.ng@uleth.ca>
* Author: Michael Morgan-Daniels
* Author: Henok Woldemichael
* Date 2021-11
*/

#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H
#include <string>
#include "Item.h"
#include "Npc.h"



class Environment {
  public:
    /**
    * Default constructor to create an Environment
    * @param EnvName the name of the location
    * @param EnvCharacter the NPC at the location (if there is one), set to null if there isnt(ie: bridge)
    * @param EnvAccesKey a pointer to an Item which is set as the accessKey(has the name of the environemnt ie: item.setname("environemnt name key"))
    * @param EnvAccess bool variable regarding whether there is acces to this place or not for bridge environemnt it is true but for others it may not be(rooms)
    */
    Environment(std::string EnvName, Npc* EnvCharacter, Item* EnvAccesKey, bool EnvAccess);

    /**
    * Sets the acces key
    * @param[in] keyName set to private variable accessKey
    */
    void setAccesKey(Item* keyName);

    /**
    * Returns the accessKey as a Item pointer
    * @param N/A
    */
    Item* keyType();

    /**
    * Checks if the key == accessKey, they are granted access to the room. Message is printed and access == true, else a message is printed
    * @param[in] An Item pointer key
    */
    void requestAccess(Item* key); //If the key == accessKey, they are granted access and access == true

    /**
    * Sets the name of the Environment
    * @param[in] string location which is set to name(Environment name)
    */
    void setLocationName(std::string location); //returns the name of the location

    /**
    * Returns the name of the Environment
    * @param[in] string location which is set to name(Environment name)
    */
    std::string getLocationName();

    /**
    * Sets NPC who occupies the Environment
    * @param[in] Npc pointer
    */
    void setLocationNpc(Npc* locationCharacter);

    /**
    * returns a pointer to the Npc who occupies the locationCharacter...Set to null if no NPC(bridge)
    * @param[in] N/A
    */
    Npc* getLocationNpc(); //returns a pointer to the Npc who occupies the locationCharacter...Set to null if no NPC(bridge)

    /**
    * returns the status of access
    * @param[in] N/A
    */
    bool checkAccess();

    /**
    * Virtual Destructor
    */
    virtual ~Environment();


  private:
    std::string name = " ";
    Npc* character = NULL;
    Item* accessKey = NULL; // set to room name then key, Example: WorkShop Key
    bool access = false;
};
#endif
