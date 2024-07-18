/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
int main(){
	std::ifstream outfile;
	outfile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Struct_times.txt",std::ios::in);
	std::string line;
	// getline se doc tung dong trong file txt cho den khi nao het thi thoi
    while (getline(outfile, line)) {
        std::cout << line <<'\n';
    }

    // Ðóng file
    outfile.close();
	

	return 0;
}

