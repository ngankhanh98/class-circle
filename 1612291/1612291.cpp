// 1612291.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"ArrayCircle.h"

using namespace std;

int main()
{
	int n;
	string filename;
	char ToContinue;

	do
	{
		cout << "Welcome, please input..." << endl;

		// khởi tạo mảng n Circle ngẫu nhiên
		ArrayCircle arr(n);
		cout << "==========================" << endl;
		// out file .bin
		arr.Output(filename);
		cout << "--------------------------" << endl;
		// tính tổng diện tích
		arr.CalcArea(filename, n);

		// hỏi có tiếp tục 
		cout << endl << "Press Y to continue, others to stop...";
		cin >> ToContinue;
		system("cls");
	} while (ToContinue == 'Y' || ToContinue == 'y');

	return 0;
}

