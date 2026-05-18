//problem link: https://www.geeksforgeeks.org/problems/count-odd-even/1?page=1&category=Arrays&difficulty=Basic&sortBy=submissions
//timeComplexity: o(n)
//spaceCompelxity: O(1)

class Solution {
    public int[] countOddEven(int[] arr) {
        // Code here
        int odd=0,even=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        int ans[]={odd,even};
        return ans;
    }
}