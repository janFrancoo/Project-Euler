
public class p2 {

	public static int fibonacci_sum(int max) {
		
		int num1 = 1, num2 = 2, even_sum = 0;
		while(num1 < max && num2 < max) {
			if(num1 % 2 == 0) {
				even_sum += num1;
			}
			if(num2 % 2 == 0) {
				even_sum += num2;
			}
			num1 += num2;
			num2 += num1;
		}
		
		return even_sum;
		
	}
	
	public static void main(String args[]) {
		
		System.out.println("Sum = " + fibonacci_sum(4000000));
		
	}
	
}
