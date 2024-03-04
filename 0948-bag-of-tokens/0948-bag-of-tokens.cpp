class Solution {
public:
    void countSort(vector<int>& inputArray)
    {
        int N = inputArray.size();
        int M = 0;
        for (int i = 0; i < N; i++)

        M = max(M, inputArray[i]);
 

    // Initializing countArray[] with 0

    vector<int> countArray(M + 1, 0);
 

    // Mapping each element of inputArray[] as an index

    // of countArray[] array
 

    for (int i = 0; i < N; i++)

        countArray[inputArray[i]]++;
 

    // Calculating prefix sum at every index

    // of array countArray[]

    for (int i = 1; i <= M; i++)

        countArray[i] += countArray[i - 1];
 

    // Creating outputArray[] from countArray[] array

    vector<int> outputArray(N);
 

    for (int i = N - 1; i >= 0; i--)
 

    {

        outputArray[countArray[inputArray[i]] - 1]

            = inputArray[i];
 

        countArray[inputArray[i]]--;

    }
         for (int i =0; i < N; i++)
 

    {
             inputArray[i]=outputArray[i];

    }
    }
    int bagOfTokensScore(vector<int>& t, int p) {
        int s=0, len= t.size();
        int j=len-1;
        countSort(t);
        for(int i=0; i<len; i++){
            if(p>=t[i]){
                s++;
                p-=t[i];
            }
            else if(s>=1&&t[j]>=t[i]&&i<j){
                s--;
                p+=t[j];
                j--;
                i--;
            }
        }
        return s;
    }
};