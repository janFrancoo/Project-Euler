public class p28 {
	
	public static int numberSpiralDiagonals(int n) {
	    int sum = 0, r, sq;
	    for(int i=3; i<=n; i+=2){
	        sq = i * i;
	        sum += sq;
	        r = i-1;
	        for(int j=1; j<=3; j++){
	            sum += sq - (r * j);
	        }
	    }
	    return sum + 1;
	}
	
	public static void main(String[] args) {
		System.out.println(numberSpiralDiagonals(1001));
	}
	
}
