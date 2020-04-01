#include "ccuocDua.h"
void ccuocDua::nhap(){
	string a;
	getline(cin, a);
	n = stoi(a);
	convat* st = new Csutu;
	convat* t = new ctho;
	convat* r = new crua;
	string kt;
	string MS, TD, TB;
	string daucach = " ";
	int pos, i;
	while (!cin.eof()){
		getline(cin, a);
		kt = a.substr(0, 1);

		pos = a.find(daucach, 0);
		MS = a.substr(0, pos);

		i = pos + 1;
		pos = a.find(daucach, i);
		TD = a.substr(i, pos - i);

		TB = a.substr(pos + 1, a.size() - TD.size() - MS.size());


		if (kt == "L"){
			st->nhap(MS, TD, TB);
			ds.push_back(st);
		}
		else if (kt == "R"){
			t->nhap(MS, TD, TB);
			ds.push_back(t);
		}
		else{
			r->nhap(MS, TD, TB);
			ds.push_back(r);
		}
	}
}



void ccuocDua::xuat(){
	for (int i = 0; i < ds.size(); i++){
		/*	if (ds.at(i)->veDich() == true){
				ds.at(i)->xuat();
				}*/
		ds.at(i)->xuat();
	}
}
ccuocDua::ccuocDua()
{
}


ccuocDua::~ccuocDua()
{
}
