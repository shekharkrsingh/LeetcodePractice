class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m=flowerbed.size();
        for(int i=0;i<m;i++)
        {
            if(flowerbed[i]==0 &&(i+1>=m || flowerbed[i+1]==0) && (i==0 || flowerbed[i-1]==0))
            {
                n--;
                i++;
            }
        }
        return n>0?0:1;
    }
};