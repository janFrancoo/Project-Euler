public class p4 {
	
	static boolean is_palindrome(int number){
	    int i = 0, res, digit, copyNum = number, newNum = 0, copyNum2 = number;
	    while(copyNum > 0){
	        copyNum /= 10;
	        i++;
	    }

	    while(number > 0){
	        res = (number / 10) * 10;
	        digit = number - res;
	        number /= 10;
	        newNum += digit * (Math.pow(10, i-1));
	        i--;
	    }

	    if(newNum == copyNum2){
	        return true;
	    }

	    return false;
	}

	static int find_max_palindrome(int digit){
	    int i, j, num, max = 0;
	    for(i = (int)Math.pow(10, digit) - 1; i > Math.pow(10, digit - 1); i--){
	        for(j = (int)Math.pow(10, digit) - 1; j > Math.pow(10, digit - 1); j--){
	            num = i * j;
	            if((num > max) && is_palindrome(num)){
	                max = num;
	            }
	        }
	    }

	    return max;
	}

	public static void main(String args[]) {
		
		System.out.println(find_max_palindrome(3));
		
	}
	
}
