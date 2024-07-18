#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void cau2(){
    string chuoi;
    int danhdau[50], count = 1;
    char canxet[100];
    for (int i = 0; i < 50; i++) {
        danhdau[i] = 0;
    }
    
    cout<<"Nhap chuoi ";getline(cin, chuoi);
    for(int i = 0; i < chuoi.size();i++){
        canxet[i] = chuoi[i];
    }
    int size = chuoi.size();
    for(int i = 0; i < chuoi.size();i++){
        if(canxet[i] == ' '){
            danhdau[count] = i;
            count++;
        }
    }danhdau[count] = size;
    // Các v? trí có kho?ng tr?ng
    for(int i = 0; i <= count; i++){
        cout<<danhdau[i]<<" ";
    }
    
    cout<<endl;

    // xét d?u kho?ng tr?ng này và duôi kho?ng tr?ng kia
    int bg = 0, bt = 1;
    for(int i = 0; i < chuoi.size(); i++){
            if( i == danhdau[bt]-1 || i == danhdau[bg]+1){ 
                cout<<char(toupper(canxet[i]));
                bt++;bg++;
            }
            else{
                cout<<char(tolower(canxet[i]));
            }
    }
  
}

int main(){
    cau2();
    
    return 0;
}
