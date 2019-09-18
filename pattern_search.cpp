/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string str = "abcdefgh",pat = "h";
    int index=-1;
    for(int i=0;i<str.size() - pat.size()+1;i++) {
        int j=i,k=0,temp=i;
        while(str[j] == pat[k]) {
            if(k == pat.size()-1){
             index = temp;
             break;
            }
            k++;
            j++;
        }
        if(index != -1)
            break;
    }
    cout << index;
    return 0;
}
