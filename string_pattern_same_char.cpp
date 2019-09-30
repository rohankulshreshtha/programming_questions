/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


string subString(string str, string ptr) {
    int len_str = str.size();
    int len_ptr = ptr.size();
    if(len_ptr > len_str){
        return "Pattern bigger then string";
    }
    int start=0,start_index=-1,count=0,min_len=INT_MAX;
    int hm_str[256] = {0};
    int hm_ptr[256] = {0};
    for(int i=0;i<len_ptr;i++) {
        hm_ptr[ptr[i]]++;
    }
    for(int i=0;i<len_str;i++) {
        cout << count;
        hm_str[str[i]]++;
        if(hm_ptr[str[i]] != 0 && (hm_ptr[str[i]] >= hm_str[str[i]]))
            count++;
        if(count == len_ptr) {
            while(hm_ptr[str[start]] < hm_str[str[start]] || hm_ptr[str[start]] == 0) {
                if(hm_ptr[str[start]] < hm_str[str[start]]){
                    hm_str[str[start]]--;
                }
                start++;
            }
            int len_window = i - start + 1;
            if(min_len > len_window){
                min_len = len_window;
                start_index = start;
            }
        }
    }
    if(start_index == -1)
        return "No such string exists";
    return str.substr(start_index, min_len);
}

int main()
{
    string str = "this is a test string",ptr = "tist";
    cout << subString(str,ptr);
    return 0;
}
