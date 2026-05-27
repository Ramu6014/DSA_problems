//problem link: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
//timeComplexity: O(n1+n2)
//spaceComplexity: O(n1+n2)

class Solution {
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
        // code here
        int n1=a.length;
        int n2=b.length;
        int l=0,r=0;
        ArrayList<Integer>res=new ArrayList<>();
        while(l<n1 && r<n2){
            if(a[l]<=b[r]){
               if(res.size()==0 || res.get(res.size()-1)!=a[l]){
                   res.add(a[l]);
                }
                 l++;
            }
            else{
                if(res.size()==0||res.get(res.size()-1)!=b[r]){
                    res.add(b[r]);
                }
                r++;
            }
        }
        while(l<n1){
            if(res.get(res.size()-1)!=a[l]){
                res.add(a[l]);
            }
            l++;
        }
        while(r<n2){
            if(res.get(res.size()-1)!=b[r]){
                res.add(b[r]);
            }
            r++;
        }
        return res;
    }
}
