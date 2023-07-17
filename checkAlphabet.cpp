#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a alphabet:";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Given alphabet is a vowel.";
    }
    else{
        cout<<"Given alphabet is a consonant.";
    }
    return 0;
}