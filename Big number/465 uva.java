

import java.util.Scanner;
import java.math.BigInteger;

class Main{
	
	public static void main(String[]args){

		Scanner entrada = new Scanner(System.in);
				
		while(entrada.hasNext()){

			String str = entrada.nextLine();
			String sa="";
			String sb="";
			String op="";
			boolean firstN = false;
			boolean mult = false;

			for(int i=0;i<str.length();i++){

				if(Character.isDigit(str.charAt(i)) && !firstN){
					sa+=str.charAt(i);
				}

				else{
					firstN = true;
				}
		
				if(str.charAt(i)=='*')mult=true;

				if(Character.isDigit(str.charAt(i))&& firstN){
					sb+=str.charAt(i);
				}
			}
			BigInteger a = new BigInteger(sa);
			BigInteger b = new BigInteger(sb);
			BigInteger c = new BigInteger("2147483647");
			BigInteger suma;
			if(!mult)suma = a.add(b);
			else suma = a.multiply(b);
			boolean big = false;

			System.out.println(str);

			int compareValue = a.compareTo(c);

			if(compareValue==1){				
				System.out.println("first number too big");
			}

			compareValue = b.compareTo(c);

			if(compareValue==1){				
				System.out.println("second number too big");
			}

			compareValue = suma.compareTo(c);

			if(compareValue==1){				
				System.out.println("result too big");
			}
		}

	}



}