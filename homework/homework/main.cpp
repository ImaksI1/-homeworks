#include "car.h"
#include "Coffee_Machine.h"
int main() {
    setlocale(LC_ALL, "ukr");
    Car myCar;

    //myCar.setName("Honda");
    //myCar.setModel("Civic");
    //myCar.setTankVolume(55.0);
    //myCar.setEngineVolume(1.8); 
    //myCar.setNumberOfSeats(4);
    //myCar.setNumberOfCylinders(4);
    int a = 0;
    cout << "1 or 2: ";
    cin >> a;
    if (a == 1) {
        cout << myCar;
        cout << "ʳ������ ������� ���: " << myCar.calculateEngineValue() << endl;
    }
    else {
        CoffeeMachine myCoffeeMachine;
        int choice;
        string coffeeType;
        int cupCount;

        myCoffeeMachine.setCoffeeModel("DeLonghi Magnifica");
        myCoffeeMachine.setModeCount(5);
        myCoffeeMachine.setWaterTankVolume(2.0);
        myCoffeeMachine.setPower(1800);
        myCoffeeMachine.setCoffeeType("����");
        myCoffeeMachine.setCupCapacity(4);
        myCoffeeMachine.setColor("���������");
        myCoffeeMachine.setCapuchinator(true);
        myCoffeeMachine.setCoffeeCount(150); 
        myCoffeeMachine.setMilkCount(0.8);   
        myCoffeeMachine.setWaterCount(1.5);  

        

        do {
            cout << "\n=== ���� ���������� ===" << endl;
            cout << "1. �������� ���������� ��� ���������" << endl;
            cout << "2. ����������� ����" << endl;
            cout << "3. �����" << endl;
            cout << "������� �����: ";
            cin >> choice;

            switch (choice) {
            case 1:
                myCoffeeMachine.displayInfo();
                break;
            case 2:
                cout << "\n������ ��� ���� (Espreso, Late, Capuchino, Mocachino, Americano): ";
                cin >> coffeeType;
                cout << "������ ������� �����: ";
                cin >> cupCount;

                if (cupCount > myCoffeeMachine.getCupCapacity()) {
                    cout << "��������� ����������� ����� " << myCoffeeMachine.getCupCapacity() << " ����� �� ���� ���." << endl;
                }
                else {
                    myCoffeeMachine.createCoffee(coffeeType, cupCount);
                }
                break;
            case 3:
                cout << "����� � ��������..." << endl;
                break;
            default:
                cout << "������������ ����. ��������� �� ���." << endl;
            }

        } while (choice != 3);
    }
    
    return 0;

}