import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int TC = sc.nextInt();
        while(TC-- > 0) {
            BigInteger N = sc.nextBigInteger();
            BigInteger K = sc.nextBigInteger();

            if (K.compareTo(BigInteger.valueOf(100000)) < 0) {
                int k = K.intValue();
                int n = N.intValue();
                
                if (k == n) System.out.println(0);
                else if (k < n) {
                    if (n % k == 0 && k == n/2) System.out.println(n - 1);
                    else if (n - k > k) System.out.println(2 * k);
                    else System.out.println(2 * (n - k));
                }
                else {
                    int quo = k / n;
                    int extra = k % n;
                    int t = extra;

                    if(k % n == 0) System.out.println(0);
                    else if(n % t == 0 && t == n/2 ) System.out.println(n-1);
                    else if(n - t > t) System.out.println(2 * t);
                    else System.out.println(2* (n - t));
                }
            } else {
                if (K.equals(N)) System.out.println("0");
                else if (K.compareTo(N) < 0) {
                    BigInteger NmodK = N.mod(K); 

                    BigInteger Ndivide2 = N.divide(BigInteger.valueOf(2)); 

                    BigInteger NsubK = N.subtract(K);
                    
                    if (NmodK.equals(BigInteger.valueOf(0)) && K.equals(Ndivide2)) System.out.println(N.add(BigInteger.valueOf(-1)));
                    else if (K.compareTo(NsubK) < 0) System.out.println(N.multiply(BigInteger.valueOf(2)));
                    else System.out.println(NsubK.multiply(BigInteger.valueOf(2)));
                }
                else {
                    BigInteger quo = K.divide(N);
            
                    BigInteger extra = K.mod(N);
                    
                    BigInteger t = extra;

                    BigInteger Nmodt = N.mod(t);

                    BigInteger Nmint = N.subtract(t);

                    if (extra.equals(BigInteger.valueOf(0))) System.out.println(0);
                    else if (Nmodt.equals(BigInteger.valueOf(0)) && t.equals(N.divide(BigInteger.valueOf(2)))) System.out.println(N.subtract(BigInteger.valueOf(1)));
                    else if (t.compareTo(Nmint) < 0) System.out.println(t.multiply(BigInteger.valueOf(2)));
                    else System.out.println(Nmint.multiply(BigInteger.valueOf(2)));

                }
            }

            
        }

        

    }
}
