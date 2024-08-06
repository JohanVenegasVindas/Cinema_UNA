
#include <iostream>
#include <stdlib.h>

#include "LoadingScreen.h"
#include "Menus.h"

using namespace std;

int main()
{
	LoadingScreen loading;
	loading.show();

	Menus menus;
	menus.handleMainMenu();

	return 0;
}