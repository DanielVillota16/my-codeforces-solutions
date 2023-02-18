import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while(t --> 0) {
			String[] nm = br.readLine().split(" ");
			int n = Integer.parseInt(nm[0]), m = Integer.parseInt(nm[1]);
			StringBuilder sb = new StringBuilder();
			while(n --> 0) {
				sb.append("1");
			}
			BigInteger comp = new BigInteger(sb.toString(),2);
			BigInteger[] masks = new BigInteger[m];
			for(int i=0;i < m; i++) {
				 masks[i] = new BigInteger(br.readLine(),2);
			}
			int min = m+1;
			for(int i = 1; i < (1 << m); i++){
	            BigInteger or = new BigInteger("0",2);
	            int cont = 0;
				for(int j = 0;j < m; j++){
	                int check = i & (1 << j);
	                if(check != 0){
	                    or = or.or(masks[j]);
	                    cont++;
	                }
	            }
	            if(or.equals(comp)) {if(cont < min) min = cont;}
	        }
			if(min == m+1) System.out.println(-1); else System.out.println(min);
		}
	}
	
}
