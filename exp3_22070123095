/*
    EXP-3A
    PRN : 22070123095
    Aim : enter last 5 digits of your prn in a seperate line
*/
#include <iostream>
#include<string>

using namespace std;

int main() 
{
  
int n , rem;
cout<<"ENTER ANY NUMBER : ";
cin>>n;
int temp = n;
int len = to_string(n).length();
int A[len];
int i = 0;
while(temp > 0)
{
    rem = temp % 10;
    A[i] = rem;
    ++i;
    temp /= 10;
}
for(int j = i - 1 ; j >= 0 ; --j)
{
    cout<<A[j]<<endl;
}
    return 0;
}

/*OUTPUT-ENTER ANY NUMBER : 23095
2
3
0
9
5*/




/*
   EXP - 3B
    PRN : 22070123095
    Aim : to calculate the grades of students 
*/
#include<iostream>
using namespace std;
int main()
{
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    

    cout<<"enter the marks of first subject"<<endl;
    cin>>m1;
      cout<<"enter the marks of second subject"<<endl;
    cin>>m2;
      cout<<"enter the marks of third subject"<<endl;
    cin>>m3;
      cout<<"enter the marks of fourth subject"<<endl;
    cin>>m4;
      cout<<"enter the marks of fifth subject"<<endl;
    cin>>m5;
    int avg=(m1+m2+m3+m4+m5)/5;

    if(avg>=90)
    {
      cout<<"O GRADE"<<endl;
    }
    else if(avg >= 80 && avg < 90)
    {
        cout<<"A+";
    }
    else if(avg >= 70 && avg < 80)
    {
        cout<<"A";
    }
      else if(avg >= 60 && avg < 70)
    {
        cout<<"B+";
    }
      else if(avg >= 50 && avg < 60)
    {
        cout<<"B";
    }
      else if(avg >= 40 && avg < 50)
    {
        cout<<"C";
    }
    else
    {
        cout<<"FAIL";
    }

return 0;

}
/*OUTPUT-enter the marks of first subject
79
enter the marks of second subject
85
enter the marks of third subject
34
enter the marks of fourth subject
65
enter the marks of fifth subject
85
B+*/


