// LEARN-HOW-TO-FIX: CRE_TRONG_KHA

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

/* TODO (TRong_kha#1#): Count
 */
int Count_Nums(int n) {
	int count = 0;// declared count variable
	
	do{
		count++;
		n/=10;
	}while(n != 0);
	return count;
}
/* TODO (#2#): Sum */
int Sum_Element_Nums(int n){
	int size = Count_Nums(n);
	int arr[size];// declared array-arr with the size of Count_Nums
	int sum = 0;
	for(int i = 0 ; i < size; i++){
		arr[i] = n % 10;
		n /= 10;
		sum +=arr[i];
	}
	return sum;
}
/* TODO (#3#): Accumulation_Nhan */
int Accumulation_Element_Nums(int n){
	int size = Count_Nums(n);
	int arr[size];// declared array-arr with the size of Count_Nums
	int accumulation = 1;
	for(int i = 0 ; i < size; i++){
		arr[i] = n % 10;
		n /= 10;
		accumulation *=arr[i];
	}
	return accumulation;
}
/* TODO (#4#): Count_Odd */
int Count_Odd(int n){
	int count = 0;// declared count variable
	int size = Count_Nums(n);
	int arr[size];
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
		if(arr[i] % 2 != 0){
			count++;
		}
	}
	return count;
}
/* TODO (#5#): Sum_Even */
int Sum_Even(int n){
	int size = Count_Nums(n);
	int arr[size], tong = 0;
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
		if(arr[i] % 2 == 0){
			tong += arr[i];
		}
	}
	return tong;
}
/* TODO (#6#): Accumulation_Odd
 */
int Accumulation_Odd(int n){
	int size = Count_Nums(n);
	int arr[size], tich = 1;
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
		if(arr[i] % 2 != 0){
			tich *= arr[i];
		}
	}
	return tich;
}
/* TODO (#7#): Find_firstNums
 */
int Find_firstNums(int n){
	int size = Count_Nums(n);
	n /= pow(10,size-1);
	return n;
}
/* TODO (#8#): Find_maxNums */
int Find_maxNums(int n){
	int size = Count_Nums(n);
	int arr[size];
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
	}
	int max = arr[0];
	for(int i = 0; i < size; i++){
		if(max <= arr[i]){
			max = arr[i];
		}
	}
	return max;
}
/* TODO (#9#): SoDaoNguoc
 */
int SoDaoNguoc(int n){
	int size = Count_Nums(n);
	int arr[size];
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
	}
	cout<<setw(15)<<"=";
	for(int i = 0; i < size; i++){
		cout<<arr[i];
	}
	return 0;
}
/* TODO (#10#): Find_minNums */
int Find_minNums(int n){
	int size = Count_Nums(n);
	int arr[size];
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
	}
	int min = arr[0];
	for(int i = 0; i < size; i++){
		if(min >= arr[i]){
			min = arr[i];
		}
	}
	return min;
}
/* TODO (#11#): Count_maxNums */
int Count_maxNums(int n){
	int count = 0;
	int target = Find_maxNums(n);
	do{
		if(target == n % 10){
			count++;
		}
		n/=10;
	}while(n != 0);
	return count;
}
/* TODO (#12#): Count_minNums */
int Count_minNums(int n){
	int count = 0;
	int target = Find_minNums(n);
	do{
		if(target == n % 10){
			count++;
		}
		n/=10;
	}while(n != 0);
	return count;
}
/* TODO (#13#): Review_Even_Nums */
int Review_Even_Nums(int n){
	int size = Count_Nums(n);
	int arr[size], count = 0;
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
		if(arr[i] % 2 == 0){
			count++;
		}
	}
	if(count == size){
		cout<<"YES, IT'S EVEN NUMS";
	}
	else{
		cout<<"NO, IT'S NOT EVEN NUMS";
	}
	return 1;
}
/* TODO (#14#): Review_symmetricalo (So doi xung)*/
int Review_Sym(int n){
	int size = Count_Nums(n);
	int arr[size];
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
	}
	int x1 = arr[0];
	for(int i = 1; i < size; i ++){
		cout<<arr[i]<<" ";
		x1 -= arr[i];
	}
	cout<<endl;
	int x2 = arr[size-1];
	for(int j = size-2; j >= 0; j --){
		cout<<arr[j]<<" ";
		x2 -= arr[j];
	}
	cout<<endl;
	cout<<x1<<','<<x2<<endl;
	if(x1 == x2){
		cout<<setw(7)<<"YES, SYMMETRICALO NUMBS";
	}
	else{
		cout<<setw(7)<<"NO, IT'S NOT SYMMETRICALO NUMBS";
	}
}
/* TODO (#15#): Review_Increasing ( tang dan tu trai qua phai)*/
int Review_Increasing(int n){
	int size = Count_Nums(n);
	int guard1 = 1, guard2 = 1;
	int arr[size], x1 = 0, x2 = 0;
	for(int i = 0 ; i < size ; i++){
		arr[i] = n % 10;
		n /= 10;
	}
	for(int i = 0; i < size; i++){
		if(arr[i] >= arr[i+1]){
			guard1 ++;
		}
		else{
			guard2 ++;
		}
	}
	if(guard1 > 1 && guard2 == 1){
		cout<<"CAC CHU SO NGUYEN TANG DAN";
	}
	else{
		cout<<"CAC CHU SO NGUYEN KHONG TANG DAN";
	}
}
int main(){
	int n;
	int ketqua;
	cout<<"NHAP N VAO DAY := ";cin>>n;
	const int N = n;
	label:{ 
	cout<<"BAI 1	: Dem so luong chu so cua so nguyen duong n"<<endl;
	ketqua = Count_Nums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 2	: Tinh tong cac chu so do"<<endl;
	ketqua = Sum_Element_Nums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 3	: Tinh tich cac chu so cua so nguyen duong n"<<endl;
	ketqua = Accumulation_Element_Nums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 4	: Dem so luong chu so le cua so nguyen duong n"<<endl;
	ketqua = Count_Odd(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 5	: Tinh tong cac chu so chan cua so nguyen duong n"<<endl;
	ketqua = Sum_Even(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 6	: Tinh tich cac chu so le cua so nguyen duong n"<<endl;
	ketqua = Accumulation_Odd(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 7	: Tim chu so dau tien cua n"<<endl;
	ketqua = Find_firstNums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 8	: Tim chu so lon nhat cua n"<<endl;
	ketqua = Find_maxNums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 9	: Tim so dao nguoc cua so nguyen n"<<endl;
	SoDaoNguoc(N);
	cout<<endl<<"BAI 10	: Tim chu so nho nhat cua n"<<endl;
	ketqua = Find_minNums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 11: Dem chu so lon nhat cua so nguyen n"<<endl;
	ketqua = Count_maxNums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 12: Dem chu so nho nhat cua so nguyen n"<<endl;
	ketqua = Count_minNums(N);
	cout<<setw(15)<<"="<<ketqua<<endl;
	cout<<"BAI 13: Kiem tra so nguyen duong n co toan chu so chan hay khong"<<endl;
	ketqua = Review_Even_Nums(N);
	cout<<endl;
	cout<<"BAI 14: Kiem tra so nguyen duong n phai la so doi xung hay khong"<<endl;
	ketqua = Review_Sym(N);
	cout<<endl;
	cout<<"BAI 15: Kiem tra cac chu so nguyen duong n co tang dan tu trai sang phai hay khong"<<endl;
	ketqua = Review_Increasing(N);
	cout<<endl;
	}
	int c;
	cout<<"NHap 1 de tiep tuc hoac bat ki nut de ket thuc chuong trinh.";cin>>c;
	if(c == 1){
		goto label;
	}
	else{
		cout<<"Ket thuc chuong trinh."<<endl;
	}
	return 0;
}

