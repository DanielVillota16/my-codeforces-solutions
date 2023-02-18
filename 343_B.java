import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line = br.readLine();
		Stack<Character> st = new Stack<>();
		st.push(line.charAt(0));
		for(int i = 1; i < line.length(); i++) {
			if(!st.isEmpty()) {
				if(!st.peek().equals(line.charAt(i))) st.push(line.charAt(i));
				else st.pop();
			} else st.push(line.charAt(i));
		}
		String ans = st.isEmpty()? "Yes":"No";
		System.out.println(ans);
	}

}
