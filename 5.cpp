#include <iostream>
using namespace std;
#include<string>
#include "header5.h"


int main()
{
    Country first("Ukraine", "Kyiv", 380, 43810000, 603700, 201);
    first.setType(governmentType::DEMOCRACY);
    first.PrintCountry();
    first.ñalculatePopulationDensity();
    Land Ukraine("Europe");
    PrintLand(Ukraine);

    Country second("France", "Paris", 33, 67500000, 543940, 2937);
    second.setType(governmentType::DEMOCRACY);
    second.PrintCountry();
    second.ñalculatePopulationDensity();
    Land France("Europe");
    PrintLand(France);


    Country third("Spain", "Madrid", 34, 47330000, 505990, 1425);
    third.setType(governmentType::MONARCHY);
    third.PrintCountry();
    third.ñalculatePopulationDensity();
    Land Spain("Europe");
    PrintLand(Spain);


    Country fourth("Germany", "Berlin", 49, 83130000, 357588, 4223);
    fourth.setType(governmentType::REPUBLIC);
    fourth.PrintCountry();
    fourth.ñalculatePopulationDensity();
    Land Germany("Europe");
    PrintLand(Germany);

    Country fifth("USA", "Washington", 1, 331900000, 983400, 23000);
    fifth.setType(governmentType::REPUBLIC);
    fifth.PrintCountry();
    fifth.ñalculatePopulationDensity();
    Land USA("North America");
    PrintLand(USA);

    Land Sorted;
    Sorted.AddArray(first);
    Sorted.AddArray(second);
    Sorted.AddArray(third);
    Sorted.AddArray(fourth);
    Sorted.AddArray(fifth);

    cout << "\n------------------------------------------- Sorted by GDP ---------------------------------------" << endl;

    Sorted.SortByGdp();

    cout << "\n------------------------------------------- Biggest population: ---------------------------------------" << endl;
    Sorted.BiggestPopulation();

    return 0;
}