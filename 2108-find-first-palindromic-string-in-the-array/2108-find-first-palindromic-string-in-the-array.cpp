int palindrome(string a) {
    int n = a.length();
    int flag = 1;
    for(int i = 0; i < n / 2; i++){
        if(a[i] != a[n - i - 1]){
            flag = 0;
        }
    }
    return flag;
}

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "", word;
        int a;
        for(int i = 0; i < words.size(); i++){
            word = words[i];
            a = palindrome(word);
            if(a == 1){
                return word;
            }
        }
        return ans;
    }
};