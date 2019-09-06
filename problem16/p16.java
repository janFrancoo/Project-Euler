import java.math.BigInteger;

public class p16 {

	public static int power_digit_sum(int num, int pow) {
		
		int sum = 0;
		BigInteger bigInt = new BigInteger(Integer.toString(num));
		
		String str = bigInt.pow(pow).toString();
		
		for(int i=0; i<str.length(); i++) {
			sum += Character.getNumericValue(str.charAt(i));
		}
		
		return sum;
		
		
	}
	
	public static void main(String[] args) {
		
		System.out.println(power_digit_sum(2, 1000));
		
	}
	
}
