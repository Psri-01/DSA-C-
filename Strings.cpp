#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string str1(5, 'n');
    cout<<str1<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "ApniZindagi";
    cout<<str<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout<<str<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="fam";
    string s2="ily";
    //s1.append(s2);
    cout<<s1+s2<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="fam";
    string s2="ily";
    s1=s1+s2;
    cout<<s1<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="fam";
    string s2="ily";
    cout<<s1[1]<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string abc="ahsdhavhdveuhgwaeuvw hasfhds";
    abc.clear();
    cout<<abc<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    string s2="abc";
    cout<<s2.compare(s1)<<endl; //0 means the strings are equal
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="abc";
    cout<<s1<<endl;
    s1.clear();
    if(s1.empty())
        cout<<"String is empty";
  //if(!s1.empty())
  //    cout<<"String is not empty";
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    s1.erase(3, 3); //index and no of chars to be deleted
    cout<<s1<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    cout<<s1.find("poop"); 
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    cout<<s1.insert(2,"lol"); 
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    cout<<s1.size()<<endl; 
    cout<<s1.length();
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    for(int i=0;i<s1.length();i++)
    cout<<s1[i]<<endl; 
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="nincompoop";
    string s=s1.substr(6,4);
    cout<<s;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="786";
    int x = stoi(s1);
    cout<<x+2;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x = 786;
    cout<<to_string(x)+"2";
    return 0;
}

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s1="zjsbdavbacnajsbdj";
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str="americaa";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string str="iceland";
    //upper case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        str[i]-=32;
    }
    cout<<str<<endl;
    //lower case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]+=32;
    }
    cout<<str<<endl;
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}

//form the biggest num from the numeric string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}

Py: #output the num of times a char occurs in a string
str='abdbashdchcabaa'
c='a'
print(len(str.split(c))-1)

//output the num of times a char occurs in a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int freq[26];
    for(int i=0;i<26;i++)
        freq[i]=0;
    for(int i=0;i<s.size();i++)
        freq[s[i]-'a']++;
    char ans='a';
    int maxfreq=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq=freq[i];
            ans=i+'a'; //0 a ko represent kr rha hai aur i b ko so ith char-a aur b ko rep kr rha hai
        }
    }
    cout<<maxfreq<<" "<<ans<<endl;
    return 0;
}
