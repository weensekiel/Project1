#pragma once

#include <string>

class DriverLicense
{
	std::string name;
	int age = 0;
	std::string address;
	int sin = 0;
	bool isExpired = false;
	static size_t noOfDriverLicense;
public:
	//default constructor
	DriverLicense();

	//parameterized constructor
	DriverLicense(std::string name, int age, std::string address, int sin, bool isExpired);

	//copy constructor
	DriverLicense(const DriverLicense& p);

	//copy assignment 
	DriverLicense& operator=(const DriverLicense& p);

	//destructor
	~DriverLicense();

	//accessors and mutators
	std::string getName() const;
	std::string setName(std::string name);

	int getAge() const;
	int setAge(int age);

	std::string getAddress() const;
	std::string setAddress(std::string address);

	int getSin() const;
	int setSin(int sin);

	bool getIsExpired() const;
	bool setIsExpired(bool isExpired);

	//returns number of driver licenses
	static size_t numDriverLicenses();

	void display() const;
};