#define MAX 1000
class Solution {
public:
    vector<int> countSort(vector<int>& inputArray)
{
 

    int N = inputArray.size();
 

    // Finding the maximum element of array inputArray[].

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
 

    return outputArray;
    }
    int bagOfTokensScore(vector<int>& to, int p) {
        int s=0, len= to.size();
        int j=len-1;
        vector<int>t=countSort(to);
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