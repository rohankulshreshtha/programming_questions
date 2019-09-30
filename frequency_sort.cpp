/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool customFunction(pair<int , int> p1 , pair<int , int> p2) {
    return (p1.second > p2.second);
}

int main()
{
    int arr[] = {1,3,5,5,4,3,7,6,5,3,2,4};
    int n = 12;
    unordered_map<int ,int> um;
    for(int i=0;i<n;i++){
        um[arr[i]]++;
    }

    vector<pair<int , int>> v;

    for(auto x : um){
        pair<int , int> temp;
        temp.first = x.first;
        temp.second = x.second;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), customFunction);

    vector<pair<int , int>>::iterator ptr;

    for(ptr = v.begin();ptr!=v.end();ptr++){
        for(int i=0;i<(*ptr).second;i++){
            cout << (*ptr).first;
        }
    }

    return 0;
}
