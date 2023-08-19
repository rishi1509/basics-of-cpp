
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*
    PRN : 22070123095
    Aim : Data types in C++
*/
int main()
{
    int a;
    cout<<"ENTER AN INTEGER : ";
    cin>>a;
    cout<<"INTEGER = "<<a<<endl;
    cout<<sizeof(int)<<endl;

    float b;
    cout<<"ENTER A FLOAT VALUE : ";
    cin>>b;
    cout<<"FLOAT VALUE = "<<b<<endl;
     cout<<sizeof(float)<<endl;

    char c;
    cout<<"ENTER ANY CHARACTER : ";
    cin>>c;
    cout<<"CHARACTER = "<<c<<endl;
     cout<<sizeof(char)<<endl;

    double d;
    cout<<"ENTER A DOUBLE VALUE : ";
    cin>>d;
    cin.ignore();
    cout<<setprecision(10);
    cout<<"DOUBLE VALUE = "<<d<<endl;
     cout<<sizeof(double)<<endl;

    string s;
    cout<<"ENTER ANY STRING : ";
    getline(cin,s);
    cout<<"THE STRING = "<<s<<endl;
     cout<<sizeof(string)<<endl;

    bool e;
    cout<<"ENTER A BOOLEAN VALUE : ";
    cin>>boolalpha;
    cin>>e;
    cout<<boolalpha;
    cout<<"BOOLEAN VALUE = "<<e<<endl;
     cout<<sizeof(bool)<<endl;

    return 0;
}

