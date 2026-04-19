//time complexity = O(logn)
// space somplexity O(1)

class Solution {
public:
    int mirrorDistance(int n) {
        int org = n;
        int rev = 0;
         while (n != 0) { 
            int digit = n % 10; 
            rev = rev * 10 + digit;
             n = n / 10; 
             }
             int diff =  rev - org;
             if(diff < 0){
                return -diff;
             }
             else{
                return diff;
             }
    }
};