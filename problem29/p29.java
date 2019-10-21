import java.util.HashSet;
import java.util.Set;

public class p29 {
	
	public static int distinctPowers(int a, int b){
	    Set<Double> arr = new HashSet<>();

	    for(int i=2; i<=a; i++){
	        for(int j=2; j<=b; j++){
	        	arr.add(Math.pow(i, j));
	        }
	    }
	    
	    return arr.size();
	}

	public static void main(String[] args) {
		System.out.println(distinctPowers(100, 100));
	}

}
