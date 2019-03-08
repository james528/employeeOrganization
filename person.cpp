#include "person.h"

Person::Person()
{
	lastName = " ";
	firstName = " ";
	payRate = 0.0;
	hoursWorked = 0.0;
}


void Person::setFirstName(string fName)
{
	firstName = fName;
}

void Person::setLastName(string lName)
{
	lastName = lName;
}

void Person::setHoursWorked(float hours)
{
	hoursWorked = hours;
}

void Person::setPayRate(float rate)
{
	payRate = rate;
}

string Person::getFirstName()
{
	return firstName;
}

string Person::getLastName()
{
	return lastName;
}

float Person::getHoursWorked()
{
	return hoursWorked;
}

float Person::getPayRate()
{
	return payRate;
}

float Person::totalPay()
{
	return hoursWorked * payRate;
}

string Person::fullName()
{
	return firstName + " " + lastName;
}

