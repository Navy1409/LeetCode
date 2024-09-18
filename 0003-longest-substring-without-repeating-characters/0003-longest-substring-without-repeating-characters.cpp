class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxC=0, len= s.size(), start=0, end=0;
        vector<char> vchar;
        for(int i=0; i<len; i++){
            if(find(vchar.begin()+start, vchar.end(), s[i])==vchar.end()){
                end++;
                vchar.push_back(s[i]);
            }
            else{
                start=find(vchar.begin()+start, vchar.end(), s[i])-vchar.begin()+1;
                end++;
                 vchar.push_back(s[i]);
            }
            maxC=max(maxC,(end-start));
        }
        return maxC;
    }
};

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         if (n <= 1) return n;

//         int ans = 0;
//         unordered_map<char, int> seen;
//         int left = 0, right = 0;

//         while (right < n) {
//             if (seen.find(s[right]) != seen.end() && seen[s[right]] >= left) {
//                 ans = max(ans, right - left);
//                 left = seen[s[right]] + 1;
//             }
//             seen[s[right]] = right;
//             right++;
//         }

//         return max(ans, right - left);
//     }
// };