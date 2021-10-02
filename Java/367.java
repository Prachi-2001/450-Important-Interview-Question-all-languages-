static long INF = (1l<<62);
static final int MAX = 100005; 
static ArrayList<edge> g[] = new ArrayList[MAX]; 
static boolean[] vis = new boolean[MAX]; 
static int pre[] = new int[MAX];
static long dist[] = new long[MAX];
static int N, M; 


static class edge implements Comparable<edge>{
    int v;
    long w;
    
    edge(int _v, long _w){
        v = _v;
        w = _w;
    }
    
    @Override
    public int compareTo(edge o) {
        if(w > o.w)return 1;
        else return -1;
    }
}

static void dijkstra(int u) {
    PriorityQueue<edge> pq = new PriorityQueue<>();
    pq.add(new edge(u, 0));
    dist[u] = 0;
    
    while (!pq.isEmpty()) {
        u = pq.poll().v;
        if (!vis[u]) {
            vis[u] = true;
            for (edge nx : g[u]) {
                int v = nx.v;
                if(!vis[v] && dist[v] > dist[u] + nx.w) {
                    dist[v] = dist[u] + nx.w;
                    pre[v] = u;
                    pq.add(new edge(v, dist[v]));
                }
            }
        }
    }
}

static void init() {
    for(int i = 0; i <= N; i++) {
        g[i] = new ArrayList<>();
        dist[i] = INF;
        vis[i] = false;
    }
}