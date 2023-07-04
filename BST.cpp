bool is_bst_rec(
    BinaryTreeNode* root,
    int min_value,
    int max_value) {
  if (root == nullptr) {
    return true;
  }
  if (root->data < min_value || 
      root->data > max_value) {
    return false;
  }
  return 
    is_bst_rec(root->left, min_value, root->data) &&
      is_bst_rec(root->right, root->data, max_value);
}
bool is_bst(BinaryTreeNode* root) {
  return 
    is_bst_rec(
      root,
      numeric_limits<int>::min(), 
      numeric_limits<int>::max());
}
void test_is_bst() {
  BinaryTreeNode* root = create_random_BST(15);
  BinaryTreeNode* root2 = create_BinaryTree(20);
  root2->left = root;
  root2->right = root;
  display_level_order(root);
  display_level_order(root2);
  assert(is_bst(root));
  assert(!is_bst(root2));
}
int main(int argc, char* argv[]) {
  test_is_bst();
}
