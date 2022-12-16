/*
LINK : https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
*/
class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits(0);
        while(num){
            // get last digit from num
            int digit = num%10;
            if(digit)
                digits.push_back(digit);
            // update num
            num = num/10;
        }
        sort(digits.begin(), digits.end());
        // make num1 and num2 from above digits such that sum is minimum
        int num1 = 0, num2 = 0;
        for(int i=0; i<digits.size(); i++){
            if(i%2==0){
                num1 = num1*10 + digits[i];
            }else{
                num2 = num2*10 + digits[i];
            }
        }
        return num1+num2;
    }
};
