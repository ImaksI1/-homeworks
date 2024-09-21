#include "car.h"

Car::Car(){
    this->name = "Toyota";
    this->model = "Corolla";
    this->tankVolume = 50.0;
    this->engineVolume = 2.0; 
    this->numberOfSeats = 5;
    this->numberOfCylinders = 4;
    this->weight = 1200;
    this->horsepowers = 0;
}

string Car::getName() const
{
    return this->name;
}

void Car::setName(string carName)
{
    this->name = carName;
}

string Car::getModel() const
{
    return this->model;
}

void Car::setModel(string carModel)
{
    this->model = carModel;
}

double Car::getTankVolume() const
{
    return this->tankVolume;
}

void Car::setTankVolume(double volume)
{
    this->tankVolume = volume;
}

double Car::getEngineVolume() const
{
    return this->engineVolume;
}

void Car::setEngineVolume(double volume)
{
    this->engineVolume = volume;
}

int Car::getNumberOfSeats() const
{
    return this->numberOfSeats;
}
void Car::setNumberOfSeats(int seats)
{
    this->numberOfSeats = seats;
}
int Car::getNumberOfCylinders() const
{
    return this->numberOfCylinders;
}

void Car::setNumberOfCylinders(int cylinders)
{
    this->numberOfCylinders = cylinders;
}

double Car::getWeight() const
{
    return this->weight;
}

void Car::setWeight(double weight)
{
    this->weight = weight;
}

int Car::calculateEngineValue()
{
    return weight / 4 / engineVolume;
}


ostream& operator<<(ostream& a, const Car& car)
{
    a << "�����: " << car.name << endl;
    a << "������: " << car.model << endl;
    a << "��'�� ����: " << car.tankVolume << " ����" << endl;
    a << "��'�� �������: " << car.engineVolume << " ����" << endl;
    a << "ʳ������ �����: " << car.numberOfSeats << endl;
    a << "ʳ������ ������/�������: " << car.numberOfCylinders << endl;
    a << "����: " << car.weight << endl;
    return a;
}
