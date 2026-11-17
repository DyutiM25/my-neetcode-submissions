class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> freqMap;
        for(int num: nums){
            freqMap[num]++;
        }
        for(auto it:freqMap){
            cout<<it.second<<endl;
            if(it.second != 1) return true;
        }

        return false;
    }
};