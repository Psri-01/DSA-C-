#include <iostream>
using namespace std;
int Sum(int n){
    if(n==0)
    {
        return 0;
    }
    int prevSum=Sum(n-1);
    return n+prevSum; 
}
int main()
{
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;
    return 0;
}
//POWER OF P
#include <iostream>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int prevPower=power(n,p-1);
    return n*prevPower;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
    return 0;
}
//FACTORIAL
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    {
        return 1;
    }
    //int prevfact=factorial(n-1);
    return n*factorial(n-1); 
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
//FIBONACCI
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2); 
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}
// Recursive approach to check if an Array is sorted or not
#include <bits/stdc++.h>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{
	if (n == 1 || n == 0)
		return 1;
	if (arr[n - 1] < arr[n - 2])
		return 0;
	return arraySortedOrNot(arr, n - 1);
}
int main()
{
	int arr[] = { 20, 23, 23, 45, 75, 89 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (arraySortedOrNot(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
}
// Print nos till n (DECREASING ORDER)
#include <bits/stdc++.h>
using namespace std;
void decreasing(int n){
    if(n==0){
    return;
    }
    cout<<n<<endl;
    decreasing(n-1);
}
int main()
{
    int n;
    cin>>n;
    decreasing(n);
	return 0;
}
// Print nos till n (INCREASING ORDER)
#include <bits/stdc++.h>
using namespace std;
void increasing(int n){
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    increasing(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    increasing(n);
	return 0;
}
//Find the first occurence of a number in an array
#include <bits/stdc++.h>
using namespace std;
int firstocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int main()
{
    int arr[]={4,2,1,2,2,7};
    cout<<firstocc(arr,7,0,7)<<endl;
	return 0;
}
//last occurence of a number in an array
#include <bits/stdc++.h>
using namespace std;
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray = lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i; 
    } return -1;
    
}
int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<lastocc(arr,7,0,2)<<endl;
	return 0;
}
//Reverse a string 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<str;
	return 0;
}
//Reverse a string using recursion
#include <bits/stdc++.h>
using namespace std;
void reverse(string s){
    if(s.length()==0){  //base case
        return;
    }
    string ros=s.substr(1); //ros-rest of the string
    reverse(ros);
    cout<<s[0];
}
int main()
{
    string str;
    getline(cin,str);
    reverse(str);
	return 0;
}
//Replace pi with 3.14
#include <bits/stdc++.h>
using namespace std;
void replacePi(string s){
    if(s.length()==0){  //base case
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
    cout<<s[0];
    replacePi(s.substr(1));
    }
}
int main()
{
    string str;
    getline(cin,str);
    replacePi(str);
	return 0;
}
//Tower of Hanoi
#include <bits/stdc++.h>
using namespace std;
void towerofHanoi(int n, char src, char dest, char helper){
    if(n==0){
        return; //base case
    }
    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}
int main()
{
    towerofHanoi(3,'A','C','B');
	return 0;
}
//Replace string duplicates
#include <bits/stdc++.h>
using namespace std;
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    } return (ch+ans);
}
int main()
{
    std::cout << removeDup("aaabbbbccccceeeeedd") << std::endl;;
	return 0;
}
//Move all x to the end of the string
#include <iostream>
using namespace std;
string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = moveallX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main()
{
    cout<<moveallX("axxbdxceffxhix");
    return 0;
}
//Generate all the substrings of a string
#include <iostream>
using namespace std;
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main()
{
    subseq("ABC","");
    cout<<endl;
    return 0;
}
//Generate substrings with ASCII number
#include <iostream>
using namespace std;
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));
}

int main()
{
    subseq("AB","");
    cout<<endl;
    return 0;
}
//PRINT ALL THE POSSIBLE WORDS FROM PHONE DIGITS
#include <iostream>
using namespace std;
string keypadArr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];  //char to integer
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main()
{
    keypad("23","");
    return 0;
}
