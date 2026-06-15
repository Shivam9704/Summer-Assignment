#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"the digit is"<<endl;
    cin>>number;
    int reverse=0;
    while(number>0){
    int remainder =number%10;
    reverse=reverse*10+remainder;
    number=number/10;
}
cout<<"the reverse of digit is"<<reverse<<endl;
}