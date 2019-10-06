public class p26 {
	
	public static int reciprocalCycles(int d){
	    int i, length = 0, remainder, pos, res = 0;

	    for(i=1; i<d; i++){
	    	int[] remainders = new int[i+1];
	        remainder = 1;
	        pos = 0;
	        while(remainders[remainder] == 0 && remainder != 0){
	            remainders[remainder] = pos;
	            remainder *= 10;
	            remainder %= i;
	            pos++;
	        }
	        if(pos - remainders[remainder] > length){
	            length = pos - remainders[remainder];
	            res = i;
	        }
	    }

	    return res;
	}

	public static void main(String[] args) {

		System.out.println(reciprocalCycles(1000));
		
	}

}
