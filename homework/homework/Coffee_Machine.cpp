#include "Coffee_Machine.h"

void CoffeeMachine::displayInfo() {
    cout << "Модель кавомашини: " << coffeeModel << endl;
    cout << "Кількість режимів приготування: " << modeCount << endl;
    cout << "Об'єм резервуара для води: " << waterTankVolume << " літрів" << endl;
    cout << "Потужність: " << power << " Ватт" << endl;
    cout << "Тип кави: " << coffeeType << endl;
    cout << "Кількість чашок за один раз: " << cupCapacity << endl;
    cout << "Колір кавоварки: " << color << endl;
    cout << "Наявність капучинатора: " << (capuchinator ? "Так" : "Ні") << endl;
    cout << "Кількість кави: " << coffeeCount << " г" << endl;
    cout << "Кількість молока: " << milkCount << " літрів" << endl;
    cout << "Кількість води: " << waterCount << " літрів" << endl;
}

string CoffeeMachine::getCoffeeModel()
{
    return this->coffeeModel;
}

void CoffeeMachine::setCoffeeModel(string model)
{
    this->coffeeModel = model;
}

int CoffeeMachine::getModeCount()
{
    return this->modeCount;
}

void CoffeeMachine::setModeCount(int count)
{
    this->modeCount = count;
}

double CoffeeMachine::getWaterTankVolume()
{
    return this->waterTankVolume;
}

void CoffeeMachine::setWaterTankVolume(double volume)
{
    this->waterTankVolume = volume;
}

int CoffeeMachine::getPower()
{
    return this->power;
}

void CoffeeMachine::setPower(int powerValue)
{
    this->power = powerValue;
}

string CoffeeMachine::getCoffeeType()
{
    return this->coffeeType;
}

void CoffeeMachine::setCoffeeType(string type)
{
    this->coffeeType = type;
}

int CoffeeMachine::getCupCapacity()
{
    return this->cupCapacity;
}

void CoffeeMachine::setCupCapacity(int capacity)
{
    this->cupCapacity = capacity;
}

string CoffeeMachine::getColor()
{
    return this->color;
}

void CoffeeMachine::setColor(string machineColor)
{
    this->color = machineColor;
}

bool CoffeeMachine::getCapuchinator()
{
    return this->capuchinator;
}

void CoffeeMachine::setCapuchinator(bool frother)
{
    this->capuchinator = frother;
}

double CoffeeMachine::getCoffeeCount()
{
    return this->coffeeCount;
}

void CoffeeMachine::setCoffeeCount(double count)
{
    this->coffeeCount = count;
}

double CoffeeMachine::getMilkCount()
{
    return this->milkCount;
}

void CoffeeMachine::setMilkCount(double count)
{
    this->milkCount = count;
}

double CoffeeMachine::getWaterCount()
{
    return this->waterCount;
}

void CoffeeMachine::setWaterCount(double count)
{
    this->waterCount = count;
}

void CoffeeMachine::createCoffee(string type, int cups) {
    double waterNeeded = 0.2 * cups;   
    double coffeeNeeded = 10.0 * cups; 
    double milkNeeded = (capuchinator && type == "Капучино") ? 0.1 * cups : 0.0; // 0.1 літра молока на одну чашку капучино

    if (waterCount < waterNeeded) {
        cout << "Недостатньо води для приготування кави." << endl;
        return;
    }

    if (coffeeCount < coffeeNeeded) {
        cout << "Недостатньо кави для приготування." << endl;
        return;
    }

    if (milkNeeded > 0 && milkCount < milkNeeded) {
        cout << "Недостатньо молока для приготування капучино." << endl;
        return;
    }

    waterCount -= waterNeeded;
    coffeeCount -= coffeeNeeded;
    milkCount -= milkNeeded;

    cout << "Приготовано " << cups << " чашок кави типу " << type << "!" << endl;
}

