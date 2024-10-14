#include<iostream>
using namespace std;

struct DoThi {
	int **g;
	int capacity, n;


	//Giari thuật PRIm
	//Tập E 
	int *E1, *E2, *wE, nE;
	//Cây T
	int *T1, *T2, *wT, nT;
	DoThi(int cap = 100) {
		g = new int*[cap];
		for (int i = 0; i < cap; i++) {
			g[i] = new int[cap];
		}
		capacity = cap;
		n = 0;

		E1 = new int[cap];
		E2 = new int[cap];
		wE = new int[cap];
		nE = 0;

		T1 = new int[cap];
		T2 = new int[cap];
		wT = new int[cap];
		nT = 0;
	}
	void nhap() {

		for (int i = 0; i < capacity; i++) {
			for (int j = 0; j < capacity; i++) {
				cout << "Nhap gia tri tai [" << i << "," << j << "]"; cin >> g[i][j];
			}
		}
	}
	void xuat() {
		for (int i = 0; i < capacity; i++) {
			for (int j = 0; j < capacity; i++) {
				cout << "Gia tri tai [" << i << ',' << j << "] = " << g[i][j] << endl;
			}
		}
	}
	// Kiểm tra xem v có tồn tại không
	bool isExist(int v, int*t, int n) {
		for (int i = 0; i < n; i++) {
			if (v == t[i]) {
				return true;
			}
		}
		return false;
	}
	// Xóa cạnh
	void xoacanh(int vt) {
		for (int i = vt; i < nE; i++) {
			E1[i] = E1[i + 1];
			E2[i] = E2[i + 1];
			wE[i] = wE[i + 1];
		}
		nE -= 1;
	}
	void xoaCanhE(int d_, int d_1) {
		for (int i = 0; i < nE; i++) {
			if (d_ == E1[i] && d_1 == E2[i]) {
				xoacanh(i);
				break;
			}
		}
		nE -= 1;
	}

	//Giải thuật prim
	void Prim(int s) {
		int u = s;//Vị trí mà mình kiểm tra
		int min, d1, d2;
		min = INT_MAX;

		while (nT < n - 1) {
			for (int i = 0; i < n; i++) {
				if (g[u][i] != 0) {
					if (!isExist(i, T2, nT)) {
						//Nạp từng điểm vào nếu nó chưa tồn tại trong T2
						E1[nE] = u;
						E2[nE] = i;
						wE[nE] = g[u][i];
						nE += 1;
					}
				}
			}
		}
		for (int i = 0; i < nE; i++) {
			if (!isExist(E2[i], T2, nT)) {

				if (min > wE[i]) {
					//Tìm giá trị nhỏ nhất trong tập E
					min = wE[i];
					d1 = E1[i];
					d2 = E2[i];
				}
			}
		}
		// Sau khi tìm được min trong tập E thì nạp vào cây T
		T1[nT] = d1;
		T2[nT] = d2;
		wT[nT] = min;
		nT++;
		// Xóa đi cạnh và điểm đ
		g[d1][d2] = 0;
		g[d2][d1] = 0;
		xoaCanhE(d1, d2);
		u = d2;
	}
	void xuatT() {
		int tong = 0;
		for (int i = 0; i < nT; i++) {
			cout << "(" << T1[i] << "," << T2[i] << ") := " << wT[i] << endl;
			tong += wT[i];
		}
		cout << "Tong w = " << tong << endl;
	}
};

int main() {
	DoThi t(2);
	t.n = 2;
	t.nhap();
	t.xuat();
	system("pause");
}