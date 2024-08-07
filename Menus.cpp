#include "Menus.h"
#include "LoadingScreen.h"

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <chrono>
#include <thread>

using namespace std;

void Menus::showMainMenu() {
	system("cls");
	cout << endl;
	cout << "\t*********************\n";
	cout << "\t***** Main Menu *****\n";
	cout << "\t*********************\n";
	cout << "\n\n";
	cout << "\n1-Ticket reservation.";
	cout << "\n2-Tickets Sale.";
	cout << "\n3-Maintenance.";
	cout << "\n4-File.";
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
	cout << "\t*********************\n";
	cout << "\t**** Maintenance ****\n";
	cout << "\t*********************\n";
	cout << "\n\n";
	cout << "\n1-Add Movies.";
	cout << "\n2-Add Rooms.";
	cout << "\n3-Add Schedules.";
	cout << "\n4-Add ticket cost.";
	cout << "\n\n9-Return to Main Menu.\n\n";
	cout << "Enter an option: ";

}

void Menus::showReservationMenu() {
	system("cls");
	cout << endl;
	cout << "\t****************************\n";
	cout << "\t**** Ticket reservation ****\n";
	cout << "\t****************************\n";
	cout << "\n1-Book ticket for the movie\n";
	cout << "\n\n9-Return to Main Menu.\n\n";
	cout << "Enter an option: ";
}

void Menus::showSalesMenu() {
	system("cls");
	cout << endl;
	cout << "\t**************************\n";
	cout << "\t****** Tickets Sale ******\n";
	cout << "\t**************************\n";
	cout << "\n\n";
	cout << "\n*Before purchasing the ticket,";
	cout << "\nyou must have a reservation number*.";
	cout << "\n\n1-Buy Ticket for the movie.";
	cout << "\n\n9-Return to Main Menu.\n\n";
	cout << "Enter an option: ";
}

void Menus::handleMainMenu() {
	LoadingScreen returning;
	int option;
	do {
		showMainMenu();
		cin >> option;
		switch (option)
		{
		case 1:
			handleReservationMenu();
			break;
		case 2:
			handleSalesMenu();
			break;
		case 3:
			handleMaintenanceMenu();
			break;
		case 4:
			handleFileMenu();
			break;
		case 9:
			returning.returning();
			break;
		default:
			cout << "\nInvalid option. Please try again\n\n";
			system("pause");
			break;
		}
	} while (option != 9);
}

void Menus::handleFileMenu() {
	LoadingScreen returning;
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
			returning.returning();
			break;
		}
	} while (option != 9);
}

void Menus::handleMaintenanceMenu() {
	int option;
	LoadingScreen returning;
	do {
		showMaintenanceMenu();
		cin >> option;
		switch (option) {
		case 1:
			//funcion para agregar las peliculas a la caltelera.
			break;
		case 2:
			//funcion para agregar salas.
			break;
		case 3:
			// funcion para agregar horarios a las peliculas.
			break;
		case 4:
			// Funcio para agregar el costo de las entradas.
			break;
		case 9:
			returning.returning();
			break;
		default:
			cout << "Invalid opption.Please Try Again.\n";
			system("pause");
			break;
		}
	} while (option != 9);
}

void Menus::handleReservationMenu() {
	int option;
	LoadingScreen returning;
	do {
		showReservationMenu();
		cin >> option;
		switch (option)
		{
		case 1:
			//funcion para reservar el ticket de la pelicula.
			break;
		case 9:
			returning.returning();
			break;
		default:
			cout << "Invalid opption.Please Try Again.\n";
			system("pause");
			break;
		}
	} while (option != 9);
}

void Menus::handleSalesMenu() {
	int option;
	LoadingScreen returning;
	do {
		showSalesMenu();
		cin >> option;
		switch (option) {
		case 1:
			//Funcion para la venta de Tickets
			break;
		case 9:
			returning.returning();
			break;
		default:
			cout << "Invalid opption.Please Try Again.\n";
			system("pause");
			break;
		}
	} while (option != 9);

}
