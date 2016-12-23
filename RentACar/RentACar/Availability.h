#include "stdio.h"
#include <iostream>
#include "DataContainer.h"
#include <string>
using namespace std;
void CheckAvailability(int CarType, string ,string);
void PushIntoVector(string, string ,string ,string);
void RentACar();
void ChooseCar(int);
int N_Economy = 30, N_Eecutive = 20, N_Suv = 10;
int key = 0;
// when rent a car is called 
void RentACar()
{
	int CarType;
	cout << "choose car type  \n";
	cout << "1-Economy 2-Executive 3-Suv\n";
	int ch1;
	cin >> ch1;
	if (ch1 == 1 || ch1 == 2 || ch1 == 3) {
		CarType = ch1;
		ChooseCar(CarType);
	}
	else {
		cout << "invaild choice ! \n";
		RentACar();
	}


}
void ChooseCar(int CarType)
{
	cout << "Choose car company! \n";
	cout << "1-Ford 2-Maruthi 3-Tata\n";
	int ch1;
	cin >> ch1;
	
	switch (ch1) {
	case 1: if (CarType == 1)
	{
		cout << " 1- figo 2-classic\n";
		int ch2;
		cin >> ch2;
		if (ch2 == 1 ) { 
			string CarModel = "Figo";
			string CarMake = "Ford";
			CheckAvailability(CarType, CarMake, CarModel);
		}else if(ch2==2){
			string CarModel = "Classic";
			string CarMake = "Ford";
			CheckAvailability(CarType, CarMake, CarModel);
		}
		else { cout << "invalid entry! "; ChooseCar(CarType); }
	}

			else if (CarType == 2) {
				cout << " 1- Aspire 2-Ecosport\n";
				int ch2;
				cin >> ch2;
				if (ch2 == 1) {
					string CarModel = "Aspire";
					string CarMake = "Ford";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else if (ch2 == 2) {
					string CarModel = "Ecosport";
					string CarMake = "Ford";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else { cout << "invalid entry! "; ChooseCar(CarType); }
			}
			else {
				cout << " 1- Endeavour \n";
				int ch2;
				cin >> ch2;
				if (ch2 == 1 ) {
					string CarModel = "Endeavour";
					string CarMake = "Ford";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else { cout << "invalid entry! "; ChooseCar(CarType); }
			}
			break;

	case 2: if (CarType == 1)
	{
		cout << " 1- Swift 2-Ritz\n";
		int ch2;
		cin >> ch2;
		if (ch2 == 1) {
			string CarModel = "Swift";
			string CarMake = "Maruti";
			CheckAvailability(CarType, CarMake, CarModel);
		}
		else if (ch2 == 2) {
			string CarModel = "Ritz";
			string CarMake = "Maruti";
			CheckAvailability(CarType, CarMake, CarModel);
		}
		else { cout << "invalid entry! "; ChooseCar(CarType); }
	}
			else if (CarType == 2) {
				cout << " 1- Dzire 2-Ciaz\n";
				int ch2;
				cin >> ch2;
				if (ch2 == 1) {
					string CarModel = "dzire";
					string CarMake = "Maruti";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else if (ch2 == 2) {
					string CarModel = "Ciaz";
					string CarMake = "Maruti";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else { cout << "invalid entry! "; ChooseCar(CarType); }
			}
			else {
				cout << " 1- Grand Vitara \n";
				int ch2;
				cin >> ch2;
				if (ch2 == 1) {
					string CarModel = "rand Vitara";
					string CarMake = "Maruti";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else { cout << "invalid entry! "; ChooseCar(CarType); }
			} break;

	case 3: if (CarType == 1)
	{
		cout << " 1- Indica 2-Tiago\n";
		int ch2;
		cin >> ch2;
		if (ch2 == 1) {
			string CarModel = "Indica";
			string CarMake = "Tata";
			CheckAvailability(CarType, CarMake, CarModel);
		}
		else if (ch2 == 2) {
			string CarModel = "Tiago";
			string CarMake = "Tata";
			CheckAvailability(CarType, CarMake, CarModel);
		}
		else { cout << "invalid entry! "; ChooseCar(CarType); }
	}
			else if (CarType == 2) {
				cout << " 1- Zest 2-Indigo\n";
				int ch2;
				cin >> ch2;
				if (ch2 == 1) {
					string CarModel = "Zest";
					string CarMake = "Tata";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else if (ch2 == 2) {
					string CarModel = "indigo";
					string CarMake = "Tata";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else { cout << "invalid entry! "; ChooseCar(CarType); }
			}
			else {
				cout << " 1- Safari Storme \n";
				int ch2;
				cin >> ch2;
				if (ch2 == 1) {
					string CarModel = "Safari Storme";
					string CarMake = "Tata";
					CheckAvailability(CarType, CarMake, CarModel);
				}
				else { cout << "invalid entry! "; ChooseCar(CarType); }
			} break;

	default: cout << "wrong option! "; ChooseCar(CarType);
	}
}

void CheckAvailability(int CarType, string CarMake, string CarModel) {

	if (CarType == 1) {
		if (N_Economy > 0) {
			cout << "Your car is available ! \n";
			cout << " Enter Customer Name\n";
			string Name;
			cin >> Name;
			PushIntoVector("Economy", CarMake, CarModel,Name);
		}
		else if (CarType == 2) {
			if (N_Eecutive > 0) {
				cout << "Your car is available ! \n";
				cout << " Enter Customer Name\n";
				string Name;
				cin >> Name;
				PushIntoVector("Executive", CarMake, CarModel,Name);
			}
			else if (CarType == 3) {
				if (N_Suv > 0) {
					cout << "Your car is available ! \n";
					cout << " Enter Customer Name\n";
					string Name;
					cin >> Name;
					PushIntoVector("Suv", CarMake, CarModel,Name);
				}
			}


		}
	}
}

void PushIntoVector(string Type, string Make,string Model,string Name)
{
	key++;
	Class1 *C = Class1::Instance();
	Booking B;
	B.CarType = Type;
	B.CarMake = Make;
	B.CarModel = Model;
	B.CustomerName = Name;
	B.key = key;
	C->SetBArray(B);


}