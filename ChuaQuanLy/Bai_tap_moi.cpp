/*
**********************************************************
* Ho va ten	: Quach Trong Kha                            *
* Project	: Du_an_MOI                                  *
**********************************************************
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include<algorithm>
using namespace std;
const int size_array = 100;
int want_size;
double array[size_array]; // khoi tao mang toan || dung cho cac bai tap khac.
int array_[size_array];
bool flag_array;

// nhap_data cho cac bai tap tu bai 3 tro di
void nhap_data(int arr[], int arrSize){
	srand(static_cast<unsigned int>(time(0)));
	cout<<"TOI DA 100 PHAN TU\n";
	cout<<"NHAP SO LUONG PHAN TU MA BAN MUON NHAP NGAU NHIEN = ";cin>>want_size;
	system("pause");
	for(int i = 0; i < arrSize; i++){
		arr[i] = rand()%101;
	}
}

void xuat_data(int arr[], int arrSize){
	for(int j = 0; j < arrSize; j++){
		if(j < want_size-1){
			system("color");
			cout<<arr[j]<<",";
		}
		else{
			cout<<arr[j]<<".";
		}
	}
	cout<<endl;
}
//bai 01
void khoi_tao(){
	srand(static_cast<unsigned int>(time(0)));
	cout<<"GAN GIA TRI CHO 25 PHAN TU DAU TIEN >< TRONG 100 PHAN TU"<<endl;
	int cont = 0;
	for(int i = 0; i < size_array; i++){
		if(i<=24){
			array[i] =	pow(i+1,2);// gan gia tri 25 phan tu vao mang
		}
		else{
			array[i] = 0;// gan cac gia tri con lai = 0;
		}
	}
	Sleep(2000);
	for(int j = 0; j < 10; j++ ){
		for(int k = 0; k <= 9; k++){
			system("color");
			cout<<array[cont]<<" ";// in mang voi moi dong gom 10 phan tu;
			cont++;
		}
		cout<<endl;
	}
}
//bai 02
void nhap_xuat(){
	int current_size;
	srand(static_cast<unsigned int>(time(0)));
	cout<<"TOI DA CHI 100 PHAN TU\n";
	Sleep(1000);
	cout<<"NHAP SO LUONG PHAN TU HIEN CO := ";cin>>current_size;// nhap du lieu
	cout<<endl;
	for(int i = 0; i < current_size; i++){
		array[i] = rand()% 30;// gan cac gia tri ngau nhien tu 0 toi 29 vao mang vua khoi tao
	}
	cout<<"CAC PHAN TU DUOC IN RA TAI DAY ....: ";
	Sleep(800);
	for(int j = 0; j < current_size; j++){
		if(j < current_size-1){
			system("color");
			cout<<array[j]<<",";// xuat cac gia tri voi dau phay dang sau;
		}
		else{
			cout<<array[j]<<".";// Gia tri cuoi khong can giau phay thay bang giau cham
		}
	}
	cout<<endl;
}
//bai 03
void find_max(){
	nhap_data(array_, size_array);
	// tim so lon nhat trong mang
	int max_lit = array[0]; 
	for(int k = 0; k < want_size; k++){
		if(array[k] >= max_lit){
			max_lit = array[k];
		}
	}
	// hien gia tri cac phan tu trong mang de kiem tra ket qua dung hay khong
	cout<<endl<<"CAC PHAN TU CO TRONG MANG GOM := ";
	for(int j = 0; j < want_size; j++){
		if(j < want_size-1){
			system("color");
			cout<<array[j]<<",";// xuat cac gia tri voi dau phay dang sau;
		}
		else{
			cout<<array[j]<<".";// Gia tri cuoi khong can giau phay thay bang giau cham
		}
	}
	
	cout<<endl<<"GIA TRI LON NHAT TRONG MANG LA := "<<max_lit<<endl;
}
//bai 04
void sum_average(){
	nhap_data(array_, size_array);
	
	
	// hien gia tri cac phan tu trong mang de kiem tra ket qua dung hay khong
	cout<<endl<<"CAC PHAN TU CO TRONG MANG GOM := ";
	for(int j = 0; j < want_size; j++){
		if(j < want_size-1){
			system("color");
			cout<<array[j]<<",";
		}
		else{
			cout<<array[j]<<".";
		}
	}
	cout<<endl;
	// Tinh tong cac phan tu co trong mang;
	int sum = 0;
	for(int j = 0; j < want_size; j++){
		sum += array[j];
	}
	float average = float(sum) / want_size;
	cout<<"TONG CAC PHAN TU CO TRONG MANG LA := "<<sum;
	cout<<endl<<"GIA TRI TRUNG BINH CUA CAC PHAN TU CO TRONG MANG := "<<average<<endl;
}
//bai 05
void delete_phantu(){
	nhap_data(array_, size_array);
	int x;
	cout<<endl<<"CAC PHAN TU CO TRONG MANG GOM := ";// sau khi xoa
	xuat_data(array_, want_size);// hien cac phan tu trc khi xoa
	cout<<"NHAP VI TRI CAN XOA ";cin>>x;
	cout<<endl;
	for(int i = 0; i < want_size; i++){
		if(i == (x-1)){
			for(int j = (x-1); j < want_size; j++){
				array_[j] = array_[j+1]; 
			}
		}
		else{
			continue;
		}
	}
	
	// hien gia tri cac phan tu trong mang de kiem tra ket qua dung hay khong
	cout<<endl<<"CAC PHAN TU CO TRONG MANG GOM SAU KHI XOA := ";// sau khi xoa
	for(int j = 0; j < want_size-1; j++){
		if(j < want_size-2){
			system("color");
			cout<<array_[j]<<",";
		}
		else{
			cout<<array_[j]<<".";
		}
	}
	cout<<endl;
}
// PHAN NAY THUOC VE BAI TAP 06 CUA LAP 8.
void tim(const int arr[], int arrSize, int x){
	bool flag = false;
	for(int i = 0; i < arrSize; i++){
		if(arr[i] != x){
			
			continue;
		}
		else{
			cout<<"DA TIM THAY "<<x<<" TAI VI TRI "<<i<<"TRONG MANG.";
			flag = true;
		}
	}
	if(flag == false){
		cout<<"KHONG TIM THAY "<<x<<" TRONG MANG NAY.";
	}
	
	cout<<endl;
	Sleep(500);
}

void dao_nguoc(int arr[], int arrSize){

	for(int j = arrSize-1; j >=  0; j--){
		if(j > 0){
			system("color");
			cout<<arr[j]<<",";
		}
		else{
			cout<<arr[j]<<".";
		}
	}
	cout<<endl;
}

void xoa(int arr[], int& arrSize, int p){
	if(flag_array == true){
		for(int i = 0; i < arrSize; i++){
			if(i == (p-1)){
				for(int j = (p-1); j < arrSize; j++){
				arr[j] = arr[j+1]; 
				}
			}
			else{
				continue;
			}
		}
		for(int j = 0; j < arrSize-1; j++){
			if(j < arrSize-2){
				system("color");
				cout<<arr[j]<<",";// xuat cac gia tri voi dau phay dang sau;
			}
			else{
				cout<<arr[j]<<".";// Gia tri cuoi khong can giau phay thay bang giau cham
			}
		}
	}
	else{
		int t = 0;
		for(int i = arrSize-1; i >= 0; i--){
			if(i == arrSize-p){
				for(int j = arrSize-p; j >= 0; j--){
					arr[j] = arr[j-1];
				}
			}
		}
		for(int i = arrSize-1; i > 0; i--){
			if(i > 0){
				cout<<arr[i]<<",";
			}
			else{
				cout<<arr[i]<<".";
			}
		}
	}
	
}
void Tools_array(){
	nhap_data(array_, size_array);
	xuat_data(array_, want_size);
	int x, p;
	char c;
	cout<<"NHAP GIA TRI CAN TIM := ";cin>>x;
	tim(array_, want_size,x);
	system("pause");
	cout<<"DAO NGUOC CAC GIA TRI CO TRONG MANG"<<endl;
	dao_nguoc(array_,want_size);

	cout<<"XOA MOT VI TRI NAO DO O TRONG MANG"<<endl;
	cout<<"NHAP VI TRI MA BAN MUON XOA NO := ";cin>>p;

	
	cout<<"BAN CO MUON DUNG MANG DA DAO NGUOC HAY KHONG/ NHAN Y/N := ";cin>>c;
	if(c == 'y' || c == 'Y'){
		flag_array = false;
	}
	else{
		flag_array = true;
	}
	xoa(array_, want_size, p);
	cout<<endl;
} 
// KET THUC PHAN BAI TAP 06 CUA LAP 8.
// >>>>>>>>>>>>>>>>>>>>>
//bai 07
void Min_array(int arr[], int arrSize){
	cout<<"Tim vi tri cua gia tri nho nhat trong mang :"<<endl;
	int min = arr[0], vitri = 0;
	for(int i = 0; i <arrSize; i++){
		if(min >= arr[i]){
			vitri = i;
		}
	}
	xuat_data(arr, arrSize);
	cout<<"VI TRI CUA PHAN TU NHO NHAT TRONG MANG LA := "<<vitri+1<<endl;
}
//bai 08
void Hmany(int array[],int & arrSize) 
{
	xuat_data(array, arrSize);
	int x;
	cout<<"Nhap gia tri ban muon dem: ";cin>>x;
	
	// tinh so phan tu co trong mang_array
	// array+size la dia chi cua phan tu cuoi cung co trong mang
	int solan = count(array, array+arrSize, x);

	cout<<"So lan gia tri "<<x<<" xuat hien la := "<<solan<<endl;


}

//bai 09
void sum(int arr[], int arrSize, int x){

	cout<<"Tinh tong theo da thuc de bai cho"<<endl;
	int tong = 0;
	for(int i = arrSize-1; i >= 0; i--){
		tong += arr[i]*pow(x,i);
	}
	cout<<"Gia tri cua da thuc  := "<<tong<<endl;
}
//bai 10
void Eratosthenes(int arr[], int arrSize){
	cout<<"CHUONG TRINH TIM SO NGUYEN TO DUA THEO PHAN LOAI"<<endl;
	int n, temp = 0;
	cout<<"Nhap n := ";cin>>n;
	for(int i = 2; i <= n; i++){
		system("color");
		cout<<i<<" ";	
	}
	cout<<endl;
	for(int i = 2; i <= n; i++){
		if((i % 2 != 0) || (i == 2 || i == 3 || i == 5 || i == 7)){
			system("color");
			cout<<i<<" ";
		}
		else{
			if(i > 9){
				cout<<"   ";
			}
			else{
				cout<<"  ";
			}
		}
	}
	cout<<endl;
	for(int i = 2; i <= n; i++){
		if((i % 2 != 0 && i % 3 != 0) || (i == 2 || i == 3 || i == 5 || i == 7)){
			system("color");
			cout<<i<<" ";
		}
		else{
			if(i > 9){
				cout<<"   ";
			}
			else{
				cout<<"  ";
			}
		}
	}
	cout<<endl;
	for(int i = 2; i <= n; i++){
		if((i % 5 != 0 && i % 2 != 0 && i % 3 != 0) || (i == 2 || i == 3 || i == 5 || i == 7)){
			system("color");
			cout<<i<<" ";
		}
		else{
			if(i > 9){
				cout<<"   ";
			}
			else{
				cout<<"  ";
			}
		}
	}
	cout<<endl;
	for(int i = 2; i <= n; i++){
		if((i % 7 != 0 && i % 5 != 0 && i % 2 != 0 && i % 3 != 0) || (i == 2 || i == 3 || i == 5 || i == 7)){
			system("color");
			cout<<i<<" ";
		}
		else{
			if(i > 9){
				cout<<"   ";
			}
			else{
				cout<<"  ";
			}
		}
	}
}


int main(){
//	khoi_tao(); bai 1
//	nhap_xuat(); bai 2
//	find_max(); bai 3
//	sum_average();	 bai 4
//	delete_phantu(); bai 5
//  Tools_array(); bai 6
// nhap_data(array_,size_array)	Min_array(array_, want_size); bai 7
// nhap_data(array_, size_array); Hmany(array_, want_size); bai 8
// nhap_data(array_, size_array); sum(array_, want_size); bai 9
// Eratosthenes(array_, size_array); bai 10
int cont = 0;
label1:{
	cout<<"1. Khởi tạo mảng"<<endl;
	cout<<"2. Khoi tao mang"<<endl;
	cout<<"3. Khoi tao mang"<<endl;
	cout<<"4. Khoi tao mang"<<endl;
	cout<<"5. Khoi tao mang"<<endl;
	cout<<"6. Khoi tao mang"<<endl;
	cout<<"7. Khoi tao mang"<<endl;
	cout<<"8. Khoi tao mang"<<endl;
	cout<<"9. Khoi tao mang"<<endl;
	cout<<"10. chương trình in ra số nguyên tô"<<endl;
	cout<<"0. Kết thúc chưogn trình"<<endl;
	
	int n;cout<<"NHAP BAI MA BAN MUON VAO DAY. ";cin>>n;
	switch(n){
		case 0:
			cout<<"Kết thúc chương trình.";return 0;
			break;
		case 1:
			khoi_tao();
			break;
		case 2:
			nhap_xuat();
			break;
		case 3:
			find_max();
			break;
		case 4:
			sum_average();
			break;
		case 5:
			delete_phantu();
			break;
		case 6:
			Tools_array();
			break;
		case 7:
			nhap_data(array_, size_array);
			Min_array(array_, want_size);
			break;
		case 8:
			nhap_data(array_, size_array);
			Hmany(array_, want_size);
			break;
		case 9:
			nhap_data(array_, size_array);
			int x;
			cout<<"NHAP GIA TRI X MA BAN MUON DE TINH ";cin>>x;
			sum(array_, want_size, x);
			break;
		case 10:
			Eratosthenes(array_, size_array);
			break;
		default:
			cout<<"KHONG TIM THAY BAI TAP NAY :<< HAY NHAP LAI BAN NHE."<<endl;
	}
	char c;
	cout<<"DE TIEP TUC HAY NHAP {Y}/ DE KET THUC HAY NHAP {N} ";cin>>c;
	label2:{ 
	if(c == 'N' || c == 'n'){
		cout<<"CHUONG TRINH DA KET THUC ROI BUON GHE :<<";
	}
	else if(c == 'y' || c == 'Y'){
		cont++;
		cout<<"CHUONG TRINH SE BAT DAU SAU VAI GIAY .";
		for(int i = 0; i <= 10; i++){
			Sleep(500);
			cout<<".";
		}
		system("cls");
		cout<<"CHUONG TRINH DA KHOI DONG XONG lan thu "<<cont<<"."<<endl;
		goto label1;
	}
	else{
		cout<<"BAN NHAP KHONG HOP LE VUI LONG NHAP LAI : ";cin>>c;
		goto label2;
	}
	}	
}
	return 0;
}
