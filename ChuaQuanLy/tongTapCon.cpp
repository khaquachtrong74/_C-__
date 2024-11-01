#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long long k ;int n, count = 0;cin>>n>>k;
    if( n < 1 || n > 20 || k > pow(10,18)){
        return 0;
    }
    int A;
    if(k > pow(10,11)){
        cout<<"YES"<<endl;
        return 0;
    }
    int *B = new int[n];
    for(int i = 0; i < n; i++){
        cin>>A;
        if(A <= k)
            B[count++] = A;    
    }
    long long tong = 0;
    bool flag = false;
    long long C = 0;
    for(int i = 0; i < count; i++){
        tong += B[i];
        if(C - k < 0 &&  tong >= k-C){
            tong = 0;   
            C += B[i];
            i = -1;
            continue;
        }
        if(tong == k || C == k){
            flag = true;
        }
    }
    cout<<(flag ? "YES" : "NO")<<endl;
    delete [] B;
}