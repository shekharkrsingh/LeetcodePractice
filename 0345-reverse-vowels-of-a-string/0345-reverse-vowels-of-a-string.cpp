class Solution {
public:
    string reverseVowels(string s) {
        int end=s.length()-1;
        int start=0;
        char arr[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while(start<end)
        {
            bool first=false;
            bool last=false;
            for(int i=0;i<10;i++){
                if(s[start]==arr[i])
                first=true;
            }
            for(int i=0;i<10;i++){
                if(s[end]==arr[i])
                last=true;
            }
            if(first && last)
            {
                swap(s[start], s[end]);
                start++;
                end--;
                continue;
            }
            if(!first)
            start++;
            if(!last)
            end--;
        }
        return s;
    }
};