#include<iostream>
using namespace std;

bool isPrime(int n){
  for(int i=2; i<n; i++){
      if(n%i==0){
        return false;
      }
  }
}

int main(){
    int a,b;
    cin>>a>>b;

    for(int num=a; num<=b; num++){
      if(isPrime(num)){
        cout<<num<<endl;
      }
    }
    return 0;
}
