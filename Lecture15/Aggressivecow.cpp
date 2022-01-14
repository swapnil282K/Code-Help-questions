bool ispossible(vector<int> &stalls, int k,int mid,int n)
{
    int cowcnt=1;
    int lastpos=stalls[0];
    for(int i=0;i<n;i++)
    {
        if(stalls[i]-lastpos>=mid)
        {
            cowcnt++;
            if(cowcnt==k)
            {
                return true;
            }
            lastpos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int s=0;
    int n=stalls.size();
    sort(stalls.begin(),stalls.end());
    int e=stalls[n-1];
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(ispossible(stalls,k,mid,n))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;    
    }
    return ans;
}