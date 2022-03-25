#pragma once
#include <iostream>
#include <string>

struct date {
	int day;
	int mounth;
	int year;
};

struct person {
	std::string name;
	date birthday;
	std::string position = "programer";
	int salary = 50000;
};

void showObj(date &D);
void showObj(person& P);