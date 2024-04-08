class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       int sqCount=0, cirCount=0, len=sandwiches.size();
       for(int i=0; i<len;i++){
        if(students[i]==0){
            cirCount++;
        }
        else{
            sqCount++;
        }
       }
       for(auto i: sandwiches){
        if(i==0){
            if(cirCount>0){
                cirCount--;
            }
            else{
                break;
            }
        }
        else if(i==1){
            if(sqCount>0){
                sqCount--;
            }
            else{
                break;
            }
        }
       }
       return sqCount+cirCount;
        
    }
};