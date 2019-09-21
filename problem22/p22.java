import java.io.*;
import java.util.*;

public class p22 {
	
	public static int namesScores(String fileName) {
		
		int i, j, sum = 0;
		String[] splitted;
		String name, content;
		List<String> names;
		File file = new File(fileName);
		byte[] data = new byte[(int) file.length()];
		
		try(FileInputStream fis = new FileInputStream(file)) {
			fis.read(data);
		} catch (FileNotFoundException ex) {
			System.out.println(ex);
		} catch (IOException ex) {
			System.out.println(ex);
		}
		
		try {
			content = new String(data, "UTF-8");
			splitted = content.split(",");
			names = Arrays.asList(splitted);
			Collections.sort(names);
			
			for(i=0; i<names.size(); i++) {
				name = names.get(i).replaceAll("\"", "");
				for(j=0; j<name.length(); j++) {
					sum += ((int)name.charAt(j) - 64) * (i + 1);
				}
			}
			
		} catch (UnsupportedEncodingException ex) {
			System.out.println(ex);
		}
		
		return sum;
	}
	
	public static void main(String[] args) {
		
		System.out.println(namesScores("C:\\Users\\ErenS\\Desktop\\names.txt"));
		
	}

}
