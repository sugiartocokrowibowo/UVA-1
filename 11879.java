package pkg11879;
import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int c = 17;
        BigInteger modVal;
        modVal = BigInteger.valueOf(c);
        while(sc.hasNext()){
            BigInteger a,m;
            a=sc.nextBigInteger();
            if(a.compareTo(BigInteger.ZERO)==0)
                break;
            //m = a.c
            int mx = (a.mod(modVal)).intValue();            
            if(mx == 0){
                System.out.println("1");
            }
            else
                System.out.println("0");
            
        }
    }
    
}
