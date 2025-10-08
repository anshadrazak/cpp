class Solution
{
public:
    bool isPalindrome(int x)
    {
        // Handle negative numbers and numbers ending with 0 (except 0 itself)
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }

        int reversed = 0;

        // Reverse only half of the number to avoid overflow
        while (x > reversed)
        {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        // For even number of digits: x == reversed
        // For odd number of digits: x == reversed / 10
        return x == reversed || x == reversed / 10;
    }
};