using namespace std;
#include "header1.h"

class Land
{
public:
    string name;

    Land()
    {

    }

    Land(string name)
    {
        this->name = name;
    }

    friend void PrintLand(Land& object);



    Country array_of_countries[99];
    Country clipboard[1];
    int numberelements = 0;

    void AddArray(Country number) {
        array_of_countries[numberelements] = number;
        numberelements++;
    }

    void SortByGdp() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++) {
                if (array_of_countries[j].gdp < array_of_countries[j + 1].gdp) {
                    clipboard[0] = array_of_countries[j + 1];
                    array_of_countries[j + 1] = array_of_countries[j];
                    array_of_countries[j] = clipboard[0];
                }
            }
        }

        for (int i = 0; i < numberelements; i++) {
            array_of_countries[i].PrintCountry();
        }
    }

    void BiggestPopulation() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++) {
                if (array_of_countries[j].population < array_of_countries[j + 1].population) {
                    clipboard[0] = array_of_countries[j + 1];
                    array_of_countries[j + 1] = array_of_countries[j];
                    array_of_countries[j] = clipboard[0];

                }
            }
        }
        array_of_countries[0].PrintCountry();
    }

    ~Land()
    {

    }
};

void PrintLand(Land& object)
{
    cout << "Land: " << object.name << endl;
}


