public class p10 {
	
	public static int is_prime(int num) {
		int i;
		for(i=2; i*i<=num; i++) {
			if (num % i == 0)
				return 1;
		}
		return 0;
	}
	
	public static long summation_of_primes(int n) {
		int i;
		long count = 0;
		for(i=3; i<n; i++) {
			if(is_prime(i) != 1)
				count += i;
		}
		return count;
	}

	public static void main(String args[]) {
		
		System.out.println(summation_of_primes(2000000));
		
	}
	
}
