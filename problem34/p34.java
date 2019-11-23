public class p34 {
	
	public static void digitFactorials(){
	    int totalSum = 0;
	    int[] factorials = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

	    for(int i=3; i<2540161; i++){
	    	int sum = 0;
	    	String str = Integer.toString(i);
	        for(int j=0; j<str.length(); j++){
	            sum += factorials[Character.getNumericValue(str.charAt(j))];
	        }
	        if(sum == i){
	            totalSum += i;
	        }
	    }

	    System.out.println(totalSum);
	}

	public static void main(String[] args) {
		digitFactorials();
	}

}
