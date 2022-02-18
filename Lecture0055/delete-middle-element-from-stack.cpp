void solve(stack<int>&s, int n,int c)
{
    if(c==n/2)
    {
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    
    solve(s,n,c+1);
    
    s.push(num);
}
void deleteMiddle(stack<int>&s, int n){
	
   // Write your code here
    int count=0;
    solve(s,n,count);
   
}