/*
PREREQUSITES : INCLUSION-EXCLUSION, BINARY SEARCH, GCD/LCM -> https://youtu.be/Rl4PznQDz3o
PROBLEM LINK : https://leetcode.com/problems/ugly-number-iii/
*/
class Solution {
private:
    long long gcd(long long a, long long b){
        // edge case
        if(a>b) return gcd(b,a);
        // base case
        if(a==0)
            return b;
        // rec call 
        return gcd(a,b%a);
    }
    long long lcm(long long a, long long b){
        return a*b/gcd(a,b);
    }
public:
    int nthUglyNumber(int n1, int a1, int b1, int c1) {
        long long a = a1, b = b1, c = c1, n = n1;
        int low = 0;
        int high = INT_MAX;
        int Union = 0;
        int mid;
        while(low<high) {
            mid = low + (high-low)/2;
            // by using INCLUSION-EXCLUSION principal
            long long res = (mid/a) + (mid/b) + (mid/c) - (mid/lcm(a,b)) - (mid/lcm(b,c)) - (mid/lcm(a,c)) + (mid/(lcm(a,(lcm(b,c)))));
            Union = (int)(res);
            if(Union < n)
                low = mid + 1;
            else
                high = mid;

        } return (int) low;
    }
};
