//Brute Force method
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int ele=arr1[i];
        for(int j=0;j<m;j++)
        {
          if(ele<arr2[j])
            {
                break;
            }
            if(ele==arr2[j])
            {
                ans.push_back(ele);
                arr2[j]=-1123;
                break;
            }
        }
    }
    return ans;
}

//Optimised solution
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
            j++;
        
    }
    return ans;
}