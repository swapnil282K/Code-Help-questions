class Solution {
public:
    void reverseWords(vector<char>& s) {
        reverse(s.begin(),s.end());
        s.push_back(' ');
        int pos1=0,pos2=0;
        while(pos1<s.size()-1)
        {
            if(s[pos2]!=' ') pos2++;
            else
            {
                reverse(s.begin()+pos1,s.begin()+pos2);
                pos1=pos2+1;
                pos2++;
            }
        }
        s.pop_back();
    }
};