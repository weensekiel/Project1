#include "DriverLicense.h"
#include <iostream>
#include <string>

using namespace std;

size_t DriverLicense::noOfDriverLicense;

//default constructor
DriverLicense::DriverLicense()
{
	noOfDriverLicense++;
}

//parameterized constructor
DriverLicense::DriverLicense(string name, int age, string address, int sin, bool isExpired)
{
	setName(name);
	setAge(age);
	setAddress(address);
	setSin(sin);
	setIsExpired(isExpired);
	noOfDriverLicense++;
}

//copy constructor
DriverLicense::DriverLicense(const DriverLicense& p)
{
	*this = p;
	noOfDriverLicense++;
}

//copy assignment
DriverLicense& DriverLicense::operator=(const DriverLicense& p)
{
	if (this != &p)
	{
		name = p.name;
		age = p.age;
		address = p.address;
		sin = p.sin;
		sin = p.sin;
		isExpired = p.isExpired;
	}
	return *this;
}

//deconstructor
DriverLicense::~DriverLicense()
{
	noOfDriverLicense--;
}

//accessors and mutators
string DriverLicense::setName(string inputName)

{
	name = inputName;
	return name;
}

string DriverLicense::getName() const
{
	return name;
}

int DriverLicense::setAge(int inputAge)
{
	if (inputAge > 15)
	{
		age = inputAge;
	}
	else
	{
		string error = "Age must be 16 or over";
		throw out_of_range(error);
	}
	return age;
}

int DriverLicense::getAge() const
{
	return age;
}

int DriverLicense::getSin() const
{
	return sin;
}

//sets the sin number of the license holder
int DriverLicense::setSin(int inputSin)
{
	int temp = inputSin;
	int len;

	for (len = 0; temp > 0; len++)
	{
		temp = temp / 10;
	}
	if (len == 9)
	{
		sin = inputSin;
	}
	else
	{
		string error = "SIN must be 9 digits";
		throw out_of_range(error);
	}
	return sin;
}

string DriverLicense::getAddress() const
{
	return address;
}

string DriverLicense::setAddress(string inputAddress)
{
	address = inputAddress;
	return address;
}

bool DriverLicense::getIsExpired() const
{
	return isExpired;
}

bool DriverLicense::setIsExpired(bool inputIsExpired)
{
	isExpired = inputIsExpired;
	return isExpired;
}

size_t DriverLicense::numDriverLicenses()
{
	return noOfDriverLicense;
}

void DriverLicense::display() const
{
	cout << "\nName: " << name <<
		"\nAge: " << age <<
		"\nAddress: " << address <<
		"\nSIN: " << sin <<
		"\nIs Expired: " << boolalpha << isExpired << endl;
}