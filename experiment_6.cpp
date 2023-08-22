/*PRN: 22070123095
Experiment-no: 6(a)*/

#include<iostream>
using namespace std;

int main()
{
    int c = 1;
    while(c <= 50)
    {
        cout<<c<<endl;
        c++;
    }

    return 0;
}
/*OUTPUT
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
*/

/*PRN: 22070123095
Experiment-no: 6(b)*/
#include<iostream>
using namespace std;

int main()
{
    int i;

    for(i=1;i<=10;i++)
    {
        cout<<"hello world"<<endl;
    }

    return 0;
}
/*
OUTPUT
hello world 
hello world 
hello world 
hello world 
hello world 
hello world 
hello world 
hello world 
hello world 
hello world 
*/

/*PRN: 22070123095
Experiment-no: 6(c)*/

#include<iostream>
using namespace std;

int main()
{
    int k,i,j;

    cout<<"Enter the number of rows :";
    cin>>k;

    for(i = 0;i < k;i++)
    {
        for(j = 0;j < i;j++)
        {
            cout<<i;
        }

        cout<<endl;
    }

    return 0;
}
/*
OUTPUT
Enter the number of rows :6

1
22
333
4444
55555
*/
