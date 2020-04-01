#include "convat.h"

void convat::nhap(string a,string b,string c){
	ms = a;
	tocDo = stoi(b);
	trangBi = stoi(c);
}
void convat::xuat(){
	cout << ms << " " << tocDo << " " << trangBi << endl;
}

convat::convat()
{
	ms = "";
	trangBi = 0;
	tocDo = 0;
}


convat::~convat()
{
}
