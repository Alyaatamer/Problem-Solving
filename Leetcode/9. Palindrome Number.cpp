class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        string str = to_string(x);
        int size = str.size();

        for(int i = 0; i<size;i++ ){
            if(str[i]!=str[size-i-1]){
                return false;
            }
        }
        return true;
    }
};