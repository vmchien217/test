#include "Csutu.h"

void Csutu::nhap(string a,string b,string c){
	convat::nhap(a,b,c);
}
void Csutu::xuat(){
	convat::xuat();
}
bool Csutu::veDich(){
	float time;
	if (trangBi == 1){
		time = 210 * 1.0 / (tocDo * 2);
	}
	else time = 210 * 1.0 / tocDo;
	if (time <= 3)
	{
		convat::count++;
		return true;
	}
	return false;
}
Csutu::Csutu()
{
}


Csutu::~Csutu()
{
}
