#include <iostream>
#include <cmath>
int main() { int test_case; std::cin >> test_case; if (test_case < 1 || test_case > pow(10, 4)) {return 0;}
for (int i = 0; i < test_case; i++) {
int tmp; std::cin >> tmp; if (tmp < 3) { std::cout<<0<<std::endl; continue;}
if (tmp % 2 == 0) { std::cout<<(tmp/2)-1<<std::endl; continue;}
else { std::cout<<tmp/2<<std::endl;}}
return 0;}

