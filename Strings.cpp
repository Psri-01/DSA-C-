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
