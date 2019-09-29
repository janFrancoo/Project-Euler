import java.math.BigInteger;

public class p25 {
	
	public static BigInteger getFibonacciNumber(int index) {
		int i;
		BigInteger f1 = new BigInteger("1");
		BigInteger f2 = new BigInteger("2");
		
		for(i=3; i<index+1; i+=2) {
			f1 = f1.add(f2);
			f2 = f2.add(f1);
		}
		if(index % 2 == 0) {
			return f2;
		}
		return f1;
	}
	
	public static int a_thousand_digit_fibonacci_number(int contained_digit) {
		
		int i = 1;
		while(true) {
			if(getFibonacciNumber(i).toString().length() >= contained_digit) {
				return i+1;
			}
			i += 1;
		}
	}

	public static void main(String args[]) {
			
			System.out.println(a_thousand_digit_fibonacci_number(1000));
	
	}
	
}
