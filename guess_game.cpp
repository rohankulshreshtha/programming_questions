/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int tries = 5,n,num=10,prev=NULL;
    cout<<"Hello to the game , Please guess the Number"<<endl;
    while (tries > 0) {
        cout << "You have " << tries << " tries" << endl;
        cin >> n;

        if(n == num)
            break;
        else if(n > num) {
            cout << "guess is larger than the number"<<endl;
        }
        else {
            cout << "guess is smaller than the number"<<endl;
        }
        if(prev == NULL || n != prev)
            tries--;
        prev = n;
    }

    if(tries > 0) {
        cout << "right guess";
    }
    else {
        cout << "game over";
    }

    return 0;
}
