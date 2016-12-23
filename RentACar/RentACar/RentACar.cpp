// RentACar.cpp : qDefines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
#include "DataContainer.h"
#include "Availability.h"
using namespace std;

int main()
{
	while (1)
	{
		cout << "enter choice 1 - Rent a car  , 0 - exit\n\n";
		char ch;
		cin >> ch;

		switch (ch)
		{
		case '1': RentACar();
			break;
		case '0': break;
		default: break;
		}


	}

	getchar();
	return 0;
}

