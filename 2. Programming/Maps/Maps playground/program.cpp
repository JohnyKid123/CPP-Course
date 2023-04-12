#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, std::string> phoneBook;
    phoneBook["Albena"] = "0886523518";
    phoneBook["Stefan"] = "0887651238";

    /*
    // This will throw an exception:
    phoneBook.Add("Albena", "new phone number");
    */

    // This will not:
    phoneBook["Albena"] = "new phone number";
    phoneBook["Petromil"] = "089562103";

    if (phoneBook.count("Stefan"))
    {
        std::cout << "The phone number of Stefan is: " << phoneBook["Stefan"] << std::endl;
    }

    if (phoneBook.count("Richard"))
    {
        std::cout << "The phone number of Richard is: " << phoneBook["Richard"] << std::endl;
    }

    /*for (const auto& kvp : phoneBook)
    {
        std::cout << kvp.first << " => " << kvp.second << std::endl;
    }*/

    for (const auto& [key, value] : phoneBook)
    {
        std::cout << key << " => " << value << std::endl;
    }

    return 0;
}
