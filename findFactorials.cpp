#include<iostream>
using namespace std;

int fact(int num){
    int fact=1;
    for(int i=1; i<=num; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<"."<<endl;
    return 0;
}