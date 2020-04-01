#include"ccuocDua.h"
#define _CRT_SECURE_NO_WARNINGS
int convat::count = 0;
void main(){
	ccuocDua a;
	freopen("INPUT.TXT", "rt", stdin);
	a.nhap();
	freopen("output.TXT", "wt", stdout);
	cout << convat::count << endl;
	a.xuat();

}
