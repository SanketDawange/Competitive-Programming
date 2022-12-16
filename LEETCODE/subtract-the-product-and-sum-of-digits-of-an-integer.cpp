/*
https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
*/
class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> digits(0);
        while(n){
            int digit = n%10;
            digits.push_back(digit);
            n /= 10;
        }
        int product = 1;
        int sum = 0;
        for(int i: digits){
            product *= i;
            sum += i;
        }

        return product - sum ;
    }
};
