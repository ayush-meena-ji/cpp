#include<iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    int i =1;
    int q;
    int sum = 2 ;

    while (i<= n)
    {
        q = sum * i;
        cout << "2 multiply by " << i << " is " << q << endl;
        i = i+1;
        
    }
    

}

