import java.math.BigInteger;

public class p20 {
	
	public static long factorial_digit_sum(int n) {
		int i;
		long sum = 0;
		
		BigInteger bigInteger = BigInteger.ONE;
		
		for(i=2; i<=n; i++) {
			bigInteger = bigInteger.multiply(BigInteger.valueOf(i));
		}
		
		String result = bigInteger.toString();
		
		for(i=0; i<result.length(); i++) {
			sum += Integer.parseInt(result.charAt(i) + "");
		}
		
		return sum;
	}

	public static void main(String[] args) {
		
		System.out.println(factorial_digit_sum(100));
		
	}
	
}
