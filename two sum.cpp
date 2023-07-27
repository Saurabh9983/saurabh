
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
       unordered_map<int ,int>h;
       for(int i=0;i<n;i++){
           if(h[target-nums[i]]>0){
               return{ h[target-nums[i]]-1,i };
           }
           h[nums[i]]=i+1; 
       }
       return{};
       
    }
};
