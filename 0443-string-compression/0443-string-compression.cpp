class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        s+=chars[0];
        int n=chars.size();
        int pre=chars[0];
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(chars[i]==pre)
            {
                count++;
            }else{
                if(count!=1)
                {
                    s+=to_string(count);
                    count=1;
                }
                s+=chars[i];
                pre=chars[i];
            }
        }
        if(count!=1)
        s+=to_string(count);
        for(int i=0;i<n;i++)
        {
            if(i<s.length())
            chars[i]=s[i];
        }
        return s.length();
    }
};