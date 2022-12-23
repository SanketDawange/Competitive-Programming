class Solution {
public:
    double pow(double x, int n) {
        if(n==0) return 1;
        double res = pow(x,n/2);
        if(n&1) return x*res*res;
        return res*res;
    }
    double myPow(double x, int n) {
        double ans = pow(x,n);
        if(n<0) return 1/ans;
        return ans;
    }
};
