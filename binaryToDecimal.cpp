/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int getLength(int n) {
    int count =0;
    while(n > 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int countSum(int n) {
    if(n/10 == 0)
        return n;
    else
        return (n%10 + countSum(n/10));
}

int power(int a,int b) {
    int pro=1;
    for(int i=0;i<b;i++) {
        pro = pro * a;
    }
    return pro;
}

int decimalToBinary(int n) {
    int sum=0;
    int count =0;
    while(n > 0) {
        sum+=((n%10) * power(2,count));
        count++;
        n = n / 10;
    }

    return sum;
}


int main()
{
    int n = 1101;
    cout << "lenght - " << getLength(n) << endl;
    cout << power(2,5) << power(5,3) << endl;
    cout << decimalToBinary(n);
    return 0;
}
