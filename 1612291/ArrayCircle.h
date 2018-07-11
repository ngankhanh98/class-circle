#pragma once
#include"Circle.h"
#include<vector>
#include<fstream>

using namespace std;

class ArrayCircle
{
	vector<Circle*>mpArr;
public:
	static int mSize;

	ArrayCircle();
	// khởi tạo NGẪU NHIÊN 
	ArrayCircle(int &n);			
		/// @n: số phần tử mảng đường tròn

	~ArrayCircle();
	
	// tính - in ra tổng diện tích các hình
	void CalcArea(string filename, int n);
		/// @filename: tên file nhị phân để đọc dữ liệu bán kính

	// output bán kính ra output.bin
	void Output(string &filename);		
};

