
using namespace std;

enum governmentType
{
    kDemocracy,
    kRepublic,
    kAutocracy,
    kOligarchy,
    kAristocracy,
    kMonarchy
};


class Country
{
private:
    string name;
    string capital;
    float area;
    int code_of_country;
    governmentType Type;

public:
    int gdp;
    int population;

    Country()
    {
    }

    Country(string name, string capital, int code_of_country, int population, float area, int gdp)
    {
        this->name = name;
        this->capital = capital;
        this->code_of_country = code_of_country;
        this->population = population;
        this->area = area;
        this->gdp = gdp;
    }

    string get_name()
    {
        return name;
    }

    string get_capital()
    {
        return capital;

    }

    int get_code_of_country()
    {
        return code_of_country;
    }

    float get_area()
    {
        return area;
    }

    governmentType get_Type()
    {
        return Type;
    }

    void set_Type(governmentType Type) {
        this->Type = Type;
    }

    void PrintCountry()
    {
        cout << "\nName of country: " << name << "\nCapital: " << capital << "\nPhone code: " << code_of_country << "\nPopulation: " << population << "\nArea: " << area << "\nGDP(billions): " << gdp << endl;
    }

    void CalculatePopulationDensity()
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