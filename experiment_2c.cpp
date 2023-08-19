#include<iostream>
using namespace std;
int main()
{
    bool comparision;
    int num1 , num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    comparision=num1>num2;
    if(comparision)
     cout<<num1<<"is greater than "<<num2<<endl;
    else
     cout<<num1<<"is smaller than"<<num2<<endl;

}