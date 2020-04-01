#include "ctho.h"

void ctho::nhap(string a,string b,string c){
	convat::nhap(a,b,c);
}
void ctho::xuat(){
	convat::xuat();
}
bool ctho::veDich(){
	float time;
	if (trangBi == 1){
		time = 210 * 1.0 / (tocDo + 30);
	}
	else time = 210 * 1.0 / tocDo;
	if (time <= 4){
		convat::count++;
		return true;
	}
	return false;
}
ctho::ctho()
{
}


ctho::~ctho()
{
}
