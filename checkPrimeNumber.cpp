#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;

    int count=0;

    for(int i=2; i<n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==0){
        cout<<"Given number is a prime number."<<endl;
    }
    else{
        cout<<"Given number is not a prime number."<<endl;
    }
    return 0;
}