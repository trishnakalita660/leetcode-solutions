class LRUCache {
public:
        list<pair<int,int>> cache_memory;
        unordered_map<int, list<pair<int, int>>:: iterator> map;
        int size;
        LRUCache(int capacity) {
           size = capacity;
         }
    
    int get(int key) {
            if(map.find(key)==map.end()){
                    return -1;
            }
            cache_memory.splice(cache_memory.begin(), cache_memory, map[key]);
            return map[key]->second;
        
    }
    
    void put(int key, int value) {
            if(map.find(key)!=map.end()){
                    cache_memory.splice(cache_memory.begin(), cache_memory, map[key]);
                    map[key]->second = value;
                    return;
            }
            
            if(cache_memory.size()== size){
                    auto last_item = cache_memory.back().first;
                    cache_memory.pop_back();
                    map.erase(last_item);
            }
            cache_memory.push_front({key,value});
            map[key] = cache_memory.begin();
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */