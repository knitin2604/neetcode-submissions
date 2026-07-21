class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> store;
        for(int i=0;i<nums.size();i++){
            int need = target - nums[i];

            if(store.find(need)!=store.end())
                return {store[need],i};

                store[nums[i]] =i;
        }
        return {};
        
    }
};
