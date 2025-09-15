#include "bits/stdc++.h"
using namespace std;


int sumOfNumbers(int cont1, int cont2, int cont3){
    int sum = cont1+cont2+cont3;
    cont1 = 8;
    return sum;
}



int main(int argc, char const *argv[])
{
    int x,y,z;
    cin >> x >> y >> z;


    int sum = sumOfNumbers(x,y,z);
    cout << x;
    
    return 0;
}