#include <iostream>
#include <cmath>
#include <vector>
int main() { int test_case; std::cin >> test_case; if (test_case < 1 || test_case > pow(10, 4)) {return 0;}
std::vector<int>n; int count = 1; 
for (int i = 0; i < test_case; i++) {
int tmp; std::cin >> tmp; if (tmp < 3) { n.std::push(0); continue;}
if (tmp % 2 == 0) { n.push(tmp / 2 - 1); continue;}
else { n.push(tmp / 2);}}
for (int i = 0; i < test_case; i++) { std::cout << *(n + i) << std::endl;}
return 0;}

