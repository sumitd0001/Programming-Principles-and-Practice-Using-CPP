#include <bits/stdc++.h>
using namespace std;

int main () {
    
    int a = 200000;
    char c = a;
    int b = c;

    if(a!=b) {
        cout<<"a is not equal to b, a : "<<a<<" b : "<<b<<"\n";
    }
    else {
        cout<<"a is equal to b, a\n";
    }
    return 0;
}

/*
Output: 
a is not equal to b, a : 200000 b : 64
*/