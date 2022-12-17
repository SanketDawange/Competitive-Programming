/*https://leetcode.com/problems/add-digits/*/
class Solution {
private:
    int getDigitSum(int num){
        int res = 0;
        while(num){
            res += num%10;
            num /= 10;
        }
        return res;
    }
public:
    int addDigits(int num) {
        while(num >= 10){
            num = getDigitSum(num);
        } return num;
    }
};
