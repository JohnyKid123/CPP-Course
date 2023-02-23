#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string originalMetric;
    double originalMetricValue;

    getline(cin, originalMetric);
    cin >> originalMetricValue;

    string convertedMetric;
    double conversionRate = 0;

    if (originalMetric == "miles")
    {
        convertedMetric = "kilometers";
        conversionRate = 1.6;
    }
    else if (originalMetric == "inches")
    {
        convertedMetric = "centimeters";
        conversionRate = 2.54;
    }
    else if (originalMetric == "feet")
    {
        convertedMetric = "centimeters";
        conversionRate = 30;
    }
    else if (originalMetric == "yards")
    {
        convertedMetric = "meters";
        conversionRate = 0.91;
    }
    else if (originalMetric == "gallons")
    {
        convertedMetric = "liters";
        conversionRate = 3.8;
    }

    cout << fixed << setprecision(2) << originalMetricValue << " " << originalMetric << " = " 
         << originalMetricValue * conversionRate << " " << convertedMetric << endl;

    return 0;
}
