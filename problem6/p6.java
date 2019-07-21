public class p6 {
	
	static void sum_square_difference(int n){

	    long count = 0;
	    for(int i=1; i<=n; i++){
	        count += i;
	    }
	    count *= count;
	    for(int i=1; i<=n; i++){
	        count -= (i * i);
	    }
	    System.out.println(count);

	}
	
	public static void main(String args[]) {
		
		sum_square_difference(100);
		
	}
	
}
