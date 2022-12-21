/*
https://leetcode.com/problems/can-place-flowers/
*/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 0;
        while(i < flowerbed.size() && n>0){
            if(flowerbed[i] == 1){
                i += 2;
            }
            else if(i+1 == flowerbed.size() || flowerbed[i+1] != 1){
                n--;
                i += 2;
            }
            else
                i++;
        }
        return n==0;
    }
};
