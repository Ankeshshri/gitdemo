// Aggressive Cows Problem Solution
// Source: GeeksforGeeks (https://www.geeksforgeeks.org/problems/aggressive-cows/1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool check(vector<int> &stalls, int k, int mind)
    {
        int n=stalls.size();
        int cow_pos=stalls[0];
        int count=1;

        for(int i=1;i<n;i++)
        {
            if(stalls[i]-cow_pos>=mind)
            {
                cow_pos=stalls[i];
                count+=1;
            }
        }
        return count>=k;
    }


    int aggressiveCows(vector<int> &stalls, int k) {
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int res=0;

        int low=1;
        int high=stalls[n-1]-stalls[0];

        while(low<=high)
        {
            int mid=(low+high)/2;
            if(check(stalls,k,mid))
            {
                res=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return res;
    }
};