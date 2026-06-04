//problem link: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
//timeComplexity: O(n)
//spaceComplexity: o(n)

class Solution {
    public static void reverse(ArrayList<Integer>ans,int st,int  end){
        while(st<end){
            int temp=ans.get(st);
            ans.set(st,ans.get(end));
            ans.set(end,temp);
            st++;
            end--;
        }
        return;
    }
    static ArrayList<Integer> leaders(int arr[]) {
        // code here
        int n=arr.length;
        int maxi=Integer.MIN_VALUE;
        ArrayList<Integer>ans=new ArrayList<>();
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxi){
                maxi=arr[i];
                ans.add(arr[i]);
            }
        }
        reverse(ans,0,ans.size()-1);
        return ans;
    }
}
