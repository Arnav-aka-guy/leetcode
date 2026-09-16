class Solution {
public:
    bool isPerfectSquare(int num) {
        long long temp = 0 ;
        if(num == 1)
        {
            return true ;
        }
        for(long long i = 0 ; i <= num/2; i++)
        {
            temp = i*i ;
            if(temp == num)
            {
                return true ;
            }
        }
        return false;
    }
};