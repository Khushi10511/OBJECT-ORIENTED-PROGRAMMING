// Write a program in C++ to calculate the power of any number using recursion.
#include<iostream>
#include<math.h>
using namespace std;
int power(int a, int b);
int main(){
    int a , b;
    cout<<"Enter base number";
    cin>>a;
    cout<<"Enter power value";
    cin>>b;
    cout<<"Power : "<<power(a,b);
    return 0;
}


int power(int a, int b){
    if(b == 1){
        return a;
    }
    return pow(a,b);
}
