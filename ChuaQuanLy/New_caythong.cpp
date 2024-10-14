/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/


#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;


// code doi mau theo tung dong
void SET_COLOR(int color)
{
	WORD wColor;
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}
void khung(){
	SET_COLOR(3);
	for(int i = 1; i <= 28; i++)
	{
		cout<<"-~-~";
	}
}

// code create by DO LE QUANG LONG
void Ve(int n, int a[]) {
	cout<<endl;
	khung();
    for (int i = 0; i < n; ++i) {
        cout << setw(n - i);
        for (int j = 0; j < 2 * i + 1; ++j) {
        	system("color 1");
        	cout<<"*";
        }
        cout << endl;
    }
    for (int i = 0; i < n / 3; ++i) {
        cout << setw(n+1) << "| |" << endl;
    }
    cout<<endl;
    khung();
}

// code ve cay thong phien ban vip pro Max :>> CREATE BY TRONG KHA

void caythong(int n){

	cout<<endl;
	int a[100];
	srand(static_cast<unsigned int>(time(0)));
	for(int i = 0; i < 50; i++){
		a[i] = rand()%9;
		if(a[i] == 0){
			do{
				a[i] = rand()%9;
			}while(a[i] == 0);
		}
	}
	for(int i = 1; i < n; i++){
		cout << setw(n*2-i);
		for(int j = 0; j < i ; j++){
			if(i == 1){
				Sleep(30);
//				SET_COLOR(a[i]);
				cout<<"*"<<endl;
				cout<<setw(n*2);
				system("color");
				cout<<"***";
			}
			else if(i==2){
				cout<<" **";
			}
			else{
//				SET_COLOR(a[i]);
				Sleep(150);
				if(j % 2 == 0 ){
					if(i%2 == 0 && i > 2){
						cout<<"@~";
					}
					else{
						cout<<"~@";
					}
				}
				else{
					cout<<"~@~";
				}
			}
			
			
		}
		cout<<endl;
	}
	for(int i = 0; i <= n/4; i++){
		Sleep(150);
		SET_COLOR(7);
		cout<<setw(n*2+2)<<"  |---|"<<endl;
		if(i == n/4){
			cout<<setw(n*2+2)<<"  |___|";
		}
	}
	cout<<endl;

	khung();
}
// Phao Hoa CREATE BY DO LE QUANG LONG
void phaohoa(int n){
	for(int i=1;i<100;i++){
		if(i%2==0)
		{
			system("color 2");
			Sleep(500);
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			system("cls");
			
		}
			else if(i%3==0)
		{
			system("color 5");
			Sleep(500);
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"**** 		 *"<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * * * * * "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<" *   *  *   "<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
		
			system("cls");
		}
			else if(i%4==0)
		{
			system("color 6");
			Sleep(500);
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"***~~~~~****"<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * * * * * "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<" *   *  *   "<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			system("cls");
		}
			if(i%4==0)
		{
			system("color 8");
			Sleep(500);
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * * * * * "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<" *   *  *   "<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			system("cls");
		}
		else
		{
		system("color 5");
			system("color 9");
			Sleep(500);
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * * * * * "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<" *   *  *   "<<endl;
			cout<<setw(25)<<" *   *   *  "<<endl;
			cout<<setw(25)<<"   * * *    "<<endl;
			cout<<setw(25)<<"* * 		 "<<endl;
			cout<<setw(25)<<"***		 "<<endl;
			cout<<setw(25)<<"************"<<endl;
			system("cls");
		}
	} 
}

int main(){
	srand(static_cast<unsigned int>(time(0)));
	int c, tieptuc, n;
	cout<<"DE TIEP TUC CHUONG TRINH NHAN PHIM 1"<<endl;
	cout<<"NHAN PHIM BAT KI DE KET THUC"<<endl;
	cin>>c;
	system("pause");
	system("cls");
	lap1:{ 
	switch(c){
		case 1:
			for(int i = 1; i <= 30; i++){
				cout<<"==";
			}
			cout<<endl;
			for(int i = 1; i <= 30; i++){
				cout<<"~~";
			}
			cout<<endl;
			cout<<"NHAN PHIM 1 DE IN CAY THONG"<<endl;
			cout<<"NHAN PHIM 2 DE IN PHAO HOA"<<endl;
			cout<<"NHAN PHIM 3 DE ANH YEU EM :>"<<endl;
			int x;
			cin>>x;
			cout<<endl; 
			for(int i = 1; i <= 30; i++){
				cout<<"==";
			}
			cout<<endl;
			switch(x){
				case 1:
					int n, a[9];
					cout<<endl;
					system("pause");
					system("cls");
					for(int i = 1; i <= 50; i++){
						if(i >= 12){
							Sleep(150);
							cout<<"*"<<setw(rand()%100)<<endl;
						}
						else{
							cout<<"*"<<setw(rand()%100)<<endl;
						}
					}		
					system("color f");
					caythong(15);
					cout<<endl;
					
					cout<<"CHAO MUNG BAN DA DEN VOI CHUONG TRINH CAY THONG SIEU CAP VIP PRO XD"<<endl;
					cout<<"DO QUACH TRONG KHA SANG TAC XD"<<endl;
					system("pause");
					
					break;
				case 2:
					
					cout<<"Nhap so lan phao hoa ban muon thay {rat nhanh lam do}"; cin>>n;
					phaohoa(n);
					break;
				default:
					cout<<"THAT RA, TO DA KHONG CON CAM GIAC DO NUA ROI :) .";
					system("pause");
					exit(0);
			}
		default:
			cout<<"KI VAY SAO KET THUC ROI :<<"<<endl;
			cout<<"CAU KHONG THUONG TO HA"<<endl;
			cout<<"NEU THUONG THI CHAY LAI CHUONG TRINH DI TO MOI TIN :";
	}
	
}
	cin>>c;
	if(c == 1){
		goto lap1;
	}
	else{
		cout<<"ket thuc chuong trinh roi."<<endl;cout<<"Bye Bye nguoi dep.";
	}
	
	
	return 0;
}

