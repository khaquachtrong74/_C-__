#include<iostream>
#include<cstdlib>
#define tp template<class val>
using namespace std;

// Tìm số nguyên tố Prime
int Prime(int n){
    if(n == 2 || n == 3 || n == 5 || n == 7){
        return n;
    }
    if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 !=0){
        return n;
    }
    return -1;// có nghĩa là không phải Prime
}

// Tìm số hoàn chỉnh
tp
val SoHoanChinh(val n){
    val *arr = new val[100];
    int k = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            arr[k] = i;
            k++;
        }
    }
    int tong = 0;
    for(int j = 0; j < k; j++){
        tong += arr[j];
    }
    return tong == n ? true : false;// là số hoàn chỉnh thì trả về true và ngược lại
    delete [] arr;
}

class compareValue{
    public:
        tp
        static val find_max(val a, val b){
            return a <= b ? b : a;
        }
        tp 
        static val find_max(val a, val b, val c){
            return find_max(a, b) <= c ? c : find_max(a, b);
        }
        tp
        static val find_min(val a, val b){
            return a <= b ? a : b;
        }
        tp 
        static val find_min(val a, val b, val c){
            return find_min(a, b) >= c ? c : find_min(a, b);
        }
        compareValue(){

        }
        
        compareValue(int n){
            int * arr = new int [100];
            for(int i = 0 ; i < 100; i++){
                arr[i] = rand();
            }
            int minNe = 0, maxNe = 0;
            
            for(int j = 99, i=0; j >= 50 || i < 50;i++, j--){
                maxNe = find_max(arr[i], arr[j]);
                minNe = find_min(arr[i], arr[j]);
            }
            cout<<"Max: "<<maxNe<<endl;
            cout<<"Min: "<<minNe<<endl;
            delete [] arr;
        }
        
};