#include <string>
#include <iostream>
using namespace std;

enum FulerType {
    petrol, diesel, gas, electrisity
};
class Car {
private:
    string name;           
    string model;    
    FulerType Fuel;
    double tankVolume;     
    double engineVolume;   
    int numberOfSeats;     
    int numberOfCylinders; 
    int weight;
    int horsepowers;
public:
    Car();

    string getName() const;

    void setName(string carName);

    string getModel() const;

    void setModel(string carModel);

    double getTankVolume() const;

    void setTankVolume(double volume);

    double getEngineVolume() const;

    void setEngineVolume(double volume);

    int getNumberOfSeats() const;

    void setNumberOfSeats(int seats);

    int getNumberOfCylinders() const;

    void setNumberOfCylinders(int cylinders);

    double getWeight() const;

    void setWeight(double weight);

    int calculateEngineValue();

    friend ostream& operator<<(ostream& a, const Car& car);

};