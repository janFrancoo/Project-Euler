public class p9 {
	
	public static int pythagorean_triplet(int n) {
		
		int a, b, c;
		for(a=1; a<n/3; a++) {
			for(b=a+1; b<n/2; b++) {
				c = n - (a + b);
				if((a + b + c) == 1000) {
					if(a*a + b*b == c*c) {
						System.out.println(a + " + " + b + " = " + c + " and " + a + "^2 + " + b + "^2 = " + c + "^2");
						return a*b*c;
					}
				}
			}
		}
		
		return -1;
		
	}

	public static void main(String args[]) {
		
		int res = pythagorean_triplet(1000);
		
		if(res != -1) {
			System.out.println(res);
		} else {
			System.out.println("Could not found");
		}
		
	}

}
