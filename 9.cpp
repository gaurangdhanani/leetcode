class Solution {
public:

    int inverse(int x){
        long int inv = 0;
        while(x != 0) {
            int number;
            number = x % 10;
            x = x / 10;
            inv = number + inv * 10;
        }
        return inv;
    }

    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int y = inverse(x);
        if(y == x){
            return true;
        }
        else{
            return false;
        }
    }
};