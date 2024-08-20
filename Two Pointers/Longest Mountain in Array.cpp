class Solution {
public:
    int longestMountain(vector<int>& arr) {
         int n = arr.size();
        int p1 = 0 , p2 = 0;
        int maxMntn = 0;

        //two pointer
        // window pointer
        while(p1 + 2 < n and p2 < n) {

            bool hillUp = false;
            //hill up 
            while(p2 + 1 < n and arr[p2] < arr[p2 + 1]) {
                hillUp = true;
                p2++;
            }

            bool hillDown = false;
            //hill down
            while(p2 + 1 < n and arr[p2] > arr[p2 + 1]) {
                hillDown = true;
                p2++;
            }

            if(hillUp and hillDown) {
                maxMntn = max(maxMntn , p2 - p1 + 1);
                p1 = p2;
            }
            else {
                p1++;
                p2 = p1;
            }
        }
        return maxMntn;
    }
};