import java.lang.Math;

public class Lab1
{
    public static void main(String arg[]){
        convertDecimal(345, 2);
    }

    //esempio di ricorsione
    static int f(int n){
        if(n==0) return 5;
        else if(n>=1) return f(n-1)+3;
        return -1;
    }

    //fibonacci
    static int fib(int n){
        if(n==0) return 0;
        else if(n==1 || n==2) return 1;
        else if(n>=3) return fib(n-1)+ fib(n-2);
        return -1;
    }

    //ackermann function
    static long ack(long x, long y){
        if(x==0) return y+1;
        else if(y==0) return ack(x-1, 1);
        else return ack(x-1, ack(x,y-1));
    }

    //Great Common Divisor (method 1)
    static long gcdSlow(long A, long B){
        if(B==0) return A;
        else if(B>0 && A>=B) return gcdSlow(A-B,B);
        else return gcdSlow(B,A);
    }

    //Great Common Divisor (method 2)
    long gcdFast(long A, long B){
        if(B==0) return A;
        else return gcdFast(B, A%B);
    }

    //Integer power of a number (method 1)
    static long powerSlow(long a, long b){
        if(b==0) return 1;
        else return a*powerSlow(a, b-1);
    }

    //Integer power of a number (method 2)
    static long powerFast(long a, long b){
        if(b==0) return 1;
        else if(b>0 && b%2==0) return powerFast(a*a,b/2);
        else if(b>0) return powerFast(a*a, b/2) * a;
        return -1;
    }

    //Counting the number of digits of an int
    static int count(int value){
        if(value == 0) return 0;
        else return 1+count(value/10);
    }

    //Printing natural numbers a digit at time
    static void printDecimal(int n){
        if(n==0) return;
        else printDecimal(n/10);
    
        System.out.print(n-(n/10*10));  
    }

    //Printing k-th digit of natural numbers
    static void printDigit(int n, int k){
        if(n < Math.pow(10,k+1)) System.out.println(n-(n/10*10));
        else printDigit(n/10,k);
    
        return;
    }

    //Conversion from base 10 to any base b (print)
    static void convertDecimal(int N, int b){
        if(N==0) return;
        else convertDecimal(N/b, b);

        if(N%b < 10) System.out.print(N%b);
        else System.out.print((char)(N%b + 55)); 
    }

    //Conversion from base 10 to any base b (to String)
    static String convertDecimalString(int N, int b){
        char c;
        if(N==0) return "";
        else{
            if (N%b < 10) c = (char)(N%b + 48);
            else c = (char)(N%b + 55);
        }

        return (convertDecimalString(N/b, b) + c);
    }

    //Reverse of the content of an integer variable
    static int reverseInt(int n){
        if(n==0)
            return n;
    
        return (int)((n-(n/10 * 10)) * Math.pow(10,(int)Math.log10(n)) + reverseInt(n/10));
    }
}