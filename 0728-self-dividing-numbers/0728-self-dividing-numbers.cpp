class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result ;
        for(int i = left ; i <= right ;i++)
        {
            int temp = i ;
            while(temp > 0)
            {
                int digit = temp%10;
                if(digit == 0)
                    break;
                if(i%digit == 0)
                {
                    temp = temp / 10;
                }
                else
                {
                    break ;
                }
                if(temp == 0)
                {
                    result.push_back(i);
                }
            }
        }
        return result ;
    }
};