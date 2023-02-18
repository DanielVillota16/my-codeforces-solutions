import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		double l,w,h,x,y,a;
		String line = br.readLine();
		l =Integer.parseInt(line.split(" ")[0]);
		w =Integer.parseInt(line.split(" ")[1]);
		h =Integer.parseInt(line.split(" ")[2]);
		line = br.readLine();
		x =Integer.parseInt(line.split(" ")[0]);
		y =Integer.parseInt(line.split(" ")[1]);
		a =Integer.parseInt(line.split(" ")[2]);
		a = Math.toRadians(a);
		double nx,ny;
		nx = h*Math.cos(a);
		ny = h*Math.sin(a);
		//System.out.println((nx+x) + " " + (ny+y));
		if(nx + x < w+0.01*h && ny + y < l+0.01*h && nx + x > -0.01*h && ny + y > -0.01*h) System.out.println("YES"); else System.out.println("NO");
	}

}
