#include <iostream>
using namespace std;
int main()
{
    char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}

//PALINDROME
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==true)
        cout<<"Is a palindrome"<<endl;
    else
        cout<<"Is not a palindrome"<<endl;
    return 0;
}

//LONGEST WORD IN A SENTENCE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int currLen=0,maxLen=0;
    int st=0, maxst=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currLen>maxLen)
            {
                maxLen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }
        else
        currLen++;
        if(arr[i]=='\0')
        break;
        i++;
    }
        cout<<maxLen<<endl;
        for(int i=0;i<maxLen;i++)
        cout<<arr[i+maxst];
        return 0;   
}

ALITER:
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr1[] = "Snowfall on this scale is no impediment we can keep moving";
    int n = strlen(arr1);
    
    int maxlen = 0, currentlen = 0;
    int longestWord = 0, word = 0;

    for(int i=0; i<n+1; i++){
        if(arr1[i] == ' ' || arr1[i] == '\0'){            
            if(currentlen > maxlen){
                maxlen = currentlen;
                longestWord = word;                
            }
            currentlen = 0;           
            word = i+1;
        }
        else{ 
        currentlen++;
        }

    }

    cout<<n<<endl;
    cout<<maxlen<<endl;

    for(int i=0; i<maxlen; i++){
        cout<<arr1[i+longestWord];
    }
    cout<<endl;
    return 0;
}
