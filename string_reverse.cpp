/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseString(string str){
    int i=0,j=str.size()-1;
    while(i <= j) {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    return str;
}

string reverseStringInbuild(string str) {
    reverse(str.begin(), str.end());
    return str;
}

string reverseIndWords (string str) {
    string word = "",result="";
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            result+=(reverseString(word) + " ");
            word="";
        }
        else
            word+=str[i];
    }
    result+=(reverseString(word));
    return result;
}

int main()
{
    string str = "my name is rohan";
    cout << reverseIndWords(str);
    return 0;
}
