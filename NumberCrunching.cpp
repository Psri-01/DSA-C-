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

//C++ Program to Display Prime Numbers Between Two Intervals
#include <iostream>
using namespace std;
int main() {
  int low, high, i;
  bool is_prime = true;
  cout << "Enter two numbers (intervals): ";
  cin >> low >> high;
  cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;
  while (low < high) {
    is_prime = true;
    // 0 and 1 are not prime numbers
    if (low == 0 || low == 1) {
      is_prime = false;
    } 
    for (i = 2; i <= low/2; ++i) {
      if (low % i == 0) {
        is_prime = false;
        break;
      }
    }        
    if (is_prime)
      cout << low << ", ";
    ++low;
  }
  return 0;
}

/*A Kaprekar number is a number whose square when divided into two parts and such that sum of parts is 
equal to the original number and none of the parts has value 0. ex: 297 297^2 = 88209 => 88 + 209 = 297 
=> Kaprekar number 45 45^2=2025 => 20+25 = 45 => Kaprekar Number*/
Kaprekar number
#include<iostream>
using namespace std;
int power1(int);
int isKaprekar(int);
int main() 
{
    int num ;
    cin>>num;
    if(isKaprekar(num)) 
    cout<<"YES";
    else 
    cout<<"NO";
    return 0 ;
}
int power1(int num)
{
    int power ;
    power = 1 ;
    while(num/power )
    power *= 10;
    return power;
}
int isKaprekar(int num) 
{ 
    int sq , part1 , part2 , power;
    power = power1(num);
    sq = num * num;
    part1 = sq / power;
    part2 = sq % power ;
    if( part1 + part2 == num) 
    return 1;
    else 
    {
        power *= 10;
        part1 = sq / power;
        part2 = sq % power ;
        if(part1 + part2 == num)
        return 1;
    }
    return 0;
}

//no of words in a str python
string="Help me wash my bag";
wordC=len(string.split())
print(wordC)
    
/*Happy Number or Not .Find Sum of square of individual digits until the number reaches single digit,
if the number is 1 it is Happy number, if it reaches 4 it is Not a Happy number.  ex: 86 8^2+6^2= 64+36=100 1^2+0^2+0^2=1+0+0=1 Happy number*/
#include<iostream>
using namespace std;
int main()
{
    int digit; int num; int temp; int sum=0;
    cin>>num;
    while(sum!=1&&sum!=4)
    {
        sum=0;
        while(num>0)
        {
            digit=num%10;
            sum+=(digit*digit);
            num=num/10;
            }
            num=sum;
            }
            if(sum==1)
            cout<<"Happy Number"<<endl;
            else
            cout<<"UnHappy Number"<<endl;
            return 0;
    
}

//Given an integer as input, swap the digits alternately.
#include<iostream>
using namespace std;
int main(){  
    int n;int count=0;int safe;int digit;int digits;int swap;int power=1;int ans=0;
    cin>>n;
    safe=n; 
    while(n){
        count++;
        n/=10;
        }
        n=safe;
        if(count%2==1){
            digit=n%10;
            n/=10;
            }
            while(n)
            {
                digits=n%100;
                swap=(digits%10)*10+(digits/10);
                ans=ans+(swap*power);
                power*=100;
                n/=100;
                }
            if(count%2==1)
            cout<<ans*10+digit<<endl;
            else
            cout<<ans<<endl;
            return 0;    
}

//Given a number, preserve the first occurrence of the digit and remove the duplicate occurrences of the same digit. Start reading the digits from left to right.
#include<iostream>
using namespace std;
int main()
{  
    int digit[10]={0};
    int n; int pv=1;  
    cin>>n;  
    while(n/pv)  
    pv=pv*10;  
    pv=pv/10;  
    while(pv!=0)
    {    
        if(digit[(n/pv)%10]==0)    
        {      
            digit[(n/pv)%10]++;      
            pv=pv/10;      
            continue;    
            
        }    
        int rem=n%pv;    
        n=(n/pv)/10;    
        n=(n*pv)+rem;    
        pv=pv/10;  
        
    }  
    cout<<n;  
    return 0;
}

//Given a number, separate the odd and even digits of the number without changing the order
#include<iostream>
using namespace std;
int main()
{
    int n;int input;int digit;int even=0;int odd=0;int evenp=1;int oddp=1;
    cin>>n>>input;
    while(n){
        digit=n%10;
        if(digit%2==0){
            even=even+(digit*evenp);
            evenp*=10;
            }
            else{
                odd=odd+(digit*oddp);
                oddp*=10;
                }
                n/=10;
                }
                if(input==1)
                cout<<even*oddp+odd<<endl;
                else
                cout<<odd*evenp+even<<endl;
                return 0;
}

//Given a number check whether its digits are in increasing order or decreasing order or not
#include<iostream>
using namespace std;
int main()
{
	int input;
	cin>>input;
	int digit1; int digit2;
	digit1=input%10;
	input/=10;
	digit2=input%10;
	input/=10;
	if(input<10)
		cout<<"Not"<<endl;
	else if(input<100)
	{
		if(digit1>digit2)
			cout<<"Increasing"<<endl;
		else if(digit1<digit2)
			cout<<"Decreasing"<<endl;
		else
			cout<<"Not"<<endl;
	}
	int prev;
	int curr;
	if(digit1>digit2)
	{
		prev=digit2;
		while(input)
		{
			curr=input%10;
			if(curr>=prev)
				break;
			input/=10;
			prev=curr;
		}
		if(input==0)
			cout<<"Increasing"<<endl;
		else
			cout<<"Not"<<endl;
	}
	else if(digit1<digit2){
		prev=digit2;
		while(input){
			curr=input%10;
			if(curr<=prev)
				break;
			input/=10;
			prev=curr;
		}
		if(input==0)
			cout<<"Decreasing"<<endl;
		else
			cout<<"Not"<<endl;
	}
	else
		cout<<"Not"<<endl;
	return 0;
}
