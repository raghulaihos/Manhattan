#pragma once
#include <vector>
 using namespace std;
	
 class Booking
 {
 public:
	 int key;
	 string CustomerName;
	 string CarType;
	 string CarMake;
	 string CarModel;
	
 };

class Class1
{
private:
     vector<Booking> BArray;
	 static Class1 *instance  ;
	 static bool flag;
	Class1()
	{
	}
public:
	void SetBArray(Booking B);
	
    vector<Booking> GetBArray();

	static Class1* Instance();

	~Class1() {
	
		flag = false;
	}
	
}; 

void Class1::SetBArray(Booking B) {
	BArray.push_back(B);
}
vector<Booking> Class1::GetBArray() {
	return BArray;
}
bool Class1::flag = false;
Class1* Class1::instance = NULL;
Class1* Class1::Instance() {

	if (flag != true) {
		instance = new Class1();
		flag = true;
		return instance;
	}
	else { return instance; }

}


