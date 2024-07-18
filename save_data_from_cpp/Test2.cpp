#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile;
    infile.open("D:\\My_Self_Studying\\save_data_from_cpp\\Account_user.txt");

    // Ki?m tra xem file có m? thành công không
    if (!infile.is_open()) {
        cout << "Khong the mo file de doc" << endl;
        return 1; // ket thuc chuong trinh do file khong the mo de doc
    }

    string line;
	// getline se doc tung dong trong file txt cho den khi nao het thi thoi
    while (getline(infile, line)) {
        cout << line << endl;
    }

    // Ðóng file
    infile.close();

    return 0;
}

