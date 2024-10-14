/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Train_algroth                               *
**********************************************************
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string name, pass;
	int n;
	ofstream outfile;
	ifstream input;
	input.open("D:\\My_Self_Studying\\save_data_from_cpp\\Account_user.txt",ios::in);
	//khoi tao file de doc
	if(input.is_open() != true){
		cout<<"khong the mo file de doc";
		// ket thuc chuong trinh.
		return 1;
	}
	
	outfile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Account_user.txt",ios::out|ios::app);
	cout<<"Declared name_user :=";getline(cin, name);cout<<endl;
	cout<<"Declared pass_user :=";
	getline(cin, pass);cout<<endl;
	
	if(outfile.is_open() && input.is_open()){
		outfile<<"Tai khoan cua nguoi dung :="<<name<<endl;
		outfile<<"Mat khau cua nguoi dung :="<<pass<<endl;
	}
	else{
		cout<<"khong the luu file.";
		return 1;
	}

	
	outfile.close();
	input.close();
	return 0;
}

