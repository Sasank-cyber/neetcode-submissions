class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // vector<int> record;
        
        unordered_set<int> sequence;

        for(int i=0;i<nums.size();i++){
           sequence.insert(nums[i]);
                        

        }
        int longest = 0;
        for(int i=0;i<nums.size();i++){

            if(sequence.count(nums[i]-1) == 0){
                int lenght = 0;
                int j = 1;
                while(sequence.count(nums[i]+lenght)){
                    lenght++;                   
                }
                longest = max(lenght,longest);
                
            }
            

        }
        return longest;
    }
};
