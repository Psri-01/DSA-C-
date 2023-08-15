#include "bits/stdc++.h"
using namespace std;
int rain_water(vector<int> a){
    stack<int> st;
    int n=a.size(), ans=0;
    for(int i=0;i<n;i++){
        while(!st.empty() and a[st.top()]<a[i]){ //if stack top elem is smaller than curr then container for water:
            int cur=st.top();
            st.pop();
            if(st.empty()){ //no container
                break;
            }
            int diff=i-st.top()-1; //len of container
            ans+=(min(a[st.top()],a[i])-a[cur])*diff; //a[i] is the right wall and a[st.top()] is the left wall so the term before * is the height of the container
            //and diff is the length of the container
        }
        st.push(i);
    }
    return ans;
}
int32_t main(){
    vector<int> a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a);
}
