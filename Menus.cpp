#include "Menus.h"

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <chrono>
#include <thread>

using namespace std;

void Menus::showMainMenu() {
	system("cls");
	cout << endl;
	cout << "\t********************\n";
	cout << "\t***** Main Menu ****\n";
	cout << "\t********************\n";
	cout << "\n\n";
	cout << "\n1-File.";
	cout << "\n2-Maintenance.";
	cout << "\n3-Reservation.";
	cout << "\n4-Sales.";
	cout << "\n\n9-Exit\n\n";
	cout << "Enter an option: ";

}

void Menus::showFileMenu() {
	system("cls");
	cout << endl;
	cout << "\t********************\n";
	cout << "\t******* File *******\n";
	cout << "\t********************\n";
	cout << "\n\n";
	cout << "\n1-About";
	cout << "\n\n9-Return to Main Menu.\n\n";
	cout << "Enter an option: ";

}

void Menus::showMaintenanceMenu() {
	system("cls");
	cout << endl;
	cout << "\t********************\n";
	cout << "\t**** Maintenance ***\n";
	cout << "\t********************\n";
	cout << "\n\n";
	cout << "\n1-Movie.";
	cout << "\n2-Rooms.";
	cout << "\n3-Schedules.";
	cout << "\n\n9-Return to Main Menu.\n\n";
	cout << "Enter an option: ";

}

void Menus::showReservationMenu() {
	system("cls");
	cout << endl;
	cout << "\t********************\n";
	cout << "\t**** Reservation ***\n";
	cout << "\t********************\n";
	cout << "\n\n";
	cout << "\n1-Movie.";
	cout << "\n2-Rooms.";
	cout << "\n3-Schedules.";
	cout << "\n\n9-Return to Main Menu.\n\n";
	cout << "Enter an option: ";

}

void Menus::showSalesMenu() {
	system("cls");
	cout << endl;
	cout << "\t********************\n";
	cout << "\t******* Sales ******\n";
	cout << "\t********************\n";
	cout << "\n\n";
	cout << "\n1-Movie.";
	cout << "\n2-Reservation.";
	cout << "\n\n9-Return to Main Menu.\n\n";
	cout << "Enter an option: ";
}

void Menus::handleMainMenu(){

	int option;
	do {
		showMainMenu();
		cin >> option;
		switch (option)
		{
		case 1:
			handleFileMenu();
			break;
		case 2:
			handleMaintenanceMenu();
			break;
		case 3:
			handleReservationMenu();
			break;
		case 4:
			handleSalesMenu();
			break;
		case 9:
			cout << "\nExiting.";
			for (int i = 0; i < 5; i++) {
				cout << ".";
				this_thread::sleep_for(chrono::milliseconds(200));
			}
			cout << "\n";
			break;
		default:
			cout << "\nInvalid option. Please try again\n\n";
			system("pause");
			break;
		}

	} while (option !=9);

}

void Menus::handleFileMenu() {

	int option;
	do {

		showFileMenu();
		cin >> option;
		switch (option)
		{
		case 1:
			cout << "\n\nThis project was carried \n"
				<< "out by Johan Venegas Vindas, \n"
				<< "for study and practical purposes at \n"
				<< "the National University of Costa Rica.\n\n";
			system("pause");
			break;
		default:
			cout << "returning.";
			for(int i=0;i<5;i++){
				cout << ".";
				this_thread::sleep_for(chrono::milliseconds(200));
			}
			break;
		}

	} while (option != 9);

}

void Menus::handleMaintenanceMenu() {

}

void Menus::handleReservationMenu() {

}

void Menus::handleSalesMenu() {

}
