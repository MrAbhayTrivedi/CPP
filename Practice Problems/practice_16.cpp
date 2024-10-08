/*
C. Showering
time limit per test2 seconds
memory limit per test256 megabytes
As a computer science student, Alex faces a hard challenge — showering. He tries to shower daily, but despite his best efforts there are always challenges. He takes s minutes to shower and a day only has m minutes!

He already has n tasks planned for the day. Task i is represented as an interval (li, ri), which means that Alex is busy and can not take a shower in that time interval (at any point in time strictly between li and ri). No two tasks overlap.

Given all n time intervals, will Alex be able to shower that day? In other words, will Alex have a free time interval of length at least s?


In the first test case, Alex can shower for the first 3 minutes of the day and not miss any of the tasks.

Input
The first line contains a single integer t (1≤t≤104) — the number of test cases.
The first line of each test case contains three integers n, s, and m (1≤n≤2⋅105; 1≤s,m≤109) — the number of time intervals Alex already has planned, the amount of time Alex takes to take a shower, and the amount of minutes a day has.

Then n lines follow, the i-th of which contains two integers li and ri (0≤li<ri≤m) — the time interval of the i-th task. No two tasks overlap.

Additional constraint on the input: li>ri−1 for every i>1.
The sum of n over all test cases does not exceed 2⋅105.
Output
For each test case output "YES" (without quotes) if Alex can take a shower for that given test case, and "NO" (also without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).

Example
Input
4
3 3 10
3 5
6 8
9 10
3 3 10
1 2
3 5
6 7
3 3 10
1 2
3 5
6 8
3 4 10
1 2
6 7
8 9
Output
YES
YES
NO
YES
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        vector<int> v;
        int sum=0;
        int total=0;
        int mx=0;
        for(int i=0;i<n;i++){
            int l,r;
            cin>>l>>r;
            if (i==0)
            {
                total=r;
                mx=max(mx,l);
            }
            if (i>0)
            {
                mx=max(mx,l-v[2*i-1]);
                total+=(r-l+l-v[2*i-1]);
            }
            
            v.push_back(l);
            v.push_back(r);
            sum+=r-l;
        }
        if (mx>=s)  
        {
            cout<<"YES"<<endl;
            continue;
        }
        if (total+s<=m){
            cout<<"YES"<<endl;
            continue;
        }

        cout<<"NO"<<endl;
    }     
}

/*
//No vector space used
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m,ans=0;
        cin>>n>>k>>m;
        string s="NO";
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a-ans>=k)s="YES";
            else ans=b;
            
        }
        if(m-ans>=k)s="YES";
        cout<<s<<endl;
    }
}
*/