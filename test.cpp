#include <iostream>
// #include<cmath>
using namespace std;

int main()
{
    int time = 24;

    if (time < 00 ) {

        cout << "Good morning!";
    }
    else if ( time < 15 ) {
        cout << "Good day! ";
    }
    else {
        cout << "Good evening!";
    }

    return 0;
}
