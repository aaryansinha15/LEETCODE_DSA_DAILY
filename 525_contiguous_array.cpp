class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int s = nums.size();
        int sum = 0;
        int myArray_length = 0;
        std:: unordered_map<int,int> mp;

        for(int i =0; i<s; i++){
            sum+= nums[i] == 0 ? -1: 1;
            if(sum == 0){
                myArray_length = i+1;
            }
            else if(mp.find(sum) != mp.end()){
                myArray_length = max(myArray_length, i - mp[sum]);
            }
            else{
                mp[sum]= i;
            }
            
        }
        return myArray_length;
    }
};