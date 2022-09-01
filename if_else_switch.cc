#include <iostream>
using namespace std;

//if else // either if (when condition matches) or else

//if else if else // it will go in only one block, either if , either else if or else, does not matter if , if and else conditions both matches. if , if is true, then if will be executed and not else if.

int main () {

    int x {12}, y{12};

    if(x == 1) {
        cout<<"x : "<<x<<endl;
    }
    else if(y == 12) {
        cout<<"y : "<<y<<endl;
    }
    else {
        cout<<"x : "<<x<<endl;
        cout<<"y : "<<y<<endl;
    }

    return 0;
}