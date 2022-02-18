void sorted(stack<int> &s,int num)
{
    if(s.empty() || (!s.empty() && (s.top()<num)))
    {
        s.push(num);
        return;
    }
    int n=s.top();
    s.pop();
    sorted(s,num);
    
    s.push(n);
}
void sortStack(stack<int> &s)
{
	// Write your code here
    if(s.empty())
    {
        return;
    }
    int num=s.top();
    s.pop();
    
    sortStack(s);
    
    sorted(s,num);
}