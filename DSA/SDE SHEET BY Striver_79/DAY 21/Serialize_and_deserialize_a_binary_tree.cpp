/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    string serialize(TreeNode* root) {
        string ans;
        queue<TreeNode*> todo;
        todo.push(root);
        while (!todo.empty()) {
            TreeNode* node = todo.front();
            todo.pop();
            ans += node ? to_string(node -> val) + " " : "# ";
            if (node) {
                todo.push(node -> left);
                todo.push(node -> right);
            }
        }
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        string val;
        in >> val;
        if (val == "#") {
            return NULL;
        }
        TreeNode* root = new TreeNode(stoi(val));
        queue<TreeNode*> todo;
        todo.push(root);
        while (!todo.empty()) {
            TreeNode* node = todo.front();
            todo.pop();
            in >> val;
            if (val != "#") {
                node -> left = new TreeNode(stoi(val));
                todo.push(node -> left);
            }
            in >> val;
            if (val != "#") {
                node -> right = new TreeNode(stoi(val));
                todo.push(node -> right);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));