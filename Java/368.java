static final int MAX = 100005; 
static ArrayList<Integer> g[] = new ArrayList[MAX];
static boolean[] vis = new boolean[MAX]; 
static LinkedList<Integer> topoSort = new LinkedList<>(); 
static int N, M; 

static void dfs(int u) {
    vis[u] = true;
    for (int v : g[u]) {
        if (!vis[v]) dfs(v);
    }
    topoSort.addFirst(u);
}

static void init() {
    topoSort.clear();
    for(int i = 0; i <= N; i++) {
        g[i] = new ArrayList<>();
        vis[i] = false;
    }
}