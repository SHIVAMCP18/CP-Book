class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size() , m = needle.size();

        int p1 = 0 , p2 = 0 , i = 0;

        while(p2 < n) {
            if(haystack[p2] == needle[i]) {
                p2++;
                i++;
            }

            else {
                p1++;
                p2 = p1;
                i = 0;
            }
            
            if(i == m) return p1;
        }
        return -1;
    }
};