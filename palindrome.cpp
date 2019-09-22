/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "abcdcba";
    int flag=1;
    int l=0,r=str.length()-1;
    while(l < r) {
        if(str[l] != str[r])
            flag = 0;
        l++;
        r--;
    }
    cout << flag;
    return 0;
}
