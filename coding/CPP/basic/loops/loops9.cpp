#include<iostream>
using namespace std;

int main() {

    char c;
    cin>> c;
    cout << "value of c is :" << c <<endl;
    if(c >=65 && c<= 90) {
        cout << "c is the char available between A to Z"<< endl;
    }

    else if( c>= 97 && c<= 122){
        cout << " c is the char available between a to z"<< endl;
    }

    else (c>= 0 && c<= 9);{
        cout << " c is numeric"<< endl;
    }


}