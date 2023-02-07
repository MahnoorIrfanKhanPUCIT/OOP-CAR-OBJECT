#include <iostream>
#include <string.h>

using namespace std;
/*

class Car {

private:
	int yearModel;
	string make;
	int speed;

public:
	//CONSTRUCTORS
	Car()
	{
		yearModel = 0;
		make = '0';
		speed = 0;
	}

	Car(int a, string b)    //paramterised constructor
	{
		yearModel = a;
		make = b;
		speed = 0;
	}
	
	Car(const Car& car1)
	{
		yearModel = car1.yearModel;
		make = car1.make;
		speed = car1.speed;
	}
	~Car()
	{
		cout << "Destructor called...." << endl;
	}

	//ACCESSORS
	int getModel()
	{
		return yearModel;
	}

	string getMake()
	{
		return make;
	}

	int getSpeed()
	{
		return speed;
	}

	int carAccelerate()
	{
		speed = speed + 5;
		return speed;
	}

	int carBrake()
	{
		speed = speed - 5;
		return speed;
	}

	//SETTORS
	void setModel(int x)
	{
		yearModel = x;
	}
	void setMake(string y)
	{
		make = y;
	}
	void setSpeed(int z)
	{
		speed = z;
	}

	//Member functions
public:
	void setCar(int a,string b,int c)
	{
		yearModel = a;
		make = b;
		speed = c;
	}

	void getCar()
	{
		int yearModel;
		string make;
		int speed;

		cout << "Enter the model of car : ";
		cin >> yearModel;
		cout << "Enter the make of car : ";
		cin >> make;
		cout << "Enter the speed of car : ";
		cin >> speed;
		cout << endl << endl;

		setCar(yearModel, make, speed);
		carAccelerate();
	}

	void putCar()
	{
		cout << getModel() << "\t" << "\t" << getMake() << "\t" << "\t" << getSpeed() << endl;
	}

	
};

int main()
{
	Car car1, car2, car3, car4, car5;
	
	//Car1
	cout << "Enter Info for car-1:" << endl;
	car1.getCar();

	//Car2
	cout << "Enter Info for car-2:" << endl;
	car2.getCar();

	//Car3
	cout << "Enter Info for car-3:" << endl;
	car3.getCar();

	//Car4
	cout << "Enter Info for car-4:" << endl;
	car4.getCar();

	//Car5
	cout << "Enter Info for car-5:" << endl;
	car5.getCar();

	cout << "MODEL" << "\t\t" << "MAKE" << "\t\t" << "SPEED" << endl;
	car1.putCar();
	car2.putCar();
	car3.putCar();
	car4.putCar();
	car5.putCar();

}*/


class Car {

private:
	int yearModel;
	string make;
	int speed;

public:
	//CONSTRUCTORS

	Car(int a, string b)    //paramterised constructor
	{
		yearModel = a;
		make = b;
		speed = 0;
	}

	Car(const Car& car1)
	{
		yearModel = car1.yearModel;
		make = car1.make;
		speed = car1.speed;
	}
	~Car()
	{
		cout << "Destructor called...." << endl;
	}

	//ACCESSORS
	int getModel()
	{
		return yearModel;
	}

	string getMake()
	{
		return make;
	}

	int getSpeed()
	{
		return speed;
	}

	int carAccelerate()
	{
		speed = speed + 5;
		return speed;
	}

	int carBrake()
	{
		speed = speed - 5;
		return speed;
	}

	//SETTORS
	void setModel(int x)
	{
		yearModel = x;
	}
	void setMake(string y)
	{
		make = y;
	}
	void setSpeed(int z)
	{
		speed = z;
	}

	//Member functions
public:
	void setCar(int a, string b, int c)
	{
		yearModel = a;
		make = b;
		speed = c;
	}

	void getCar()
	{
		int yearModel;
		string make;
		int speed;

		cout << "Enter the model of car : ";
		cin >> yearModel;
		cout << "Enter the make of car : ";
		cin >> make;
		cout << "Enter the speed of car : ";
		cin >> speed;
		cout << endl << endl;

		setCar(yearModel, make, speed);
		carAccelerate();
	}

	void putCar()
	{
		cout << getModel() << "\t" << "\t" << getMake() << "\t" << "\t" << getSpeed() << endl;
	}


};

int main()
{
	Car car1(1,"Suzuki"), car2(car1), car3(car2), car4(car3), car5(car4);

	//Car1
	cout << "Enter Info for car-1:" << endl;
	car1.getCar();

	//Car2
	cout << "Enter Info for car-2:" << endl;
	car2.getCar();

	//Car3
	cout << "Enter Info for car-3:" << endl;
	car3.getCar();

	//Car4
	cout << "Enter Info for car-4:" << endl;
	car4.getCar();

	//Car5
	cout << "Enter Info for car-5:" << endl;
	car5.getCar();

	cout << "MODEL" << "\t\t" << "MAKE" << "\t\t" << "SPEED" << endl;
	car1.putCar();
	car2.putCar();
	car3.putCar();
	car4.putCar();
	car5.putCar();

}