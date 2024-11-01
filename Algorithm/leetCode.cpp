#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

// give a String then count length of the last words.
class LenghOfLastWord
{
public:
    // base on space to get the last tring in s
    string getLastString(string s)
    {
        string tmp = "";
        for (int i = 0; i < s.size(); i++)
        {
            tmp += s[i];
            if (s[i] == ' ')
            {
                tmp = "";
            }
        }
        return tmp;
    }

    // delete space in head and tail
    string trim(const std::string &s)
    {
        // del space at start
        /* expression mean:
            /t -> tab
            /n -> newline
            /r -> go back start column
            /f -> from feed
            /v -> Vertical tab | Tab dọc
        */
        size_t start = s.find_first_not_of(" \t\n\r\f\v"); // find first character not of space or anything like this
        // Nếu chuỗi chỉ có khoảng trắng, trả về chuỗi rỗng
        if (start == std::string::npos)
            return "";

        // Loại bỏ khoảng trắng từ cuối chuỗi
        size_t end = s.find_last_not_of(" \t\n\r\f\v");

        return s.substr(start, end - start + 1);
    }

    int lengthOfLastWord(string s)
    {
        string lastString = getLastString(trim(s));
        return lastString.size();
    }
};

// make a triangle pascal
class TrianglePascal
{
public:
    // caculate combination;
    int Combination(int n, int k)
    {
        if (k == 0 || k == n)
            return 1;

        long long result = 1;
        for (int i = 1; i <= k; i++)
        {
            // new algorithm  to caculate combination when not use factory;
            result = result * (n - i + 1) / i;
        }
        return result;
    }
    vector<vector<int>> generate(int numRows)
    {
        // declared size row of 2 - dimension of vector<vector<int>>
        vector<vector<int>> pascalTriangle(numRows);
        for (int i = 0; i < numRows; i++)
        {
            // with cell in row of pascalTriangle, we have to allocation with numb cell approciate.
            pascalTriangle[i] = vector<int>(i + 1, 1);
            for (int j = 0; j <= i; j++)
            {
                pascalTriangle[i][j] = Combination(i, j);
            }
        }
        return pascalTriangle;
    }
};

/*
    give array number then + 1;
    ex: [1,2,3];
    output: [1,2,4]; because : 123 + 1 = 124;
    ex: [9];
    output: [1,0]: because : 9+1 = 10;
*/
class PlusOne
{
public:
    vector<int> plusOne(vector<int> &digits)
    {

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        // có tác dụng chèn 1 lên đầu như 9 -> [1,0];
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

// class ForSum {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>> result;
//         int n = nums.size();
//         if(n < 4) return result;
//         /*
//             end loop at n - 3 because it need 3 space for j, left and right;
//         */
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < n-3; i++){
//             // Check if 2 digits is the same value
//             if(i>0 && nums[i] == nums[i-1]) continue;
//             for(int j = i+1; j < n-2; j++){
//                 // same above and end loop at n - 2 to free 2 space for left and right;
//                 if(j > i+1 && nums[j] == nums[j+1] ) continue;

//                 int left = j +1;
//                 int right = n - 1;
//                 while(left < right){
//                     long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
//                     if(sum == target){
//                         result.push_back({nums[i], nums[j], nums[left], nums[right]});

//                         // ignore with 2 value in the same
//                         while(left < right && nums[left] == nums[left + 1]) left++;
//                         while(left < right && nums[right] == nums[right-1]) right--;

//                         left ++;
//                         // check if it has another value can make four sum right.
//                         right--;
//                     }
//                     else if(sum < target){
//                         left ++;
//                     }
//                     else{
//                         right--;
//                     }
//                 }
//             }
//         }
//         return result;
//     }
// };

// given an array nums and target then return 4 nums has total sum == target |
// remember it can be larger than 1 (4 elements);
class ForSum4
{

public:
    vector<vector<int>> ForSum4new(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<vector<int>> result;
        // use set to avoid situation have the same value althought different index in array
        set<vector<int>> setTmp;
        if (n < 4)
            return result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++)
        {

            /*
                two if have been comments will be usefull if the task tell no the same value; I guess so
            */

            // if(i > 0 && nums[i] == nums[i+1]) continue;
            for (int j = i + 1; j < n - 2; j++)
            {
                // if(j > i+1 && nums[j] == nums[j-1]) continue;
                int left = j + 1;
                int right = n - 1;
                while (left < right)
                {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[left] + (long long)nums[right];
                    /*
                        because nums have bene sort so the value is increase each by index;
                        so if sum < target them the value left should be increase and opposite with right index

                    */
                    if (sum < target)
                    {
                        left++;
                    }
                    else if (sum > target)
                    {
                        right--;
                    }
                    else
                    {
                        setTmp.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                    }
                }
            }
        }
        // access each elements in setTmp after that push_back it into result
        for (auto it : setTmp)
        {
            result.push_back(it);
        }
        return result;
    }
};
// given a array nums, and return the numbs has appear one times
class SingleNumber
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> result;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            result[nums[i]]++;
        }
        for (const auto &it : result)
        {
            int x = it.second;
            if (x == 1)
            {
                return it.first;
            }
        }
        return 1;
    }
    // second way use operator ^= XOR
    int singleNumber(vector<int> &nums, bool f)
    {
        int result = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            result ^= nums[i];
        }
        return result;
    }
};

// Given a string s, return the longest

class StringLongestPalindrome
{

public:
    // bool checkAgain(string s)
    // {

    //     for (int i = 0; i < s.size(); i++)
    //     {
    //         if (s[i] != s[(s.size() - 1 - i)])
    //             return false;
    //     }

    //     return true;
    // }
    string longestPalindrome(string s)
    {
        int n = s.size();
        string result;

        if (n < 2)
            return s;
        for (int i = 0; i < n; i++)
        {
            // check if this string has size odd number;
            int left = i, right = i;
            // if it
            while (left >= 0 && right < n && s[left] == s[right])
            {
                left--;
                right++;
            }

            string oddPalindrome = s.substr(left + 1, right - left - 1);
            if (oddPalindrome.size() > result.size())
            {
                result = oddPalindrome;
            }

            // check even palindrome
            left = i, right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right])
            {
                left--;
                right++;
            }
            string evenPalindrome = s.substr(left + 1, right - left - 1);
            if (evenPalindrome.size() > result.size())
            {
                result = evenPalindrome;
            }
        }

        return result;
    }
};

// find 3 nums and total sum them == 0
class ThreeSum
{
public:
    vector<vector<int>> ThreeSum(vector<int> nums)
    {

        vector<vector<int>> result;
        set<vector<int>> s;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
            int right = n - 1;
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum < 0)
                {
                    left++;
                }
                else if (sum > 0)
                {
                    right--;
                }
                else
                {
                    s.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
            }
        }
        for (auto it : s)
        {
            result.push_back(it);
        }
        return result;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class LinkedList
{
public:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    // delete duplicataes value on this linked list;
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head) // check if head == nullptr
            return head;
        ListNode *tmp = head;
        set<int> repl; // filter unique value/ increase
        while (tmp) // mean tmp != nullptr  
        {
            repl.insert(tmp->val);
            tmp = tmp->next;
        }
        ListNode *result = nullptr;
        ListNode *tail = nullptr; // track the end of the list
        for (auto it : repl)
        {
            if (!result)
            { // check if First Node
                result = new ListNode(it);
                tail = result;
            }
            else
            {
                tail->next = new ListNode(it);
                tail = tail->next;
            }
        }
        return result;
    }
    /*
        Check if linked list have a cycle,
        LIne way thinking: When it have a cycle, it never end;
    */
    // way 1:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false; // mean if head == nullptr or head->next == nullptr we will return false;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != slow){
            if(!fast->next || !fast->next->next) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
    // way 2:
    bool hasCycleV2(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;
        while(!fast && !fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
    // remove elements has value equal with target (val)
    ListNode* removeElements(ListNode* head, int val) {
        if(!head ) return head; // if head == nullptr return head
        ListNode* tmp = head;
        ListNode* dummy = new ListNode(0, head); // has mission to access user locate to head linked list
        ListNode* pre = dummy;
        while(tmp){ // do it when tmp != nullptr;
            if(tmp->val == val){
                pre->next = tmp->next;
                ListNode *nTmp = tmp;      
                tmp = tmp->next;
                delete nTmp;
                continue;
                // just delete node
            }
            else{
                pre = tmp;
                tmp = tmp->next;
                // just go to next step;
            }
        }
        // return head with dummy pointer
        head = dummy->next;
        delete dummy; // delete it because it hasn't usefull anymore hahahaha.
        return head;
    }
};


int main()

{
    StringLongestPalindrome test;
    // babad
    cout << test.longestPalindrome("aacabdkacaa") << endl;
    // cout<<test.longestPalindrome("babad")<<endl;
    // cout<<test.longestPalindrome("cbbd");
    // string a = "babad";
    // cout<<a.substr(0,a.find_last_of("b")+1);
    // {
    //     // LenghOfLastWord  a;
    //     // string s = "   fly me   to   the moon";
    //     // cout<<a.lengthOfLastWord(s);
    //     TrianglePascal a;
    //     a.generate(3);
    //     // cout<<a.Combination(0,0);
    //     // cout<<a.Combination(1,0);
    //     PlusOne test;
    //     vector<int> t;
    //     t.push_back(9);

    //     vector<int> k = test.plusOne(t);
    //     cout << k[0] << k[1];
    // }

    // vector<int> test = {4, 2, 2, 1, 1};
    // SingleNumber a;
    // cout << a.singleNumber(test);
}