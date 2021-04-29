lass Solution {
public:
        
        int findAns(TreeNode* root , int& tilt){
                if(!root) return 0;
                
                int left =  findAns(root->left, tilt);
                int right =  findAns(root->right, tilt);
                
                tilt+= abs(left-right);
                
                return left + right + root->val;
                
        }
        
        
    int findTilt(TreeNode* root) {
    int tilt = 0;        
    findAns(root,tilt);
            return tilt;
    }
};