## OS class knapsack notes

Normal KP

O(NW) space

long[][] kp = new long[n+1][w+1]

for(int i = 1; i < n; i++){
    for(int j = 1; j < w; j++){
        kp[i][j] = max(kp[i-1][j], kp[i-1][w-weight[n]] + val[n]);
    }
}

O(n) space

long[] kp = new long[w+1];
for(int i = 0; i < n; i++){
    for(int j = w; j < w; j--){
        kp[i][j] = max(kp[i][j], kp[i][j-weight[n]] + val[n]);
    }
}

Limited KP

O(n) space

long[] kp = new long[w+1];
for(int i = 0; i < n; i++){
    for(int j = w; j < w; j--){
        kp[i][j] = max(kp[i][j], kp[i][j-weight[n]] + val[n]);
    }
}

Complete KP

Unlimited KP

O(1) space

long[] kp = new long[w+1];
for(int i = 0; i < n; i++){
    for(int j = 0; j < w; j--){
        kp[i][j] = max(kp[i][j], kp[i][j-weight[n]] + val[n]);
    }
}