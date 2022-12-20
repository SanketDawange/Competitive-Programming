/*
https://leetcode.com/problems/intersection-of-two-arrays-ii/
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(0);
        int counts1[1001] = {0}; int counts2[1001] = {0};
        for(int i: nums1) counts1[i]++;
        for(int i: nums2) counts2[i]++;
        for(int i=0; i<=1000; i++){
            if(counts1[i]!=0 && counts2[i]!=0){
                int mn = min(counts1[i],counts2[i]);
                while(mn--){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
