/* Given an array nums of distinct integers, return all the possible permutations. 
You can return the answer in any order

Example 1:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:
Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:
Input: nums = [1]
Output: [[1]]

Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique

*/

class Solution {
public:
    int n;
    vector<vector<int>> result;
    unordered_set<int> st;

    void solve(vector<int> &temp , vector<int> &nums){
        if(temp.size() == n){
            result.push_back(temp);
            return;
        }
        for(int i = 0 ; i < n ; i++){
            if(st.find(nums[i]) == st.end()){
                temp.push_back(nums[i]);
                st.insert(nums[i]);

                solve(temp , nums);

                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        n = nums.size();
        vector<int> temp;
        solve(temp , nums);
        return result;
    }
};
