#include <string>
#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    string coffeeModel;
    int modeCount;
    double waterTankVolume;
    int power;
    string coffeeType;
    int cupCapacity;
    string color;
    bool capuchinator;
    double coffeeCount;
    double milkCount;
    double waterCount;

public:
    CoffeeMachine() {
        this->coffeeModel = "Philips 3000";
        this->modeCount = 3;
        this->waterTankVolume = 1.5;
        this->power = 1500;
        this->coffeeType = "Еспресо";
        this->cupCapacity = 2;
        this->color = "Чорний";
        this->capuchinator = true;
        this->coffeeCount = 200;
        this->milkCount = 1.0;
        this->waterCount = 1.5;
    }

    string getCoffeeModel();
    void setCoffeeModel(string model);

    int getModeCount();
    void setModeCount(int count);

    double getWaterTankVolume();
    void setWaterTankVolume(double volume);

    int getPower();
    void setPower(int powerValue);

    string getCoffeeType();
    void setCoffeeType(string type);

    int getCupCapacity();
    void setCupCapacity(int capacity);

    string getColor();
    void setColor(string machineColor);

    bool getCapuchinator();
    void setCapuchinator(bool frother);

    double getCoffeeCount();
    void setCoffeeCount(double count);

    double getMilkCount();
    void setMilkCount(double count);

    double getWaterCount();
    void setWaterCount(double count);

    void createCoffee(string type, int cups);

    void displayInfo();
};
