#include "stdafx.h"
#include "ArrayCircle.h"

ArrayCircle::ArrayCircle()
{
}

ArrayCircle::ArrayCircle(int &n)
{
	do
	{
		cout << "a number of Circles: ";
		cin >> n;
	} while (!(0 < n&&n < 10));

	mSize = n;

	for (int i = 0; i < mSize; i++)
	{
		mpArr.push_back(new Circle);
	}
}

ArrayCircle::~ArrayCircle()
{
}

void ArrayCircle::CalcArea(string filename, int n)
{
	double result = 0;

	ifstream FILE;
	FILE.open(filename, ios::in | ios::binary);
	float newCir = 0;
	for (int i = 0; i < n; i++)
	{
		FILE.read((char*)(&newCir), sizeof(newCir));
		result += (newCir*newCir*3.14);
	}

	cout << result;
}

void ArrayCircle::Output(string &filename)
{
	cout << "output file (without \".bin\"):";
	rewind(stdin);
	getline(cin, filename);
	filename += ".bin";

	ofstream FILE;
	FILE.clear();
	FILE.open(filename, ios::out | ios::binary);

	for (int i = 0; i < mSize; i++)
	{
		mpArr[i]->Output(FILE);			// out ra file nhị phân	
		cout << mpArr[i]->GetR() << endl;	// xuất ra màn hình
	}

	FILE.close();
}

int ArrayCircle::mSize = 0;