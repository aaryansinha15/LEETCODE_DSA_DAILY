class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=nums.size();
        std::vector<int> pre(s,1);
        std::vector<int> suf(s,1);

        for(int i=1; i<s; ++i){
            pre[i]=pre[i-1] * nums[i-1];
        }

        for(int i = s-2; i>= 0; --i){
            suf[i] = suf[i+1] * nums[i+1];

        }

        std::vector<int> answer(s);
        for(int i = 0; i<s; ++i){
            answer[i] = pre[i] * suf[i];
        }

    return answer; 

    }
};