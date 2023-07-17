#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    int original=n;
    int num=0;
    while(n>0){
        int rem=n%10;
        num+=pow(rem,3);      
        n=n/10;
    }

    if(num==original){
        cout<<"Given number is an Armstrong Number."<<endl;
    }
    else{
        cout<<"Given number is not an Armstrong Number."<<endl;
    }
    return 0;
}