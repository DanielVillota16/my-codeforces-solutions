import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashSet;

public class kMultipleFreeSet {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String[] nm = br.readLine().split(" ");
		int n = Integer.parseInt(nm[0]); 
		long m = Long.parseLong(nm[1]);
		String[] ar = br.readLine().split(" ");
		HashSet	<Long> hs = new HashSet<>();
		for (int i = 0; i < n; i++) {
			hs.add(Long.parseLong(ar[i]));
		}
		long[] nar = new long[n];
		
		boolean[] vis = new boolean[n];
		for (int i = 0; i < n; i++) {
			nar[i] = Long.parseLong(ar[i])*m;
		}
		Arrays.sort(nar);
		int x = n;
		if(m > 1) {
			for (int i = 0; i < n; i++) {
				if(hs.contains((long)nar[i])) {
					x--;
					hs.remove((long)nar[i]*m);
				}
			}
		}
		System.out.println(x);
	}
}
