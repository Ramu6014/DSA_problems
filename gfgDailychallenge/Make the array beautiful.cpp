//problem link: https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1
//timeComplexity: o(n)
//spaceCompelxity: O(n)
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        int n=arr.size();
        stack<int>st;

       for(int i=0;i<n;i++){
           if(st.empty()){
               st.push(arr[i]);
           }
           else if((st.top()>=0 && arr[i]<0)||(st.top()<0 && arr[i]>=0)){
               st.pop();
           }
           else{
               st.push(arr[i]);
           }
       }
       vector<int>ans;
       while(!st.empty()){
           ans.push_back(st.top());
           st.pop();
       }
       if(ans.size()==0){
           return ans;
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};