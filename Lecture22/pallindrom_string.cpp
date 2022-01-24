bool checkPalindrome(string str)
{
        int s=0;
        int e=str.size()-1;
        while(s<=e)
        {
            if(isalnum(str[s]) == 0)
                s++;
            else if(isalnum(str[e]) == 0)
                e--;
            else if(tolower(str[s])!=tolower(str[e]))
                return false;
            else
            {
                s++;
                e--;
            }
        }
        return true;
	 
	}

