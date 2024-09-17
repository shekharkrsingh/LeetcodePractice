class Solution {
public:
    string removeStars(string s) {
        int n=s.length();
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='*' && count!=0)
            {
                s[i]='0';
                count--;
            }
            if(s[i]=='*')
            count++;
        }
        string st;
        cout<<s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='*' && s[i]!='0')
            st+=s[i];
        }
        return st;
    }
};