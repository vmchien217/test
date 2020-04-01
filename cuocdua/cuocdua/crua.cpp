#include "crua.h"


void crua::nhap(string a,string b,string c){
	convat::nhap(a,b,c);
}
void crua::xuat(){
	convat::xuat();
}
bool crua::veDich(){
	float time;
	if (trangBi == 1){
		time = 135 * 1.0 / (tocDo * 5);
	}
	else time = 135 * 1.0 / tocDo;
	if (time <= 5){
		convat::count++;
		return true;
	}
	return false;
}
crua::crua()
{
}


crua::~crua()
{
}
