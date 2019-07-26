public class p7 {
	
	public static boolean is_prime(int number) {
		int i;
	    for(i=3; i*i<=number; i++){
	        if(number % i == 0) return false;
	    }
	    return true;
	}
	
	public static int nth_prime(int nth){
	    int i = 3, count = 1;
	    while(count != nth){
	        if(is_prime(i)) count += 1;
	            if(count == nth) return i;
	        i += 2;
	    }
	    return -1;
	}

	public static void main(String args[]) {
		
		int res = nth_prime(10001);
		
		if(res == -1) {
			System.out.println("Error");
		} else {
			System.out.println(res);
		}
		
	}
	
}
