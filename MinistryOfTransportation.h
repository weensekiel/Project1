#pragma once
#include "DriverLicense.h"
#include <iostream>
#include <vector>
#include <string>

class MinistryOfTransportation
{
	std::vector<DriverLicense> licenses;
public:
	MinistryOfTransportation();
	MinistryOfTransportation(const MinistryOfTransportation& p);
	MinistryOfTransportation& operator=(const MinistryOfTransportation& p);
	MinistryOfTransportation& operator+=(const DriverLicense& item);
	DriverLicense& operator[](size_t idx);
	DriverLicense& operator[](std::string name);
	DriverLicense& operator[](const int sin);
	void display();
	~MinistryOfTransportation();

};