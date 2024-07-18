#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Kiemtradoixung(const string& a, const string& b) {
    int luu = -1;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            luu = i;
            break;
        }
    }

    if (luu != -1) {
        cout << "Vi tri can xoa: " << luu << endl;
    } else {
        cout << "Chuoi da nhap la doi xung." << endl;
    }
}

void InputArrKytu(string& a, const string& s, string& b) {
    int j = 0;
    int l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            a.push_back(tolower(s[i]));
            j++;
        }
    }
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isalpha(s[i])) {
            b.push_back(tolower(s[i]));
            l++;
        }
    }
}

int main() {
    string a, b;
    string s;

    cout << "Nhap chuoi: ";
    getline(cin, s);

    InputArrKytu(a, s, b);
    Kiemtradoixung(a, b);

    return 0;
}