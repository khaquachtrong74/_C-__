/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<iomanip>

class Student{
	private:
		struct person{
			int tuoi;
			std::string name, address;
			float cannang;
			int height;
		};
		person s;
		
	public:
		void khung(){
			for(int i = 0; i <= 30; i++){
				std::cout<<"~-@";
			}
		}
		void set(){
			std::cout<<"Nhap ten cua ban vao day := ";getline(std::cin, s.name);
			std::cout<<'\n';
			std::cout<<"Nhap tuoi cua ban vao day := ";std::cin>>s.tuoi;
			std::cout<<'\n';
			std::cout<<"Nhap can nang cua ban vao day :=";std::cin>>s.cannang;
			std::cout<<'\n';
			std::cin.ignore();
			std::cout<<"Nhap dia chi nha cua ban vao day :=";getline(std::cin, s.address);
			std::cout<<'\n';
			std::cout<<"Thank you for spend a little time here to fill the Quest i make XD";
			std::cout<<"\nHope you have a good day sir or madam\n";
		}
		void get(){
			std::ofstream outfile;
			outfile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Struct_times.txt", std::ios::out);
			outfile<<"Ten:		=	"<<s.name;
			outfile<<"\nTuoi:		=	"<<s.tuoi;
			outfile<<"\nCan nang:	=	"<<s.cannang;
			outfile<<"\nDia chi:	=	"<<s.address;
			outfile<<"\n Da Luu thong tin nguoi dungf thanh cong. :>>\n";
			outfile.close();
		}
		void caythong_set(){
			std::cout<<'\n';
			khung();
			std::cout<<'\n';
			std::cout<<"Nhap chieu cao cay thong vao day := ";std::cin>>s.height;
			std::cout<<'\n';
			const int n = s.height;
			khung();
			std::cout<<'\n';
			for (int i = 0; i < n; ++i) {
    		    std::cout << std::setw(s.height - i);
     			for (int j = 0; j < 2 * i + 1; ++j) {
        			system("color 1");
        			std::cout<<"*";
       			}
     			std::cout<<'\n';
   			}
   			for (int i = 0; i <s.height / 3; ++i) {
        		std::cout << std::setw(n+3) << "| | \n";
    		} 
    		khung();
		}
		void caythong_get(){
			std::ofstream outfile;
			outfile<<'\n';
			outfile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Struct_times.txt", std::ios::app);
			outfile<<"Chieu cao cay thong ma ban nhap la "<<s.height<<" se duoc ve duoi day \n";
			for(int i = 0; i <= 30; i++){
				outfile<<"~-@";
			}
			const int n = s.height;
			outfile<<'\n';
			outfile<<'\n';
			for (int i = 0; i < n; ++i) {
				outfile<<std::setw(s.height - i);
     			for (int j = 0; j < 2 * i + 1; ++j) {
        			system("color 1");
        			outfile<<"*";
       			}
     			outfile<<'\n';
   			}
   			for (int i = 0; i <s.height / 3; ++i) {
        		outfile << std::setw(n+3) << "| | \n";
    		} 
    		for(int i = 0; i <= 30; i++){
				outfile<<"~-@";
			}
			outfile<<'\n';
		}
		
};



int main(){
	Student heis;
	heis.set();
	heis.get();
	heis.caythong_set();
	heis.caythong_get();
	return 0;
}

