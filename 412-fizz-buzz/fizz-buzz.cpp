class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ch;
        for(int i = 1; i <= n; i++) {
            if(i % 3 == 0 && i % 5 == 0) {
                ch.push_back("FizzBuzz");
            }
            else if(i % 3 == 0) {
                ch.push_back("Fizz");
            }
            else if(i % 5 == 0) {
                ch.push_back("Buzz");
            }
            else {
                ch.push_back(to_string(i));
            }
        }
        return ch;
    }
};