//problem link: https://www.geeksforgeeks.org/problems/replace-all-0s-with-5/1?page=1&category=Arrays&difficulty=Basic&sortBy=submissions
//timeComplexity: o(log(k))
//spaceComplexity:o(log(k))

/*you are required to complete this method*/
class Solution {
  private:
    long long convertNumber(vector<int>&temp){
        long long sum=0;
        for(int i=0;i<temp.size();i++){
            sum=sum*10+temp[i];
        }
        return sum;
    }
  public:
    int convertFive(int n) {
        // Your code here
        vector<int>temp;
        int x=n;
        if(x==0){
            return 5;
        }
        while(x>0){
            int rem=x%10;
            if(rem==0){
            temp.push_back(5);
            }
            else{
                temp.push_back(rem);
            }
            x/=10;
        }
        reverse(temp.begin(),temp.end());
        return convertNumber(temp);
    }
};