#include "person.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
void writeData(string& out)
{
	const int size = 20;
	ofstream outfile;
	Person employees[size];
	outfile.open(out.c_str());

	for (int j = 0; j < size; j++)
	{
		outfile << employees[j].fullName() << " ";
		outfile << employees[j].totalPay() << endl;
	}

	outfile.close();
}

void readData(string& in)
{
	const int size = 20;
	Person employees[size];
	ifstream infile;
	string t, r, h;
	float a, s;

	infile.open(in);

	for (int i = 0; i < size; i++)
	{
		infile >> t >> r;
		infile >> a >> s;
		employees[i].setFirstName(t);
		//cout << hi[i].getFirstName() << " ";
		employees[i].setLastName(r);
		//cout << hi[i].getLastName() << " ";
		employees[i].setHoursWorked(a);
		//cout << hi[i].getHoursWorked() << " ";
		employees[i].setPayRate(s);
		//cout << hi[i].getPayRate() << endl;
		getline(infile, h);
		if (infile.eof())
			break;
	}
	infile.close();
}
*/
int main()
{
	ofstream outfile;
	ifstream infile;
	const int n = 20;
	Person hi[20];
	string t, r, h;
	float a, s;
	string input = "input.txt",
		output = "output.txt";

	//readData(input);
	//writeData(output);


	infile.open(input);

	for (int i = 0; i < n; i++)
	{
		infile >> t >> r;
		infile >> a >> s;
		hi[i].setFirstName(t);
		hi[i].setLastName(r);
		hi[i].setHoursWorked(a);
		hi[i].setPayRate(s);		
		getline(infile, h);
		if (infile.eof())
			break;
	}
	infile.close();

	
	outfile.open(output);
	
	for (int j = 0; j < n; j++)
	{
		outfile << hi[j].fullName() << " ";
		outfile << hi[j].totalPay() << endl;
	}

	outfile.close();


	system("pause");
	return 0;
}
