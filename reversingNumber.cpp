#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int num=0;

    while(n>0){
        int rem=(n%10);
        num=(num*10+rem);
        n=n/10;
    }
    cout<<num;
    return 0;
}