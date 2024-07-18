#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool laChuoiDoiXung(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

vector<int> timViTriKhongDoiXung(const string& s) {
    vector<int> viTriKhongDoiXung;
    int batDau = 0, ketThuc = s.length() - 1;

    while (batDau < ketThuc) {
        if (s[batDau] != s[ketThuc]) {
            viTriKhongDoiXung.push_back(batDau);
            viTriKhongDoiXung.push_back(ketThuc);
        }
        batDau++;
        ketThuc--;
    }

    return viTriKhongDoiXung;
}

vector<int> timViTriCanXoa(const string& s) {
    vector<int> viTriKhongDoiXung = timViTriKhongDoiXung(s);
    vector<int> viTriCanXoa;

    for (int i = 0; i < viTriKhongDoiXung.size(); i += 2) {
        // Thử xóa một trong hai ký tự tại vị trí batDau hoặc ketThuc.
        if (laChuoiDoiXung(s, viTriKhongDoiXung[i] + 1, viTriKhongDoiXung[i + 1])) {
            viTriCanXoa.push_back(viTriKhongDoiXung[i]);
        } else if (laChuoiDoiXung(s, viTriKhongDoiXung[i], viTriKhongDoiXung[i + 1] - 1)) {
            viTriCanXoa.push_back(viTriKhongDoiXung[i + 1]);
        }
    }

    return viTriCanXoa;
}

int main() {
    string nhapChuoi;
    cout << "nhap mot chuoi: ";
    getline(cin, nhapChuoi);

    vector<int> viTriCanXoa = timViTriCanXoa(nhapChuoi);

    cout << "vi tri can xoa: ";
    for (int viTri : viTriCanXoa) {
        cout << viTri << " ";
    }
    return 0;
}