#include<iostream>
using namespace std;
void xauABC(int n, string rs){
    if(n == 0){
        bool flag = true;
        for(int i = 0; i < rs.size();i++){
            if(rs[i] == rs[i+1]){
                flag = false;
            }
        }
        if(flag){
            cout<<rs<<endl;
        }
        return;
    }
    xauABC(n-1, rs+'A');
    xauABC(n-1, rs+'B');
    xauABC(n-1, rs+'C');
}
int main(){
    int n;cin>>n;
    if(n < 0 || n > 10)
        return 0;
    xauABC(n,"");
    return 0;
}