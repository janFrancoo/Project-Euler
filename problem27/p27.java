public class p27 {
	
	public static boolean isPrime(int num){
	    for(int i=2; i*i<=num; i++){
	        if(num % i == 0){
	            return false;
	        }
	    }
	    return true;
	}
	
	public static int quadraticPrimes(){
	    int a, b, n, maxCount = 0, maxQuadratic = 0;
	    for(a=-999; a<=999; a+=2){
	        for(b=-1000; b<=1000; b++){
	            n = 0;
	            while(isPrime(Math.abs(((n*n) + (a*n) + b)))){
	                n++;
	            }
	            if(n > maxCount){
	                maxCount = n;
	                maxQuadratic = a*b;
	            }
	        }
	    }

	    return maxQuadratic;
	}

	public static void main(String[] args) {
		System.out.println(quadraticPrimes());
	}
	
}
