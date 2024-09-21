#include <string>
#include <iostream>
using namespace std;

enum FulerType {
    petrol, diesel, gas, electrisity
};
class Car {
private:
    string name;           // Назва виробника
    string model;          // Модель автомобіля
    string color;
    double tankVolume;     // Об'єм бака в літрах
    double engineVolume;   // Об'єм двигуна в літрах
    int numberOfSeats;     // Кількість сидінь
    int numberOfCylinders; // Кількість поршнів/циліндрів
    int weight;
public:
    Car();

    string getName() const;

    void setName(string carName);

    string getModel() const;

    void setModel(string carModel);

    string getColor() const;

    void setColor(string carcolor);

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

    friend ostream& operator<<(ostream& a, const Car& car);
};