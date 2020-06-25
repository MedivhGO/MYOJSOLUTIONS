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

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == nullptr) return "#";
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data == "#") return nullptr;
        stringstream ss(data);
        return makeDeserialize(ss);
    }
    TreeNode* makeDeserialize(stringstream& s) {
        string str;
        getline(s,str,',');
        if (str == "#") {
            return nullptr;
        } else {
            TreeNode* root = new TreeNode(stoi(str));
            root->left = makeDeserialize(s);
            root->right = makeDeserialize(s);
            return root;
        }
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
