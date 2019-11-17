public class p33 {
	
	public static void digitCancellingFractions() {
	    double mult = 1.0;
	    for(int i=10; i<100; i++) {
	    	for(int j=i+1; j<100; j++) {
	    		if(j % 10 != 0) {
	    			if(i % 10 == j / 10) {
	    				if(((double)i / j) == ((double)(i / 10) / (j % 10))) {
		    				mult *= (double)i / j;
		    			}
	    			}	    			
	    		}
	    	}
	    }
	
	    System.out.println(mult);
	}

	public static void main(String[] args) {
		digitCancellingFractions();
	}

}
