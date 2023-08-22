/*PRN: 22070123095
Experiment-no: 8(a)*/

#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"My name is: "<<name;
    
return 0;
}
/*OUTPUT
Enter your name: rishi mukherjee
My name is: rishi mukherjee
*/

/*PRN: 22070123095
Experiment-no: 8(b)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1;
    int count =0;
    cout<<"Enter a string: ";
    cin>>str1;
    for(int i=0; str1[i]!='\0';i++){
        count++;
    }
    cout<<"The lenght of the string is: "<<count;
    
return 0;
}

/*OUTPUT
Enter a string: Hi My Name is Rishi
The lenght of the string is: 19
*/

/*PRN: 22070123095
Experiment-no: 8(c)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cout>>str2);
    
    cout<<"Concatenated string is: "<<str1 + str2;
    
return 0;
}
/*OUTPUT
Enter first string: Hello 
Enter second string: World!
Concatenated string is: Hello World!
*/

/*PRN: 22070123095
Experiment-no: 8(d)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2,str3,str4;
    int count =0;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    str3= str1;
    str4=str3 + str2;
    cout<<"Concatenated string is: "<<str3 + str2<<endl;
    for(int i=0; str4[i]!='\0'; i++){
        count++;
    }
    cout<<"Lenght of the concatenated string is: "<<count;
return 0;
}
/*OUTPUT
Enter first string: Hello
Enter second string: World!
Concatenated string is: Hello World!
Lenght of the concatenated string is: 12
*/

/*PRN: 22070123095
Experiment-no: 8(e)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1,str2;
    int n,count=0;
    cout<<"Enter a string: ";
    cin>>str1;
    for(int i=0; str1[i]!='\0'; i++){
        n++;
    }
    cout<<"The original string is: "<<str1<<endl;
    cout<<"The reverse string is: ";
    for(int i=n; i>=0; i--){
        str2[n-i] = str1[i];
        cout<<str2[n-i];
    }
    for(int i=0; str1[i]!='\0' && str2[i]!='\0'; i++){ 
        if(str1[i]==str2[i]){
            count++; 
        }
    }
    if(count==n){
        cout<<endl<<"It is a Palindrome";
    }else{
        cout<<endl<<"It is not a Palindrome";
    }
    
return 0;
}

/*OUTPUT
Enter a string: mam
The original string is: mam
The reverse string is: mam
It is a Palindrome

Enter a string: tarun
The original string is: rishi
The reverse string is: ihsir
It is not a Palindrome
*/

/*PRN: 22070123095
Experiment-no: 8(f)*/
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    string str1;
    cout<<"Enter a string: ";
    getline(cin,str1);
    cout<<"The original string is: "<<str1<<endl;
    cout<<"The new string is: ";
    for(int i=0; str1[i]!='\0'; i++){
        cout<<char(str1[i]-32);
    }
return 0;
}

/*OUTPUT
Enter a string: rishi
The original string is: rishi
The new string is: RISHI

*/

