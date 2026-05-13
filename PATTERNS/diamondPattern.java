import java.util.*;
public class diamondPattern{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter n value:");
        int n=sc.nextInt();
        for(int i=1;i<=2*n-1;i++){
            if(i<=n){
                //spaces
                for(int k=i;k<n;k++){
                    System.out.print(" ");
                }
                //starts
                for(int j=1;j<2*i;j++){
                    System.out.print('*');
                }
            }
            else{
                //spaces
                for(int k=n;k<i;k++){
                    System.out.print(" ");
                }
                //stars
                for(int j=1;j<2*(2*n-i);j++){
                    System.out.print('*');
                }
            }
            System.out.println();
        }
    }
}