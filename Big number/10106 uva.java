import java.util.Scanner;
import java.math.BigInteger;

 class Main{

 	public static void main(String[]args){
	
	Scanner entrada = new Scanner(System.in);

 	BigInteger A;
	BigInteger B;
	BigInteger mult;
	
 	while(entrada.hasNext()){

	A = entrada.nextBigInteger();	
	B = entrada.nextBigInteger();	
  	mult = A.multiply(B);
	System.out.println(mult);
 	}

 	
 }
}