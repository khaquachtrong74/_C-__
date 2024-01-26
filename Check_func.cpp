#include<iostream>
#include "OOP_tutorial.cpp"

using namespace std;

int main(){
    // //class ArrayCaculator::
    // int arr1[] = {3 , 4 , 7};
    // double arr2[] = {1.3, 6.5, 6.8};
    // cout<<ArrayCalculator::maxOfArray(arr1, sizeof(arr1)/sizeof(arr1[0]))<<endl;
    // cout<<ArrayCalculator::maxOfArray(arr2, sizeof(arr2)/sizeof(arr2[0]))<<endl;
    // cout<<ArrayCalculator::minOfArray(arr1, sizeof(arr1)/sizeof(arr1[0]))<<endl;
    // cout<<ArrayCalculator::minOfArray(arr2, sizeof(arr2)/sizeof(arr2[0]))<<endl;

    // //Class Student
    // Student as ("Kha",'m');
    // as.display();
    
    // Class Person
    Person a;
    a.setAddress("Dak nhau, thong nhat");
    a.setAge(32);
    a.setId(123412);
    a.setName("Kha");
    cout<<a.getAddress()<<" "<<a.getAge()<<" "<<a.getId()<<" "<<a.getName()<<endl;
    return 0;
}