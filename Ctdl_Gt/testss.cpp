#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <cmath>
using namespace std;

// class Solution
// {
// public:
//     string longestPalindrome(string s)
//     {
//         bool f;
//         int tmp = 0;
//         string c1 = "";
//         string c2 = "";
//         if (s.size() % 2 == 1)
//         {
//             tmp = s.size() / 2;

//             for (int i = tmp + 1; i < s.size(); i++)
//             {
//                 c1 += s[i];
//             }
//             for (int i = tmp - 1; i >= 0; i--)
//             {
//                 c2 += s[i];
//             }
//             f = true;
//         }
//         else
//         {
//             tmp = s.size() / 2;

//             for (int i = tmp; i < s.size(); i++)
//             {
//                 c1 += s[i];
//             }
//             for (int i = tmp - 1; i >= 0; i--)
//             {
//                 c2 += s[i];
//             }
//             f = false;
//         }
//         string ans = "";
//         if (f == false)
//         {
//             for (int i = 0; i < c1.size(); i++)
//             {
//                 if (c1[i] == c2[i])
//                 {
//                     ans += c1[i];
//                     ans += c1[i];
//                 }
//                 continue;
//             }
//         }
//         else
//         {
//             for (int i = 0; i < c1.size(); i++)
//             {
//                 if (c1[i] == c2[i])
//                 {
//                     ans += c1[i];
//                 }
//             }
//             ans += s[tmp];
//             for (int i = 0; i < c1.size(); i++)
//             {
//                 if (c1[i] == c2[i])
//                 {
//                     ans += c1[i];
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    int demso(int x)
    {
        int dem = 0;
        while (x != 0)
        {
            x /= 10;
            dem++;
        }
        return dem;
    }
    string intToRoman(int num)
    {
        // = (1, 5, 10, 50, 100, 500, 1000);
        stack<int> val;
        string ans = "";
        val.push(1);
        val.push(5);
        val.push(10);
        val.push(50);
        val.push(100);
        val.push(500);
        val.push(1000);
        map<int, string> Roman;
        Roman[1] = "I";
        Roman[4] = "IV";
        Roman[5] = "V";
        Roman[9] = "IX";
        Roman[10] = "X";
        Roman[40] = "XL";
        Roman[50] = "L";
        Roman[90] = "XC";
        Roman[100] = "C";
        Roman[400] = "CD";
        Roman[500] = "D";
        Roman[900] = "DM";
        Roman[1000] = "M";
        stack<int> val_back;
        while (num != 0)
        {
            if (num >= val.top())
            {
                int tmp = val.top();
                val_back.push((num / pow(10, demso(num))) * pow(10, demso(num)));
                for (int i = 1; i <= num / tmp; i++)
                {
                    ans += Roman[val_back.top()];
                }
                num -= val_back.top();
            }
            val.pop();
        }
        // return val_back;
        return ans;
    }
};
int main()
{
    Solution a;
    cout << a.intToRoman(3749);
    // stack<int> i = a.intToRoman(3749);
    // cout << i.top();
    // i.pop();
    // cout << i.top();
    // i.pop();
    // cout << i.top();
    // i.pop();
    // cout << i.top();
    // i.pop();
    // cout << i.top();
    // i.pop();
    // cout << i.top();
}
