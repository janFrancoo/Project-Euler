public class p21 {
	
	public static int sum_of_divisors(int number){
	    int i, sum = 1;
	    for(i=2; i<=Math.sqrt(number); i++){
	        if(number % i == 0){
	            sum += i + (number/i);
	        }
	    }
	    return sum;
	}

	public static int amicable_numbers(int limit){
	    int i, sum = 0;
	    int[] numberList = new int[limit];
	    for(i=1; i<limit; i++){
	        numberList[i] = sum_of_divisors(i);
	    }
	    for(i=1; i<limit; i++){
	        if(numberList[i] > 0 && numberList[i] < limit){
	            if(i == numberList[numberList[i]]){
	                if(i != numberList[i]){
	                    sum += i + numberList[i];
	                    numberList[numberList[i]] = 0;
	                }
	            }
	        }
	    }

	    return sum;
	}

	public static void main(String args[]) {
		System.out.println(amicable_numbers(10000));
	}
	
}
