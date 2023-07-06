#include<iostream>
using namespace std;
int main(){
    int num1=5;
    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;
    int num2=8;
    cout<<(num1&num2)<<endl; //0
    cout<<(num1|num2)<<endl; //1101=13
    cout<<&num2<<endl;
    cout<<(num1++)<<endl;
}