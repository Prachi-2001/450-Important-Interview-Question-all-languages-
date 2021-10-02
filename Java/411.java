static int MAX_WEIGHT = 40;
static int MAX_N = 1000; 
static int N;
static int prices[] = new  int[MAX_N];//prices 
static int weights[] = new int[MAX_N];//weights 
static int memo[][]= new int[MAX_N][MAX_WEIGHT];//table dp


static int knapsack (int id, int w) {
  if (id == N || w == 0) return 0;
  if (memo[id][w] != -1) return memo[id][w];
  if (weights[id] > w) memo[id][w] = knapsack(id + 1, w);
  else memo[id][w] = Math.max(knapsack(id + 1, w), prices[id] + knapsack(id + 1, w - weights[id]));
	return memo[id][w];
}