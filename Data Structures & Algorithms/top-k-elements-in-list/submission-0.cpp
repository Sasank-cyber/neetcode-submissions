class Solution {
public:
   
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
    vector<vector<int>> result(nums.size() + 1);
    
    vector<int> ans;

    unordered_map<int,int> count;
    for(int i=0;i<nums.size();i++){
        count[nums[i]] = 0;
    }
    for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
    }
    for(auto i:count){
        result[i.second].push_back(i.first);
    }
    for(int m = result.size()-1;m>0;m--){
        for(int nu:result[m]){
            ans.push_back(nu);
             if(ans.size() == k){
                return ans;   // return when k elements collected
            }
        }
    }
    return ans;
        


        
        
    }
};
