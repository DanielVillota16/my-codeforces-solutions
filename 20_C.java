import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.PriorityQueue;

public class Dijkstra {

	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		HashMap<Integer, HashMap<Integer, Integer>> ht  = new HashMap<>();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line = br.readLine();
		int n = Integer.parseInt(line.split(" ")[0]), m = Integer.parseInt(line.split(" ")[1]);
		for (int i = 1; i <= n; i++) {
			ht.put(i, new HashMap<>());
		}
		for (int i = 0; i < m; i++) {
			String[] edg = br.readLine().split(" ");
			int a = Integer.parseInt(edg[0]), b = Integer.parseInt(edg[1]), w = Integer.parseInt(edg[2]);
			if(a != b) {
				if(ht.get(a).get(b) != null && ht.get(a).get(b) > w && ht.get(b).get(a) > w) {
					ht.get(a).put(b, w);
					ht.get(b).put(a, w);
				} else if(ht.get(a).get(b) == null) {
					ht.get(a).put(b, w);
					ht.get(b).put(a, w);
				}
			}
		}
		int[] dist = new int[n+1];
		int[] parents = new int[n+1];
		boolean[] seen = new boolean[n+1];
		for (int i = 1; i <= n; i++) {
			dist[i] = Integer.MAX_VALUE;
			parents[i] = -1;
			//seen[i] = false;
		}
		PriorityQueue<Pair> pq = new PriorityQueue<>();
		Pair p = new Pair(1,0);
		pq.offer(p);
		while(!pq.isEmpty()) {
			Pair u = pq.poll();
			if(u.a == n) break;
			seen[u.a] = true;
			HashMap<Integer, Integer> neigs = ht.get(u.a);
			for (Integer v : neigs.keySet()) {
				if(!seen[v]) {
					if(dist[v] > dist[u.a] + ht.get(u.a).get(v)) {
						dist[v] = dist[u.a] + ht.get(u.a).get(v);
						parents[v] = u.a;
						pq.offer(new Pair(v, dist[v]));
					}
				}
			}
			if(u.a == n) break;
		}
		ArrayList<Integer> verts = new ArrayList<>();
		int pa = parents[n];
		verts.add(n);
		while(pa != -1 && pa != 1) {
			verts.add(pa);
			pa = parents[pa];
		}
		if(pa != -1) {
			verts.add(1);
			StringBuilder sb = new StringBuilder();
			for (int i = verts.size()-1; i >= 0; i--) {
				sb.append(verts.get(i) + " ");
			}
			System.out.println(sb.toString().trim());
		} else {
			System.out.println(-1);
		}
	}
	
	private static class Pair implements Comparable<Pair> {
		public int a;
		public int d;
		
		public Pair(int a, int d) {
			this.a = a;
			this.d = d;
		}
		@Override
		public int compareTo(Pair o) {
			// TODO Auto-generated method stub
			return Integer.compare(d, o.d);
		}
	}
	
}
