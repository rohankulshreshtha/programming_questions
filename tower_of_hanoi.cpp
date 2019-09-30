/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void towerOfHanoi(int n , char from_rod , char to_rod , char aux_rod) {
    if(n == 1) {
        cout << "Moving Disk 1 from tower " << from_rod << "to tower " << to_rod << endl;
        return;
    }

    towerOfHanoi(n-1,from_rod , aux_rod , to_rod);
    cout << "Moving Disk " << n <<" from tower " << from_rod << "to tower " << to_rod << endl;
    towerOfHanoi(n-1,aux_rod , to_rod , aux_rod);

}

int main()
{
    int n = 3;
    towerOfHanoi(n,'A','B','C');

    return 0;
}
