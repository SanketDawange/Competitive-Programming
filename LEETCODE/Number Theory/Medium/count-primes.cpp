/*
 WE CALCULATED THE PRIME NUMBERS FROM 2 TO 10^6 USING SIEVE'S ALGORITHM - > https://primes.utm.edu/glossary/xpage/SieveOfEratosthenes.html
 PROBLEM LINK -> https://leetcode.com/problems/count-primes/
*/
// Sieve Of Eratosthenes
#define N 5*1000000
bool Sieve[N+1];
 void createSieve(int n){
        Sieve[0] = false; // 0 is not prime
        Sieve[1] = false; // 1 is not prime
        for(int i=2; i<=N; i++){
            Sieve[i] = true;
        }
        for(int i=2; i*i<=n; i++) {
            if(Sieve[i]) {
                for(int j=i*i; j<=n; j+=i) {
                    Sieve[j] = false;
                }
            }
        }
    }
class Solution {
private:
    
public:
    int countPrimes(int n) {
        createSieve(n);
        int count = 0;
        for(int i=2; i<n; i++){
            if(Sieve[i] == true)
                count  ++;
        }
        return count;
    }
};
