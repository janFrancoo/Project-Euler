
	    else
	        return false;
	}
	
	public static int days_of_month(int month, int year){
	    int[] days = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	    if(month != 2)
	        return days[month];
	    else{
	        if(is_leap_year(year))
	            return 29;
	        else{
	            return 28;
	        }
	    }
	}
	
	public static int counting_sundays(int from, int to){
	    int i, j, currentDay = 1, count = 0;

	    for(i=1900; i<=to; i++){
	        for(j=1; j<=12; j++){
	            if(currentDay == 7){
	                if(i >= from)
	                    count += 1;
	            }
	            switch(days_of_month(j, i)){
	                case 29:
	                    currentDay += 1;
	                    break;
	                case 30:
	                    currentDay += 2;
	                    break;
	                case 31:
	                    currentDay += 3;
	                    break;
	            }
	            if(currentDay > 7){
	                currentDay = currentDay % 7;
	            }
	        }
	    }

	    return count;
	}

	public static void main(String args[]) {
		
		System.out.println("Result is " + counting_sundays(1901, 2000));
		
	}
	
}
