class Solution {
public:
    bool isPowerOfFour(int n) {
        long long temp = 1 ;
        while(temp != n)
        {
            temp *= 4 ;
            if(temp == n)
            {
                break;
            } 
            if(temp > n)
            {
                return false ;
            }
        }
    return true ; 
    }
};