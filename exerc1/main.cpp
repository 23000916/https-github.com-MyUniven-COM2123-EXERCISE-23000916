#include <iostream>

using namespace std;

int main()
{ double totalCost, salary, rent, electricity,totalExpenses, merchandiseCost, markupPercentage;

    cout << "Enter the total cost of merchandise: ";
    cin >> totalCost;
    cout << "Enter the total salary of employees (including your own): ";
    cin >> salary;
    cout << "Enter the yearly rent: ";
    cin >> rent;
    cout << "Enter the estimated electricity cost: ";
    cin >> electricity;
    totalExpenses = (totalCost+totalCost*0.15) + salary + rent + electricity;
    double perc= totalExpenses*0.1;

    merchandiseCost=totalExpenses+perc;


    markupPercentage = ((merchandiseCost-totalCost) / totalCost) * 100;


    cout << "The merchandise should be marked up by approximately " << markupPercentage << "% to achieve the desired profit." << endl;

    return 0;
}
