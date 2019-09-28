import java.util.ArrayList;

public class p24 {
	
	public static void printArr(int[] arr) {
		int i;
		for(i=0; i<arr.length; i++) {
			System.out.print(arr[i]);
		}
	}
	
	public static int factorial(int num) {
		int i, res = 1;
		for(i=num; i>0; i--) {
			res *= i;
		}
		return res;
	}
	
	public static void lexicographicPermutations(int range, int nthNum) {
		int i, remaining = nthNum - 1, size = range + 1;
		ArrayList<Integer> numbers = new ArrayList<>();
		int[] result = new int[size];
		for(i=0; i<=range; i++) {
			numbers.add(i);
		}
		for(i=0; i<=range; i++) {
			result[i] = numbers.get(remaining / factorial(range - i));
			remaining = remaining % factorial(range-i);
			numbers.remove(numbers.indexOf(result[i]));
		}
		printArr(result);
	}
	
	public static void main(String[] args) {
		
		lexicographicPermutations(9, 1000000);
		
	}

}
