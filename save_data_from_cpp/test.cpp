/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Train_algroth                               *
**********************************************************
*/

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	bool guard;
	int tuoi;
	fstream outfile;
	// cai kia la dia chi file nên de \\ thay vi \ 
	outfile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Thunghiem.txt",ios::out);
	string name;
	outfile<<endl;
	cout<<"Nhap ten ban vao day := ";getline(cin, name);
	outfile<<"Ten cua ban la := "<<name<<endl;
	cout<<"Nhap tuoi cua ban vao day :=";cin>>tuoi;
	outfile<<"Tuoi cua ban la := "<<tuoi<<endl;
	outfile<<"Hinh ve voi tuoi cua ban nhu duoi day"<<endl;
	cout<<"Tuoi cua ban tui se ve duoc hinh tam giac nguoc voi tuoi / 2";
	for(int i = 0; i < (tuoi/ 2); i++){
		for(int j = 0 ; j< i; j++)
		{
			outfile<<setw(i+1)<<"* ";
		}
		outfile<<endl;
	}
	outfile<<endl;
	for(int i = 1; i <= 45; i++){
		outfile<<"*";
		outfile<<"~";
	}
	outfile<<endl;
	for (int i = 0; i < 8; ++i) {
        outfile << setw(8 - i);
        for (int j = 0; j < 2 * i + 1; ++j) {

        	outfile<<"*";
        }
        outfile << endl;
    }
    for (int i = 0; i < 8 / 3; ++i) {
        outfile<< setw(8+1) << "| |" << endl;
    }
    for(int i = 1; i <= 45; i++){
		outfile<<"*";
		outfile<<"~";
	}
	return 0;
}

