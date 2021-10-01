// Question- Find a value in a BST
// If Key is not present in the BST, Insert a new Node with a value equal to Key into the BST. 
class TNode {
    int data;
    TNode left, right;

    public TNode(int d) {
        data = d;
        left = null;
        right = null;
    }
}

public class BST {
    static TNode root;

    public void searchAndInsert(int key) {
        TNode newNode = new TNode(key);
        if (root == null) {
            root = newNode;
            return;
        }

        else {
            TNode temp = root;
            TNode prev = null;
            while (temp != null) {
                if (temp.data == key) {
                    return;
                } else if (temp.data < key) {
                    prev = temp;
                    temp = temp.right;
                } else {
                    prev = temp;
                    temp = temp.left;
                }
            }
            if (prev.data < key) {
                prev.right = newNode;
            } else {
                prev.left = newNode;
            }
        }
    }

    public void inorderTraversal(TNode root) {
        if (root == null) {
            return;
        }
        inorderTraversal(root.left);
        System.out.print(root.data + " ");
        inorderTraversal(root.right);
    }

    public static void main(String args[]) {
        BST tree = new BST();
        tree.searchAndInsert(30);
        tree.searchAndInsert(50);
        tree.searchAndInsert(15);
        tree.searchAndInsert(20);
        tree.searchAndInsert(10);
        tree.searchAndInsert(40);
        tree.searchAndInsert(60);
        tree.inorderTraversal(root);
    }
}
