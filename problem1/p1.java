
public class p1 {

	public static int find_3_5(int max) {
		
		int sum = 0;
		
		for(int i=3; i<max; i++) {
			if(i % 3 == 0 || i % 5 == 0) {
				sum += i;
			}
		}
		
		return sum;
		
	}
	
	public static void main(String args[]) {
		
		System.out.println("Sum = " + find_3_5(1000));
		
	}
	
}
