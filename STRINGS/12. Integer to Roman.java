//problem link: https://leetcode.com/problems/integer-to-roman/
//timeComplexity: o(1)
//spaceComplexity: o(1)

class Pair{
    int first;
    String second;
    Pair(int first,String second){
        this.first=first;
        this.second=second;
    }
}
class Solution {
    public String intToRoman(int num) {
        ArrayList<Pair>arr=new ArrayList<>();
        arr.add(new Pair(1000,"M"));
        arr.add(new Pair(900,"CM"));
        arr.add(new Pair(500,"D"));
        arr.add(new Pair(400,"CD"));
        arr.add(new Pair(100,"C"));
        arr.add(new Pair(90,"XC"));
        arr.add(new Pair(50,"L"));
        arr.add(new Pair(40,"XL"));
        arr.add(new Pair(10,"X"));
        arr.add(new Pair(9,"IX"));
        arr.add(new Pair(5,"V"));
        arr.add(new Pair(4,"IV"));
        arr.add(new Pair(1,"I"));
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<arr.size();i++){
            int val=arr.get(i).first;
            String s=arr.get(i).second;
            while(num>=val){
                sb.append(s);
                num-=val;
            }
        }
        return sb.toString();
    }
}