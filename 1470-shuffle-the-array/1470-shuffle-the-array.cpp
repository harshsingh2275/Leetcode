class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        int j= n; 
        // while(i<n && j<2*n){
        //     arr.push_back(nums[i]);
        //     arr.push_back(nums[j]);
        //     i++;
        //     j++;
        // }
        // return arr;
        for(int i=0; i<n; i++){
            arr.push_back(nums[i]);
            arr.push_back(nums[j]);
            j++;
        }
        return arr;
    }
};