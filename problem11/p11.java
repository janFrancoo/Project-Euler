import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class p11 {
	
	public static int[][] read_grid(int width, int height, String path){
		
		int i = 0, j = 0;
		int[][] grid = new int[width][height];
		
		try(Scanner scanner = new Scanner(new FileReader(path))){
			while(scanner.hasNextInt()) {
				grid[i][j] = scanner.nextInt();
				j++;
				if(j == width) {
					j = 0;
					i++;
				}
			}
		} catch (FileNotFoundException e) {
			System.out.println("Error while opening the file");
		}
		
		return grid;
		
	}
	
	public static int find_max(int[][] grid, int height, int width, int length) {
		
		int i, j, k, mult = 1, max = 0;

		for(i=0; i<height; i++){
	        for(j=0; j<width; j++){
	            for(k=0; k<length; k++){
	                if(j > width - length)
	                    break;
	                mult *= grid[i][j+k];
	            }
	            if(mult > max)
	                max = mult;
	            mult = 1;
	            for(k=0; k<length; k++){
	                if(i > height - length)
	                    break;
	                mult *= grid[i+k][j];
	            }
	            if(mult > max)
	                max = mult;
	            mult = 1;
	            for(k=0; k<length; k++){
	                if(j > width - length || i > height - length)
	                    break;
	                mult *= grid[i+k][j+k];
	            }
	            if(mult > max)
	                max = mult;
	            mult = 1;
	            for(k=0; k<length; k++){
	                if(j < length - 1 || i > height - length)
	                    break;
	                mult *= grid[i+k][j-k];
	            }
	            if(mult > max)
	                max = mult;
	            mult = 1;
	        }
	    }

	    return max;
		
	}
	
	public static void main(String args[]) {
		
		int num;
		String path = "C:\\Users\\ErenS\\Desktop\\grid.txt";
		int[][] grid = read_grid(20, 20, path);
		
		for(int i=0; i<20; i++) {
			for(int j=0; j<20; j++) {
				num = grid[i][j];
				if(num < 10)
					System.out.print("0" + grid[i][j] + " ");
				else
					System.out.print(grid[i][j] + " ");
			}
			System.out.println("");
		}
		
		System.out.println("\n" + find_max(grid, 20, 20, 4));
		
	}

}
