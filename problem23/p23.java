import java.util.ArrayList;
import java.util.List;

public class p23 {
	
	public static int sum_of_proper_divisors(int number){
	    int i, sum = 1;
	    for(i=2; i<=Math.sqrt(number); i++){
	        if(number % i == 0){
	            if((number / i) == i){
	                sum += i;
	            }
	            else {
	                sum += i + (number / i);
	            }
	        }
	    }
	    return sum;
	}
	
	public static int non_abundant_sums(){
	    int i, j, sum = 0, limit = 28123;
	    List<Integer> abundants = new ArrayList<>();
	    int[] canBeWrittenAsAbundant = new int[limit+1];

	    for(i=1; i<=limit; i++){
	        if(i < sum_of_proper_divisors(i)){
	            abundants.add(i);
	        }
	    }

	    for(i=0; i<abundants.size(); i++){
	        for(j=i; j<abundants.size(); j++){
	            if((abundants.get(i) + abundants.get(j)) <= limit){
	            	canBeWrittenAsAbundant[abundants.get(i) + abundants.get(j)] = 1;
	            } else {
	                break;
	            }
	        }
	    }

	    for(i=0; i<limit; i++){
	        if(canBeWrittenAsAbundant[i] == 0){
	            sum += i;
	        }
	    }

	    return sum;
	}

	public static void main(String[] args) {
		
		System.out.println(non_abundant_sums());
		
	}
	
}
