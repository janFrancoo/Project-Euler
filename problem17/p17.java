public class p17 {
	
	public static int find_letter_count(int number){
	    int count = 0;
	    int basicNums[] = {4, 3, 3, 5, 4, 4, 3, 5, 5, 4};

	    if(number >= 1000){
	        count += basicNums[(number/1000)] + 8;
	        if((number % 1000) != 0){
	            count += find_letter_count(number % 1000);
	        }
	    }
	    else if(number >= 100 && number <= 999){
	        count += basicNums[(number/100)] + 7;

	        if((number % 100) != 0){
	            count += 3;
	            count += find_letter_count(number % 100);
	        }
	    }
	    else if(number >= 10 && number <= 99){
	        switch(number){
	            case 10:
	                return 3;
	            case 11:
	            case 12:
	                return 6;
	            case 15:
	            case 16:
	                return 7;
	            case 13:
	            case 14:
	            case 18:
	            case 19:
	                return 8;
	            case 17:
	                return 9;
	            default:
	                break;
	        }
	        switch(number/10){
	            case 2:
	            case 3:
	            case 8:
	            case 9:
	                count += 6;
	                break;
	            case 4:
	            case 5:
	            case 6:
	                count += 5;
	                break;
	            case 7:
	                count += 7;
	        }
	        if((number % 10) != 0){
	            count += find_letter_count(number % 10);
	        }
	    }
	    else{
	        return basicNums[number];
	    }

	    return count;
	}
	
	public static int number_letter_counts(int from, int to){
	    int i, total = 0;
	    
	    for(i=from; i<=to; i++){
	        total += find_letter_count(i);
	    }
	    
	    return total;
	}

	public static void main(String[] args) {
		
		System.out.println(number_letter_counts(1, 1000));
		
	}
	
}
