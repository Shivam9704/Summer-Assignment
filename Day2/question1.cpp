#include<iostream>
using namespace std;
int main(){
    int digit;
    cout<<"the digit is"<<endl;
    cin>>digit;
    int sum=0;
    while(digit>0){
    int remainder =digit%10;
    sum=sum+remainder;
    digit=digit/10;
}
cout<<"the sum of digit is"<<sum<<endl;
}