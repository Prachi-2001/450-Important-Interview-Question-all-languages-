static final int MAX = 100005;
static ArrayList<Integer> g[] =  new ArrayList[MAX]; 
static long dist[] = new long[MAX];
static int N, M; 

void bfs(int u) {
    Queue<Integer> q = new LinkedList<>();
    q.add(u);
    dist[u] = 0;

    while (!q.isEmpty()) {
        u = q.poll();
        for (int v : g[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.add(v);
            }
        }
    }
}

static void init() {
    for(int i = 0; i <= N; i++) {
        g[i] = new ArrayList<>();
        dist[i] = -1;
    }
}