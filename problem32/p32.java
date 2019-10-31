public class p32 {
	
	public static String intToStr(int num){
	    return String.valueOf(num);
	}

	public static int length(int num){
	    return intToStr(num).length();
	}
	
	public static boolean isPandigital(int n1, int n2){
	    int lp, product;
	    boolean pass = false;
	    char[] digits = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

	    product = n1 * n2;
	    lp = length(product);

	    if(lp != 4){
	        return false;
	    }

	    String nineDigitNumber = intToStr(n1) + intToStr(n2) + intToStr(product);

	    for(int i=0; i<9; i++){
	        pass = false;
	        for(int j=0; j<9; j++){
	            if(nineDigitNumber.charAt(j) == digits[i])
	                pass = true;
	        }
	        if(!pass)
	            return false;
	    }

	    return true;
	}
	
	public static boolean isInTheArr(int[] arr, int n, int num){
	    for(int i=0; i<n; i++){
	        if(arr[i] == num){
	            return true;
	        }
	    }
	    return false;
	}

	public static int pandigitalProducts(){
	    int sum = 0, top = 0;
	    int[] pandigitalNums = new int[100];

	    for(int i=1; i<=9; i++){
	        for(int j=1000; j<=9999; j++){
	            if(isPandigital(i, j)){
	                if(!isInTheArr(pandigitalNums, top, i*j))
	                    pandigitalNums[top++] = i*j;
	            }
	        }
	    }

	    for(int i=10; i<=99; i++){
	        for(int j=100; j<=999; j++){
	            if(isPandigital(i, j)){
	                if(!isInTheArr(pandigitalNums, top, i*j))
	                    pandigitalNums[top++] = i*j;
	            }
	        }
	    }

	    for(int i=0; i<top; i++)
	        sum+= pandigitalNums[i];

	    return sum;
	}

	public static void main(String[] args) {
		System.out.println(pandigitalProducts());
	}

}
