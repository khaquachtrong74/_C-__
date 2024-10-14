/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Train_algroth                              *
**********************************************************
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void save_accont(string &name, string& pass){
	ofstream outfile;
	// tao file txt de ghi
	outfile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Account_user.txt",ios::app);// ios::out : co nghia la du lieu se duoc lam moi sau moi lan chay
	// khoi tao tai khoan nguoi dung
	cout<<"Declared name_user :=";getline(cin, name);cout<<endl;
	cout<<"Declared pass_user :=";
	getline(cin, pass);cout<<endl;
	
	
	
	
	
	if(outfile.is_open()){
		//Luu tai khoan vua duoc khoi tao
		
		outfile<<"Tai khoan cua nguoi dung :="<<name<<endl;
		outfile<<"Mat khau cua nguoi dung :="<<pass<<endl;
		
	}
	else{
		// truong hop file dong va khong the mo
		cout<<"khong the luu file.";
		exit(0);
	}

	
	
	// dong file.
	outfile.close();
}

int main(){
	string name, pass;
	save_accont(name, pass);
	return 0;
}

