int getpivot(vector<int>& arr,int n)
{
  int s=0,e=n-1;
  int mid=s+(e-s)/2;
  while(s<e)
  {
    if(arr[mid]>=arr[0])
    {
      s=mid+1;
    }
    else
    e=mid;
    mid=s+(e-s)/2;
  }
return s;
}
int binarysearch(vector<int>& arr,int start,int end,int key)
{
  int s=start,e=end;
  int mid=s+((e-s)/2);
  while(s<=e)
  {
    if(arr[mid]==key)
    {
      return mid;
    }
    else if(arr[mid]<key)
    {
      s=mid+1;
    }
    else {
      e=mid-1;
  }
  mid=s+((e-s)/2);
}
return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot=getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        return binarysearch(arr,pivot,n-1,k);
    }
    else
    {
        return binarysearch(arr,0,pivot,k);
    }
}

