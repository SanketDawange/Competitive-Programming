/*
https://leetcode.com/problems/strictly-palindromic-number/
*/
class Solution {

private:

    bool isPalindrome(string binary){
        int start = 0;
        int end = binary.length()-1;
        while(start<=end){
            if(binary[start++] != binary[end--])
                return false;
        }
        return true;
    }

    string getBinary(int n, int base){
        string binary = "";
        while(n){
            char bit = (char)(n%base);
            binary += bit;
            n/=base;
        }
        return binary;
    }
public:
    bool isStrictlyPalindromic(int n) {

        for(int base = 2; base <=n-2; base++){
            string binary = getBinary(n,base);
            if(isPalindrome(binary) == false)
                return false;
        }
        return true;

    }
};
