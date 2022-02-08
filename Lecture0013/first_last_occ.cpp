int firstocc(vector<int>& arr, int n, int k)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+((e-s)/2);
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
    
}
int lastocc(vector<int>& arr, int n, int k)
{
        int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+((e-s)/2);
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstocc(arr,n,k);
    p.second=lastocc(arr,n,k);
    return p;
}