#include "structures.h"
#include <iostream>

void showObj(date& D) {
	std::cout << D.day << "." << D.mounth << "." << D.year << "\n";
}

void showObj(person& P){
	std::cout << "Name: " << P.name << "\n";
	std::cout << "Birthday: ";
	showObj(P.birthday);
	std::cout << "Position: " << P.position << "\n";
	std::cout << "Salary: " << P.salary << "\n";

}
