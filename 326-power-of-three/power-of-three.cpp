class Solution {
public:
    bool isPowerOfThree(int n) {
        long long temp = 1 ;
        while(temp != n)
        {
            temp *= 3 ;
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