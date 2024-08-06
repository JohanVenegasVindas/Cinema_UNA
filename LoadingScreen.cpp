#include "LoadingScreen.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

LoadingScreen::LoadingScreen(){}

void LoadingScreen::show() {
	cout << endl;
	cout << "\t**********************\n";
	cout << "\t******* CINEMAX ******\n";
	cout << "\t**********************\n\n";

	cout << "Loading: [";
	for (int i = 0; i < barWidth; i++)
	{
		cout << " ";
	}
	cout << "]\rLoading: [";

	for (int i = 0; i < barWidth; i++)
	{
		cout << "=";
		this_thread::sleep_for(chrono::milliseconds(duration / barWidth));
	}

	cout << "] Done!\n";

}

void LoadingScreen::returningScreen() {
	cout << "returning.";
	for (int i = 0; i < 5; i++) {
		cout << ".";
		this_thread::sleep_for(chrono::milliseconds(200));
	}
}

