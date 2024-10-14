#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void cau2(){
    string chuoi;
    int danhdau[50],danhdau_[50], count = 1, count_ = 1;// biến đếm, đánh dấu
    char canxet[100];
    for (int i = 0; i < 50; i++) {
        danhdau[i] = 0;// gán trị cho mảng danhdau = 0
        danhdau_[i]= 0;
    }
    
    cout<<"Nhap chuoi ";getline(cin, chuoi);
    for(int i = 0; i < chuoi.size();i++){
        canxet[i] = chuoi[i];// chuyển từ chuỗi sang mảng kí tự
    }
    int size = chuoi.size();// lấy size để đưa vào vị trí cuối đánh dấu (tác dụng: in thêm được chữ cuối)


    // đánh dấu bằng 2 mảng sẽ khắc phục được lỗi tôi có chú thích ở dưới nếu chỉ dùng 1 mảng
    for(int i = 0; i < chuoi.size();i++){
        if(canxet[i] == ' '){
            danhdau[count] = i-1;// đánh dấu các vị trí trong chuỗi là khoảng trắng
            count++;
        }
    }danhdau[count] = size-1;
    for(int i = 0; i < chuoi.size();i++){
        if(canxet[i] == ' '){
            danhdau_[count_] = i+1;// đánh dấu các vị trí trong chuỗi là khoảng trắng
            count_++;
        }
    }




    // Các vị trí có khoảng trắng {code duoi la de in ra vi tri duoc danh dau}
    // for(int i = 0; i <= count; i++){
    //     cout<<danhdau[i]<<" ";
    // }
    // cout<<endl;

    // for(int i = 0; i < count_; i++){
    //     cout<<danhdau_[i]<<" ";
    // }
    

    // xét đầu khoảng trắng này và đuôi khoảng trắng kia
    int bg = 0, bt = 1;
    // 2 biến đếm để xét từng vị trí xảy ra

    for(int i = 0; i < chuoi.size(); i++){// lỗi là nó chỉ chạy 1 điều kiện dù đã dùng toán tửu ||
    // khắc phục được thì sẽ chạy hoàn chỉnh {code này là chưa sửa được và chưa biết lỗi ở đâu vì nó chỉ chạy 1 điều kiện}
    // if( i == danhdau[bt] || i == danhdau[bg]){ 
    //             cout<<char(toupper(canxet[i]));
    //             bt++;bg++;
    //         }
    //         else{
    //             cout<<char(tolower(canxet[i]));
    //         }



    //phiên bản được khắc phục bằng 2 mảng
            if( i == danhdau[bt] ){ 
                cout<<char(toupper(canxet[i]));
                bt++;
            }
            else if(i == danhdau_[bg]){
                cout<<char(toupper(canxet[i]));
                bg++;
            }
            else{
                cout<<char(tolower(canxet[i]));
            }
    }
  
}

int main(){
    // ý tưởng là những vị trí sau khoảng trắng thứ i và trước khoảng trắng thứ i+1 sẽ được in hoa còn lại sẽ in thường
    cau2();
    /*có cách khác nhanh hơn,*/
    // sử dụng git
    /* 
        Thư mục đang làm việc                       Staging Area                Commited
        inhoa_inThuong.cpp      git add namefile
        ------------>                               Math_func.cpp
        Palidrome.cpp
    */





// khong co gi
    return 0;
}