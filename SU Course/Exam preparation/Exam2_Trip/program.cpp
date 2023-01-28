if (season == "summer")
{
    if (budget <= 100)
    {
        double price = 0.3 * budget;
        cout << "Somewhere in Bulgaria" << endl;
        cout << "Camp - " << price << endl;
    }
    else if (budget <= 1000)
    {
        double price = 0.4 * budget;
        cout << "Somewhere in Balkans" << endl;
        cout << "Camp - " << price << endl;
    }
    else if (budget > 1000)
    {
        double price = 0.9 * budget;
        cout << "Somewhere in Europe" << endl;
        cout << "Hotel - " << price << endl;
    }
}
else if (season == "winter")
{
    if (budget <= 100)
    {
        double price = 0.7 * budget;
        cout << "Somewhere in Bulgaria" << endl;
        cout << "Hotel - " << price << endl;
    }
    else if (budget <= 1000)
    {
        double price = 0.8 * budget;
        cout << "Somewhere in Balkans" << endl;
        cout << "Hotel - " << price << endl;
    }
    else if (budget > 1000)
    {
        double price = 0.9 * budget;
        cout << "Somewhere in Europe" << endl;
        cout << "Hotel - " << price << endl;
    }
}
