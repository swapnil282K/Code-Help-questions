// Using Extra space 
string replaceSpaces(string &s){
	// Write your code here.
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
                
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}

// Without using extra space

string replaceSpaces(string &s){
	// Write your code here.
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            s.erase(i,1);
            s.insert(i,"@40");
            i=i+3;
            n=n+2;
        }
    }
    return s;
}