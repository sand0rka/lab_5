
using namespace std;

enum governmentType
{
    DEMOCRACY,
    REPUBLIC,
    AUTOCRACY,
    OLIGARCHY,
    ARISTOCRACY,
    MONARCHY
};


class Country
{
private:
    string name;
    string capital;
    float area;
    int code;
    governmentType Type;

public:
    int gdp;
    int population;

    Country()
    {
    }

    Country(string name, string capital, int code, int population, float area, int gdp)
    {
        this->name = name;
        this->capital = capital;
        this->code = code;
        this->population = population;
        this->area = area;
        this->gdp = gdp;
    }

    string getName()
    {
        return name;
    }

    string getCapital()
    {
        return capital;

    }

    int getCode()
    {
        return code;
    }

    float getArea()
    {
        return area;
    }

    governmentType getType()
    {
        return Type;
    }

    void setType(governmentType Type) {
        this->Type = Type;
    }

    void PrintCountry()
    {
        cout << "\nName of country: " << name << "\nCapital: " << capital << "\nPhone code: " << code << "\nPopulation: " << population << "\nArea: " << area << "\nGDP(billions): " << gdp << endl;
    }

    void ñalculatePopulationDensity()
    {
        int a = population;
        float b = area;
        float c = a / b;
        cout << "Population density: " << c << endl;
    }

    ~Country()
    {

    }

};