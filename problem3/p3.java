public class p3 {
	
	public static int find_largest_prime_factor(Long num) {
		
		int i = 1;
		while(i < num) {
			i += 1;
			if(num % i == 0) {
				num /= i;
			}
		}
		
		return i;
		
	}
	
	public static void main(String args[]) {
		
		Long num = Long.parseUnsignedLong("600851475143");
		System.out.println("Largest prime factor = " + find_largest_prime_factor(num));
		
	}

}
