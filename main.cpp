
#include <iostream>
#include <stdlib.h>

#include "LoadingScreen.h"
#include "Menus.h"

using namespace std;

int main()
{
	cout << endl;
	cout << "\t**********************\n";
	cout << "\t******* CINEMAX ******\n";
	cout << "\t**********************\n\n";
	LoadingScreen loading;
	loading.show();

	Menus menus;
	menus.handleMainMenu();

	return 0;
}