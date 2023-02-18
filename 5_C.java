import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

	public static void main(String[] args) throws IOException {
	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line = br.readLine();
		Stack<Integer> s = new Stack<>();
		s.push(-1);
		int max = 0;
		int total = 0;
		for (int i = 0; i < line.length(); i++) {
			if(line.charAt(i)== '(') {
				s.push(i);
			} else {
				s.pop();
				if(!s.isEmpty()) {
					int longActual = i - s.peek();
					if(longActual > max) {
						max = longActual;
						total=1;
					} else if(longActual == max) {
						total++;
					}
				} else {
					s.push(i);
				}
			}
		}
		if(total == 0) System.out.println("0 1");
		else System.out.println((max)+" "+ total);
		
		br.close();
	}

}
