#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

int CalculateNumericValue(std::string card)
{
    char type = card[card.length() - 1];

    int typeMultiplier = 0;
    if (type == 'S') typeMultiplier = 4;
    else if (type == 'H') typeMultiplier = 3;
    else if (type == 'D') typeMultiplier = 2;
    else if (type == 'C') typeMultiplier = 1;

    int numericValue = 0;
    if (std::isdigit(card[0]))
    {
        if (card[0] == '1' && card[1] == '0') numericValue = 10;
        else numericValue = card[0] - '0';
    }
    else if (card[0] == 'J') numericValue = 11;
    else if (card[0] == 'Q') numericValue = 12;
    else if (card[0] == 'K') numericValue = 13;
    else if (card[0] == 'A') numericValue = 14;

    return typeMultiplier * numericValue;
}

int main()
{
    std::unordered_map<std::string, std::unordered_set<std::string>> cardsByPerson;

    std::string input;
    std::getline(std::cin, input);
    while (input != "JOKER")
    {
        std::string::size_type colonPos = input.find(':');
        std::string personName = input.substr(0, colonPos);
        std::string cardsString = input.substr(colonPos + 2); // add 2 to skip ": "
        std::string delimiter = ", ";

        std::unordered_set<std::string> cards;
        std::string card;
        std::string::size_type pos = 0;
        while ((pos = cardsString.find(delimiter)) != std::string::npos)
        {
            card = cardsString.substr(0, pos);
            cards.insert(card);
            cardsString.erase(0, pos + delimiter.length());
        }
        card = cardsString.substr(0, cardsString.length());
        cards.insert(card);

        cardsByPerson[personName] = cards;

        std::getline(std::cin, input);
    }

    for (const auto& [person, cards] : cardsByPerson)
    {
        int sum = 0;
        for (const auto& card : cards)
            sum += CalculateNumericValue(card);
        std::cout << person << ": " << sum << '\n';
    }

    return 0;
}
