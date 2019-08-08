import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class p13 {
	
	public static void find_sum(int firstNDigit, int nNumbers, int nDigits, String path) {
		
		String num;
		int i = 0, digitSum = 0, carry = 0, digit = 0;
		String[] numbers = new String[nNumbers];
		int[] sum = new int[nDigits * 2];
		
		try(Scanner scanner = new Scanner(new FileReader(path))){
			
			while(scanner.hasNextLine()) {
				
				num = scanner.nextLine();
				numbers[i] = num;
				i++;
				
			}
			
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		for(i = nDigits - 1; i >= 0; i--) {
			for(String number : numbers) { 
				digitSum += Character.getNumericValue(number.charAt(i));
			}
			sum[digit] = (digitSum + carry) % 10;
			carry = (digitSum + carry) / 10;
			digitSum = 0;
			digit++;
		}
		
	    while(carry != 0){
	        sum[digit] = carry % 10;
			carry /= 10;
			digit++;
	    }
	    
	    for(i=digit - 1; i>=digit - firstNDigit; i--){
	        System.out.print(sum[i]);
	    }
		
	}
	
	public static void main(String args[]) {
		
		find_sum(10, 100, 50, "C:\\Users\\ErenS\\Desktop\\numbers.txt");
		
	}

}
