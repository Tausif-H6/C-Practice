#include<iostream>
using namespace std ; 

int main () {
   int arr[] = {12, 56, 66, 88};
    arr[4] = 40;
    arr[5] = 7778;

    int*p = arr;
    cout<<*p;
    cout<<*(p+1);
    cout<<*(p+2);
    cout<<*(p+3);

    return 0;
}