class Solution {
public:
    int minimumLength(string s) {
        int left=0;
        int right=s.size()-1;

        while(left < right && s[left] == s[right])
        {
            char c=s[left];
            while(left <= right && s[left] == c){
                left++;
            }
            while(right >= left && s[right] == c){
                right--;
            }
        }
                return right - left + 1;
    }

};
