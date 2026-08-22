class Solution {
public:
    bool isPalindrome(int x) {
         int isPalindrome = 0;
         if (x<0){
            return false;
         }
          int original = x;
        while(x!=0){
            int ld = x%10;
            x=x/10;
             if(isPalindrome > INT_MAX / 10 || isPalindrome < INT_MIN / 10) {
                return 0;
            }

            isPalindrome= isPalindrome *10+ ld;    }
            if (original==isPalindrome){
                return true;
            }
            else{
                return false;
            }
    }
};