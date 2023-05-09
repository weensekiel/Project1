#include "MinistryOfTransportation.h"
#include <string>
#include <iostream>
#include <vector>

//default constructor
MinistryOfTransportation::MinistryOfTransportation()
{

}

//copy constructor
MinistryOfTransportation::MinistryOfTransportation(const MinistryOfTransportation& p)
{
	*this = p;
}

//copy assignment
MinistryOfTransportation& MinistryOfTransportation::operator=(const MinistryOfTransportation& p)
{
	if (this != &p)
	{
		licenses = p.licenses;
	}
	return *this;
}

//add driver license 
MinistryOfTransportation& MinistryOfTransportation::operator+=(const DriverLicense& item)
{
	for (std::vector<DriverLicense>::iterator it = licenses.begin(); it != licenses.end(); it++)
	{
		if (it->getName() == item.getName())
		{
			return *this;
		}
	}
	//item not in list
	licenses.push_back(item);

	return *this;
}



DriverLicense& MinistryOfTransportation::operator[](size_t idx)
{
	return licenses[idx];
}

DriverLicense& MinistryOfTransportation::operator[](const std::string name)
{
	for (std::vector<DriverLicense>::iterator it = licenses.begin(); it != licenses.end(); it++)
	{
		if (it->getName() == name)
		{
			return *it;
		}
	}
}

DriverLicense& MinistryOfTransportation::operator[](const int sin)
{
	for (std::vector<DriverLicense>::iterator it = licenses.begin(); it != licenses.end(); it++)
	{
		if (it->getSin() == sin)
		{
			return *it;
		}
	}
}

//displays driverlicense information
void MinistryOfTransportation::display()
{
	for (std::vector<DriverLicense>::iterator it = licenses.begin(); it != licenses.end(); it++)
	{
		it->display();
	}
}

//destructor
MinistryOfTransportation::~MinistryOfTransportation()
{

}