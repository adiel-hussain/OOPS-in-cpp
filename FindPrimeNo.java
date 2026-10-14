import java.util.Scanner;
public class FindPrimeNo{
    public static void main(String [] args){
        int number = 7;
        boolean prime = true;
        if(number<=1){
            prime = false;
        }else{
            for(int i = 1 ; i<number; i++){
                if(i%number==0){
                    prime = false;
                    break;
                }else{
                    prime = true;
                }
            }
        }
        if(prime==true){
            System.out.println("prime");
        }else{
            System.out.println("not prime");
        }
    }
}