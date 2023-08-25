
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

#include<iostream>
using namespace std;
int main()
{
    bool imagecolor = true;
    if(imagecolor)
      cout<<"yes the image is colourful"<<endl;
    else
      cout<<"image is black and white"<<endl;

    
}
/*OUTPUT
yes the image is colourful
*/
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
/*OUTPUT
enter the first number
34
enter the second number
56
34is smaller than56


*/
