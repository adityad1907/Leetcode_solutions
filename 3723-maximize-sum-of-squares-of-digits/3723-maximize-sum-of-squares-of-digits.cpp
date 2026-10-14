class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum < 1 || sum > 9 * num) {
            return "";
        }

        string result = "";
        result.reserve(num);

        int count9 = sum / 9;
        int rem = sum % 9;

        result.append(count9, '9');

        if (rem > 0) {
            result.push_back('0' + rem);
        }
        result.append(num - (int)result.size(), '0');

        return result;
    }
};