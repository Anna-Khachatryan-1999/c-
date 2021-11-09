#include <iostream>
#include <bitset>

/*template <typename cont, typename T>
void print(const cont& contain, T index)
{
    std::cout<< contain.at(index);
}
int main()
{
    std::map<int, int> m;
    m.insert({1, 1});
    m.insert({2, 2});
    print(m, 1);
    return 0;

}*/

/*std::string f(std::string s1, std::string s2)
{
    int a = std::stoi(s1);
    int b = std::stoi(s2);
    int c = a | b;
std::bitset<8> k(c);
    std::string s = k.to_string;
    return s;
}
int main()
{
    std::string s1 = "1000";
    std::string s2 = "111";
    std::cout << f(s1, s2) << std::endl;

}*/
#include<bits/stdc++.h>
using namespace std;
 
// This function adds two binary strings and return
// result as a third string
string addBinary(string a, string b)
{
    string result = ""; // Initialize result
    int s = 0;          // Initialize digit sum
 
    // Traverse both strings starting from last
    // characters
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        // Comput sum of last digits and carry
        s += ((i >= 0)? a[i] - '0': 0);
        s += ((j >= 0)? b[j] - '0': 0);
 
        // If current digit sum is 1 or 3, add 1 to result
        result += char(s % 2 + '0') + result;
 
        // Compute carry
        s /= 2;
 
        // Move to next digits
        i--; j--;
    }
    return result;
}
 
// Driver program
int main()
{
    string a = "1", b="1";
    cout << addBinary(a, b) << endl;
} 
