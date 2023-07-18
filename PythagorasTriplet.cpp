#include<iostream>
using namespace std;

bool triplet(int x, int y, int z){
    int a = max(x, max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
}
}
int main(){
    int b,f,g;
    cin>>b>>f>>g;

    if(triplet(b,f,g)){
        cout<<"Yes, it's a Pythagoras Triplet.";
    }
    else{
        cout<<"Not a Pythagoras Triplet.";
    }
 
    return 0;
}