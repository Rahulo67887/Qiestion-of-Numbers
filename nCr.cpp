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
    int n,r;
    cin>>n>>r;

    float ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}