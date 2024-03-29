/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
//     void dfs(Node* curr, Node*node, vector<Node*> &visited){
//             visited[node->val] = node;
            
//             for(auto e: curr->neighbors){
//                      if(visited[e->val]==NULL){
//                             Node* newnode = new Node(e->val);
//                             (node->neighbors).push_back(newnode);
//                             dfs(e, newnode, visited);
//                     }
//                     else{
//                             (node->neighbors).push_back(visited[e->val]);
//                     }
//             }
//     }
        
    unordered_map<Node*, Node*> ref;
    Node* cloneGraph(Node* node) {
//         if(node==NULL) return NULL;
//             vector<Node*> visited(1000, NULL);
//             Node*copy = new Node(node->val);
            
//             visited[node->val] = copy;
//             for(auto curr: node->neighbors){
//                     if(visited[curr->val]==NULL){
//                             Node* newnode = new Node(curr->val);
//                             (copy->neighbors).push_back(newnode);
//                             dfs(curr, newnode, visited);
//                     }
//                     else{
//                             (copy->neighbors).push_back(visited[curr->val]);
//                     }
//             }
//             return copy;
            
//             OPTIMISED
            
            if(!node) return NULL;
            
            if(ref.find(node)!= ref.end()){
                    return ref[node];
            }
            
            ref[node]= new Node(node->val);
            for(auto x: node->neighbors){
                    ref[node]->neighbors.push_back(cloneGraph(x));
            }
            return ref[node];
    }
};
