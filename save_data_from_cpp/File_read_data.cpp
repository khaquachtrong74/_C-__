#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readfile(){
	ifstream infile;
    infile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Account_user.txt",ios::in);

    // Kiem tra xem file co doc duoc khong
    // infile.is_open() se tra ve "true" neu no duoc mo va 'false" neu no bi dong
    if (!infile.is_open()) {
        cout << "Khong the mo file de doc" << endl;
        exit(0); // ket thuc chuong trinh do file khong the mo de doc
    }

    string line;
	// getline se doc tung dong trong file txt cho den khi nao het thi thoi
    while (getline(infile, line)) {
        cout << line << endl;
    }

    // Ðóng file
    infile.close();
}

int main() {
    readfile();

    return 0;
}

