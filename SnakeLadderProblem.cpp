int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
    unordered_map<int,int> ladder, snakes;

    for(auto x:A){
       ladder.insert({x[0],x[1]});
    }
    
    for(auto x:B){
       snakes.insert({x[0],x[1]});
    }

    vector<bool> visited(101, false);
    queue<pair<int,int>> q;

    q.push({1, 0});
    visited[1]= true;

    while(q.size()){
        auto element = q.front();
        q.pop();

        
        if( element.first== 100){
            return element.second;
        }
        for(int i=1;i<=6;i++){
            int pos = element.first+ i;

            if(ladder.find(pos)!=ladder.end()){
                pos = ladder[pos];
            }
            if(snakes.find(pos)!=snakes.end()){
                pos = snakes[pos];
            }

            if(!visited[pos]){
                visited[pos]=true;
                q.push({pos, element.second+1});
            }
        }
        
    }
    return -1;
}


