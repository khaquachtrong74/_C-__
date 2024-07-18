/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(){
	string a[6][14];
	srand(static_cast<unsigned int>(time(0)));
	string b;
	ofstream outfile;
	outfile.open("D:\\My_Self_Studying\\save_data_from_cpp\\New Text Document.txt",ios::out);
	int n, len = 0, xuong = 0, dang = 0, giam = 0, lenx, xuongx;
	cout<<"nhap n do dai";
	cin>>b;
	
	for(int i = 0; i < b.length(); i++){
		if(b[i] == '1'){
			len++;
			if(len > 0 && len % 2 == 0){
				dang++;
			}
		}
		else{
			xuong++;

			if(xuong > 0 && xuong % 2 == 0){
				giam++;
			}
		}
		
	}
	
		
	cout<<lenx<<" "<<dang;
	cout<<endl<<xuongx<<" "<<giam-dang;
	outfile.close();
	return 0;
}

