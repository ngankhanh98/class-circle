#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Circle
{
	float mR;
	const double pi = 3.14;

public:
	Circle();
	Circle(float R);
	~Circle();

	float GetR();
	void Output(ofstream &outfile);		// xuất bán kính 1 Circle ra .bin
};

