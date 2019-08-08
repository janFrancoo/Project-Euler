public class p15 {
	
	public static double lattice_paths(int width, int height) {
		
		int i, j = width;
		double result = 1;
		for(i=width+height; i>(width+height)-width; i--) {
			result *= i;
			result /= j;
			j--;
		}
		while(j > 1) {
			result /= j;
			j--;
		}
		
		return result;
		
	}

	public static void main(String[] args) {
		
		System.out.println(lattice_paths(20, 20));
		
	}
	
}
