class Solution {
public:
    int getLucky(string s, int k) {
        
        string num = "";

        // Convert characters to numbers
        for(char ch : s) {
            num += to_string(ch - 'a' + 1);
        }

        int sum = 0;

        // Perform transform k times
        for(int i = 0; i < k; i++) {

            sum = 0;

            for(char digit : num) {
                sum += digit - '0';
            }

            num = to_string(sum);
        }

        return sum;
    }
};