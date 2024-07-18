#include<iostream>
#include<string>
#include<cmath>
#include<cctype>
int main(){
std::string test_case;getline(std::cin, test_case);
std::string sub_ans ="";
bool flag =true;
for(char c : test_case){
if(c == '@'){
sub_ans+=c;
flag=false;}
else{
if(isalnum(c)){
if(!flag && isalpha(c)){sub_ans+=tolower(c);continue;}
if(!flag && isdigit(c)){sub_ans+=(c+48);continue;}
sub_ans+=c;
}//if
}//else
}//for
if(isdigit(sub_ans[0])){sub_ans[0] +=48;}
std::cout<<sub_ans<<std::endl;
return 0;
}//main
