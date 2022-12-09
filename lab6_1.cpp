#include<iostream>
using namespace std;

int main(){ 
    int A=0;
    int B=0;
    int N=1;  
    while(N!=0){
        cout << "Enter an integer: ";
        cin >> N ;
    if(N%2==0){
        A=A+1; 
    }
    else{
        B=B+1;
    }
    }
    cout << "#Even numbers = " <<A-1<<"\n";
    cout << "#Odd numbers = " <<B;
    return 0;
}
