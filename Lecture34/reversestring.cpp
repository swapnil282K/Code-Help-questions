void reverse(string &s,int i,int j)
{
    if(i>j) return ;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
string reverseString(string str)
{
	// Write your code here.
    reverse(str,0,str.length()-1);
    return str;
    
}