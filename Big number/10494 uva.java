import java.util.Scanner;
import java.math.*;


class Main{

	public static void main (String [] args){


		Scanner entrada = new Scanner(System.in);

		BigInteger a;
		BigInteger b;
		BigInteger result;
		char oper;

		while(entrada.hasNext()){

			a = entrada.nextBigInteger();
			oper = entrada.next().charAt(0);
			b = entrada.nextBigInteger();

			if(oper == '/'){
				result = a.divide(b);
			}

			else {
				result = a.mod(b);
			}

			System.out.println(result);
		}
	}
}