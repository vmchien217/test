#pragma once
#include<iostream>
#include<string>
using namespace std;
class convat
{
public:
	static int count;
protected:
	string ms;
	int tocDo;
	int trangBi;
public:
	virtual void nhap(string,string,string);
	virtual void xuat();
	virtual bool veDich()=0;
	
	convat();
	~convat();
};

