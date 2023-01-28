#include <iostream>
#include <cstring>  // include the string library
#include<bits/stdc++.h>
using namespace std;

int main()
{
            int workDays,wagePerDay,dollarRate;
            cin>>workDays>>wagePerDay>>dollarRate;
            double monthlyWage = workDays * wagePerDay;
            double incomePerYear = 14.5 * monthlyWage;
            double taxes = 0.25 * incomePerYear;
            double netIncome = (incomePerYear - taxes) * dollarRate;
            double incomePerDay = netIncome / 365;
             cout <<fixed << setprecision(2)<<incomePerDay<<" ";

    return 0;
}
