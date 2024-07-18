/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Train_algroth                               *
**********************************************************
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char data[100];
	ofstream outfile;
	outfile.open("drawn_cpp.docx");
	outfile<<"++++++++++++++++++"<<endl;
	outfile<<"+| / |   |   /\\	 +"<<endl;
	outfile<<"+||  |---|  /--\\ +"<<endl;
	outfile<<"+| \\ |   | /    \\+"<<endl;
	outfile<<"++++++++++++++++++"<<endl;
	cin.getline(data,100);
	outfile<<data<<endl;
	return 0;
}

