void solve(stack<int> &s,int x)
{
if(s.empty())
{
s.push(x);
return;
}
int num=s.top();
s.pop();
solve(s,x);
s.push(num);
}
void reverseStack(stack<int> &s) {
    // Write your code here
    if(s.empty())
        return;
    int num=s.top();
    s.pop();
    
    reverseStack(s);
    
    solve(s,num);
}