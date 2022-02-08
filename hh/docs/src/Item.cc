/**
* Author: Brodie Agretto
* Author: Key Ng                    <k.ng@uleth.ca>
* Author: Michael Morgan-Daniels
* Author: Henok Woldemichael
* Date 2021-11
*/

#ifndef ITEM_H
#define ITEM_H
#include <string>



class Item {
  public:
    /**
    * Returns the name of the Item
    * @param[] N/A
    */
    std::string getType();

    /**
    * Sets the name of the Item
    * @param[in] String name which is set to the private variable type
    */
    void setType(string name);
    virtual ~Item();
  private:
    std::string type;


};

#endif
