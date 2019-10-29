public class p31 {
	
	public static int coinSums(int target, int[] coins) {
		int[] possibilities = new int[target+1];
		possibilities[0] = 1;
		
		for(int i=0; i<coins.length; i++) {
			for(int j=coins[i]; j<=target; j++) {
				possibilities[j] += possibilities[j - coins[i]];
			}
		}
		
		return possibilities[target];
	}

	public static void main(String[] args) {
		int[] coins = {1, 2, 5, 10, 20, 50, 100, 200};
		System.out.println(coinSums(200, coins));
	}

}
