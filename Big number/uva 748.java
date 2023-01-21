	import java.util.Scanner;
	import java.math.*;

	class Main{

		public static void main(String[]args){

			Scanner entrada = new Scanner(System.in);

			while(entrada.hasNext()){

				BigDecimal a = entrada.nextBigDecimal();
				int x = entrada.nextInt();
				BigDecimal result;

				result = a.pow(x);

				String str = result.toPlainString();

				if(str.charAt(0)=='0' && str.charAt(1)=='.'){
					str = str.substring(1);
				}

				int index = -1;

				if(str.charAt(str.length()-1)=='0'){

					int i = str.length()-1;

					while(str.charAt(i)=='0'){
						index = i;
						i--;
					}
					str = str.substring(0,index);
					
				}



				System.out.println(str);

			}
		}
	}