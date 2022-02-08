vector<int> wavePrint(vector<vector<int>> arr, int nrows, int mcols)
{
    //Write your code here
    vector<int> ans;
    for(int col=0;col<mcols;col++)
    {
        if(col&1)
        {
            for(int row=nrows-1;row>=0;row--)
            {
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for(int row=0;row<nrows;row++)
            {
                //cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}