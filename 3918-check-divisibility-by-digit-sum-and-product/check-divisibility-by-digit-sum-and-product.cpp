class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n ;
        int sum = 0;
        int product = 1;
        while (n > 0){
            int digit = n % 10; 
            sum = sum + digit;
            product = product *digit;
            n = n /10; 
        }
        int total = product + sum; 
        return num % total  == 0;

    }
};