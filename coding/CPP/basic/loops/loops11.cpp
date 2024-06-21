#include<iostream>
using namespace std;

int main() {
    int q;
    cin >> q;

    int i = 1;
    int sum = 0;
    while (i<=q) {
        sum = sum + i;
        i = i + 1;
    }

    cout<< "bakchodi ha "<< sum<<endl; 
    }