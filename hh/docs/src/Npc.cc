/**
* Author: Brodie Agretto
* Author: Key Ng                    <k.ng@uleth.ca>
* Author: Michael Morgan-Daniels
* Author: Henok Woldemichael        <woldemichael@uleth.ca>
* Date 2021-11
*/

#ifndef NPC_H
#define NPC_H

#include <iostream>
#include <string>
#include "Npc.h"




class Npc {
public:
  /**
  * Creates an Npc
  * @param[in] char_name, a string which is set to the private variable EnvName
  *@param[in] tool, a pointer to an Item which is set to the npc_item variable.
  */
  Npc(std::string char_name, Item* tool);

  /**
  * Returns NPC name
  * @param[] N/A
  */
  std::string getName();

  /**
  * Returns NPC name
  * @param[] N/A
  */
  void setName(std::string npc_name);

  /**
  * Sets the item held by the NPC
  * @param[in] a pointer to an Item* which is set to the private variable npc_item
  */
  void setItem(Item* tool_name);

  /**
  * Returns NPC item, Allows player to recieve item from Npc also, may be a medical kit, a key etc.
  * @param[] N/A
  */
  Item* getItem();

  /**
  * Returns the location of the NPC
  * @param[] N/A
  */
  Environment* getLocation();

  /**
  * Sets the location of the NPC
  * @param[in] Environment pointer area which is set to the private variable location
  */
  void setLocation(Environment* area);

  /**
  * Returns the NPC's default dialogue
  * @param[] N/A
  */
  std::string speak();

  /**
  * Sets the dialogue of the NPC
  * @param[in] String words, which is a formatted string of the NPC's dialogue
  */
  void setDialogue(std::string words);

  /**
  * VIrtual Destructor
  * @param[in] N/A
  */

  virtual ~Npc();
  private:
    std::string name;
    Item* npc_item;
    Environment* location;
    std::string talk;
};
#endif
