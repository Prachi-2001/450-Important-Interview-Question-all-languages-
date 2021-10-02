static final int MAX = 100005; 
static ArrayList<Integer> g[] = new ArrayList[MAX]; 
static boolean[] vis = new boolean[MAX]; 
static int N, M; 

static void dfs(int u) {
    vis[u] = true;
    for (int v : g[u]) {
        if (!vis[v]) dfs(v);
    }
}

static void init() {
    for(int i = 0; i <= N; i++) {
        g[i] = new ArrayList<>();
        vis[i] = false;
    }
}
   