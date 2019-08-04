public class p12 {

	public static int divisor_count(int number) {
		
		int i, count = 0;
		
		for(i=1; i<=Math.sqrt(number); i++) {
			if(number % i == 0)
				count += 2;
			if(number == i * i)
				count--;	
		}
		
		return count;
		
	}
	
	public static int find_triangle_num(int limit) {
		
		int i = 1, triangle = 0;
		
		while(true) {
			triangle += i;
			if(divisor_count(triangle) > 500)
				break;
			i++;
		}
		
		return triangle;
		
	}
	
	public static void main(String args[]) {
		
		System.out.println(find_triangle_num(500));
		
	}
	
}
