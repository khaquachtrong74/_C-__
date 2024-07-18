#include<iostream>
#include<string>
int main(){
std::string test_case;getline(std::cin, test_case);
std::string sub_1 = test_case.substr(0,test_case.find("@"));
std::string sub_2 = test_case.substr(test_case.find("@")+1);
for(int i = 0; i < sub_1.size();i++){
if(sub_1[i]<='A' || sub_1[i] >= 'Z'){
	if(sub_1[i] >= 'A' && sub_1[i] <= 'Z'){
	sub_1[i] += 32;continue;}
sub_1[i] = '1';
}
if(sub_2[i]<='A' || sub_2[i] >='Z'){
	if(sub_2[i] >= 'A' && sub_2[i] <= 'Z'){
	sub_2[i] += 32;
	continue;}
sub_2[i]='2';
}
}
std::cout<<sub_1<<std::endl;
std::cout<<sub_2<<std::endl;
return 0;
}
