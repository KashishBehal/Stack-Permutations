
class Solution{
public:
    int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        stack<int>s;
      int j=0;
        for(int i=0;i<A.size();i++){
            s.push(A[i]);
        
       
        while(!s.empty()  && s.top()==B[j]){
            
     j++;
                s.pop();
                
                
            }
        }
        return s.empty();
    }
};
