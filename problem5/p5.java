public class p5 {
	
	static void smallest_multiple(int n){
		
	    int check[] = new int[n+1];
	    int t1, t2;
	    for(int i=1; i<=n; i++){
	        check[i] = 1;
	        if(i == 1 || i == 0){
	            check[i] = 0;
	        }
	    }

	    for(int i=n; i>1; i--){
	        t1 = 0;
	        t2 = 0;
	        if(check[i] != 0){
	            for(int j=i-1; j>1; j--){
	                if(i % j == 0){
	                    t2 = 1;
	                    if(check[j] == 1){
	                        t1 = 1;
	                        check[j] = 0;
	                    }
	                }
	            }
	            if(t1 == 0 && t2 == 1){
	                check[i] = 0;
	            }
	        }
	    }

	    int number = 1;
	    while(true){
	        t1 = 1;
	        for(int i=1; i<=n; i++){
	            if(check[i] == 1){
	                if(number % i != 0){
	                    t1 = 0;
	                }
	            }
	        }
	        if(t1 == 1){
	            System.out.println(number);
	            break;
	        }
	        number++;
	    }
	}

	public static void main(String args[]) {
		
		smallest_multiple(20);
		
	}
	
}
