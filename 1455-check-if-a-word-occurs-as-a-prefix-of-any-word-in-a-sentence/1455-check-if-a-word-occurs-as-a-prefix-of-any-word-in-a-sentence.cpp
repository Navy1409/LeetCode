class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int start=0, lenSen=sentence.length(), lensw=searchWord.length();
        int j=0;
        int k=1;
        for(int i=0; i<lenSen; i++){
            if(sentence[i]==searchWord[j]){
                while(sentence[i]==searchWord[j] && i<lenSen){
                    i++;
                    j++;
                }
                if(j==lensw){
                    return k;
                }
            }
            while(sentence[i]!=' '&& i<lenSen){
                    i++;
            }
            j=0;
            k++;
        }
        return -1;
    }
};