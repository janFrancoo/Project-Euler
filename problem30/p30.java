public class p30 {

	public static int digitFifthPowers(int n, int e){
	    int num, sum = 0, digitSum;

	    for(int i=2; i<n; i++){
	        digitSum = 0;
	        num = i;
	        while(num > 0){
	            digitSum += Math.pow(num % 10, e);
	            num /= 10;
	        }
	        if(digitSum == i){
	            sum += i;
	        }
	    }

	    return sum;
	}
	
	public static void main(String[] args) {
		System.out.println(digitFifthPowers(350000, 5));
	}

}
