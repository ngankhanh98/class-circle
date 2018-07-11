#include "stdafx.h"
#include "Circle.h"

using namespace std;

Circle::Circle()
{
	mR = float(1+rand() % 10) / (1+rand() % 10);
}

Circle::Circle(float R)
{
	mR = R;
}

Circle::~Circle()
{
}

float Circle::GetR()
{
	return mR;
}

void Circle::Output(ofstream & outfile)
{
	outfile.write((const char*)(&this->mR), sizeof(this->mR));
}
