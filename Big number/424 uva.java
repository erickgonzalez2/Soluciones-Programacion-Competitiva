import java.util.Scanner;
import java.math.BigInteger;

 class Main{

 	public static void main(String[]args){
	
	Scanner entrada = new Scanner(System.in);

 	BigInteger suma = new BigInteger("0");
 	BigInteger n;
	BigInteger zero = new BigInteger("0");
	
 	n = entrada.nextBigInteger();
 	boolean response = n.equals(zero);
 	while(!response){

  	suma = suma.add(n);  
  	n = entrada.nextBigInteger();
	response = n.equals(zero);
 	}

 	System.out.println(suma);
 }
}