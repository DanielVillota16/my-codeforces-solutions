import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int len = Integer.parseInt(br.readLine());
		String[] line = br.readLine().split("");
		String[] l2 = new String[len];
		int m = 0;
		int n = line.length-1;
		int counter = 0;
		for (int i = len - 1; i >= 0; i--) {
			if(counter%2==0) {
				l2[n] = line[i];
				n--;
			} else {
				l2[m] = line[i];
				m++;
			}
			counter++;
		}
		String r = "";
		for(String s : l2) {
			r+= s;
		}
		System.out.println(r);
		

	}

}