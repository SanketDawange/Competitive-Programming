/*
https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/
*/
class Solution {
public:
    
    bool hasGroupsSizeX(vector<int>& deck) {
                
        map<int, int> mp;
        for (auto i: deck) {
           ++mp[i];
        }

        int hcf = mp.begin()->second;
        for (auto &i: mp) {
            if (i.second < 2) {
                return false;
            }hcf = __gcd(hcf, i.second);
        }
        return hcf != 1;
    }
};
