#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int* aptr= &a;
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl;
    aptr++;
    cout<<*aptr<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch='a';
    char *cptr=&ch;
    cout<<*cptr<<endl;
    cptr++;
    cout<<*cptr<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    //cout<<*aptr<<endl;
    //*aptr=20;
    //cout<<a<<endl;
    int arr[]={10,20,30};
    cout<<*aptr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    //cout<<*aptr<<endl;
    //*aptr=20;
    //cout<<a<<endl;
    int arr[]={10,20,30};
    cout<<*aptr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*arr<<endl;
        arr++;  //illegal
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    //cout<<*aptr<<endl;
    //*aptr=20;
    //cout<<a<<endl;
    int arr[]={10,20,30};
    cout<<*aptr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;   //indexing pointer
        //arr++;  //illegal
    }
    return 0;
}

//passing pointers to function
#include<bits/stdc++.h>
using namespace std;
void increment(int a)
{
    a++;
}
int main()
{
    int a=2;
    increment(a);
    cout<<a<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout << "inside increment" << " a is " <<  *a << endl;
    cout << "inside increment" << " b is " <<  *b << endl;
    
}
int main()
{
    int a=2;
    int b=4;
    int *aptr= &a;
    int *bptr= &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}
/*inside increment a is 4
inside increment b is 2
4 2*/
