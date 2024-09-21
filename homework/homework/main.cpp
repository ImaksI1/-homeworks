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
        cout << "Кількість кінських сил: " << myCar.calculateEngineValue() << endl;
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
        myCoffeeMachine.setCoffeeType("Лате");
        myCoffeeMachine.setCupCapacity(4);
        myCoffeeMachine.setColor("Сріблястий");
        myCoffeeMachine.setCapuchinator(true);
        myCoffeeMachine.setCoffeeCount(150); 
        myCoffeeMachine.setMilkCount(0.8);   
        myCoffeeMachine.setWaterCount(1.5);  

        

        do {
            cout << "\n=== Меню кавомашини ===" << endl;
            cout << "1. Показати інформацію про кавоварку" << endl;
            cout << "2. Приготувати каву" << endl;
            cout << "3. Вийти" << endl;
            cout << "Виберіть опцію: ";
            cin >> choice;

            switch (choice) {
            case 1:
                myCoffeeMachine.displayInfo();
                break;
            case 2:
                cout << "\nВведіть тип кави (Espreso, Late, Capuchino, Mocachino, Americano): ";
                cin >> coffeeType;
                cout << "Введіть кількість чашок: ";
                cin >> cupCount;

                if (cupCount > myCoffeeMachine.getCupCapacity()) {
                    cout << "Неможливо приготувати більше " << myCoffeeMachine.getCupCapacity() << " чашок за один раз." << endl;
                }
                else {
                    myCoffeeMachine.createCoffee(coffeeType, cupCount);
                }
                break;
            case 3:
                cout << "Вихід з програми..." << endl;
                break;
            default:
                cout << "Неправильний вибір. Спробуйте ще раз." << endl;
            }

        } while (choice != 3);
    }
    
    return 0;

}