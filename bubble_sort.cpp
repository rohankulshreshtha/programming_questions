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
    array<int,9> myarray{ 9,1,2,3,4,5,6,7,8 };
    int flag = 0;
    for(int i=0;i<myarray.size();i++){
        for(int j=0;j<myarray.size()-1;j++){
            if(myarray[j] > myarray[j+1]){
                flag = 1;
                int temp = myarray[j];
                myarray[j] = myarray[j+1];
                myarray[j+1] = temp;
            }
        }
        if(flag == 0)
            break;
        flag=0;
    }
    for(int i=0;i<myarray.size();i++){
        cout << myarray[i];
    }
    return 0;
}
