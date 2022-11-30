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



    Country normarray[99];
    Country sortarray[1];
    int numberelements = 0;

    void AddArray(Country number) {
        normarray[numberelements] = number;
        numberelements++;
    }

    void SortByGdp() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++) {
                if (normarray[j].gdp < normarray[j + 1].gdp) {
                    sortarray[0] = normarray[j + 1];
                    normarray[j + 1] = normarray[j];
                    normarray[j] = sortarray[0];
                }
            }
        }

        for (int i = 0; i < numberelements; i++) {
            normarray[i].PrintCountry();
        }
    }

    void BiggestPopulation() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++) {
                if (normarray[j].population < normarray[j + 1].population) {
                    sortarray[0] = normarray[j + 1];
                    normarray[j + 1] = normarray[j];
                    normarray[j] = sortarray[0];

                }
            }
        }
        normarray[0].PrintCountry();
    }

    ~Land()
    {

    }
};

void PrintLand(Land& object)
{
    cout << "Land: " << object.name << endl;
}


