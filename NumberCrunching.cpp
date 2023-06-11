/*Check whether the given two numbers are Anagram or not. 
Two numbers are said to be as anagram if both numbers formed with same digits.*/
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n1;int n2;int digit;int sum1=0;int sum2=0;
    cin>>n1;
    cin>>n2;
    while(n1){
        digit=n1%10;
        sum1=sum1+pow(10,digit);
        n1/=10;
    }
    while(n2){
        digit=n2%10;
        sum2=sum2+pow(10,digit);
        n2/=10;
    }
    if(sum1==sum2){
        cout<<"Anagram"<<endl;
    }
    else{
    cout<<"No"<<endl;
    }
    return 0;
}

/*Find whether the given number is strong number or not.
The sum of factorial of each digit, is equal to the original number.*/
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;int fact=1; int sum=0;int temp;
    cin>>n;
    temp=n;
    while(n!=0){
        for(int chk=1;chk<=n%10;chk++){
            fact*=chk;
        }
        sum+=fact;
        fact=1;
        n/=10;
    }
    if(temp==sum){
        cout<<"Strong Num"<<endl;
    }
    else{
    cout<<"Not"<<endl;
    }
    return 0;
}

/*Find whether the given number is armstrong or not. 
The number of its digit raised to the sum of power of individual digits, 
is equal to the original number.
Eg: 153,here the number of digits is 3. So, 1^3+5^3+3^3=153.*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int sum=0;
  int ogn=n;
  while(n>0){
    int lastdigit=n%10;\n
      sum+=pow(lastdigit,3);
      n=n/10;
  }
  if(sum==ogn){
    cout<<"Armstrong number"<<endl;
    }
  else{
    cout<<"Not an Armstrong number";
  }  
 return 0;
}

/*Reverse the given number*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int rev=0;  int temp;  
   temp=n; 
   while(temp!=0){
     rev=rev*10+temp%10;
     temp/=10;
   }
  cout<<rev<<endl;
  return 0;
 }

/*Palindrome*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int rev=0;
  int temp;
  temp=n;
  while(temp!=0){
    rev=rev*10+temp%10;
    temp/=10;
  }
  if(n==rev){
    cout<<"Palindrome"<<endl;
  } 
  else{
    cout<<"Not a Palindrome";
  }
  return 0;
}

/*Check whether the number is a magic number. 
Magic number is a number where product of sum of digits and sum reverse is equal to the same number. 
For example, consider n=1729 sum of digits = (1 + 7 + 2 + 9 => 19) Reverse of 19 is 91 (19 X 91 = 1729)*/
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum=0;int rev=0;
  int temp=n;
  while(temp!=0){
    sum+=temp%10;
    temp/=10;
  }
  temp=sum;
  while(temp!=0){
    rev=rev*10+temp%10;
    temp/=10;
  }
  if(sum*rev==n){
    cout<<"YES"<<endl;
    }
      else{
        cout<<"NO"<<endl;
      }
  return 0;
  }

/*Reverse last k digits of the given number*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
  int n;int K;int sub;int digit;int rev=0;int power;
    cin>>n>>K;
  power=pow(10,K);
  sub=n%power;
  n/=power;
  while(sub){
    digit=sub%10;
    rev=rev*10+digit;
    sub/=10;
  }
  n=n*power+rev;
  cout<<n<<endl;
  return 0;
}

//ADAM NUMBER
#include <iostream>
using namespace std;
int reverseDigits(int num) {
   int rev = 0;
   while (num > 0) {
      rev = rev * 10 + num % 10;
      num /= 10;
   }
   return rev;
}
int main() {
   int num = 31;
   cout<<num<<" is ";
   int rev = reverseDigits(num);
   if ( (num*num) == (reverseDigits(rev*rev)) )
      cout << "Adam Number";
   else
      cout << "not an Adam Number";
   return 0;
}
