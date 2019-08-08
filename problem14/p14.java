public class p14 {
	
	public static int chain_length(long number, int limit, int[] chain) {
	    int length = 1;
	    long copyNumber = number;
	    while(number != 1){
	        if(number < limit){
	            if(chain[(int) number] != 0){
	            length += chain[(int) number];
	            break;
	            }
	        }
	        if(number % 2 == 0)
	            number /= 2;
	        else
	            number = (number * 3) + 1;
	        length++;
	    }
	    chain[(int) copyNumber] = length;
	    return length;
	}
	
	public static int find_longest_chain(int limit) {
	    int[] chain = new int[limit];
	    int i, max = 0, length, initialNum = 0;
	    for(i=1; i<limit; i++){
	        length = chain_length(i, limit, chain);
	        if(length > max){
	            max = length;
	            initialNum = i;
	        }
	    }

	    return initialNum;
	}

	public static void main(String[] args) {
		
		System.out.println(find_longest_chain(1000000));
		
	}
	
}
