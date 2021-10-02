    
static final int INF = (1<<30);
static final int MAX = 505; 
static int g[][]= new int[MAX][MAX]; 
static int N, M; 

static void floydWarshall() {
    for (int k = 0; k < N; k++)
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                g[i][j] = Math.min(g[i][j], g[i][k] + g[k][j]);
}

static void init() {
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= N; j++) {
            g[i][j] = INF;
        }
    }
}