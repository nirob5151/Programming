#include <iostream> 
#include <queue>    
#include <map>      
#include <vector>   
using namespace std; 

struct Node {                      // Define a structure for the tree nodes
    char character;               // Character stored in the node
    int frequency;               // Frequency of the character
    Node *left, *right;         // Pointers to left and right child nodes

    // Constructor to initialize a node with character and frequency
    Node(char character, int frequency) : character(character), frequency(frequency), left(nullptr), right(nullptr) {}
};

// Comparator for the priority queue to order nodes by frequency
struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->frequency > b->frequency;           // Higher frequency means lower priority
    }
};

// Function to build the Huffman tree from character frequencies
void buildHuffmanTree(map<char, int>& frequency) {
    priority_queue<Node*, vector<Node*>, Compare> pq;        // Create a priority queue

    // Push all characters and their frequencies into the priority queue
    for (auto it : frequency) {
        pq.push(new Node(it.first, it.second));
    }

    // Build the Huffman tree
    while (pq.size() > 1) {
        Node* left = pq.top();          // Get the node with the lowest frequency
        pq.pop();                       // Remove it from the queue
        Node* right = pq.top();         // Get the next node with the lowest frequency
        pq.pop();                       // Remove it from the queue

        // Create a new parent node with combined frequency
        Node* parent = new Node('$', left->frequency + right->frequency);
        parent->left = left;            // Assign left child
        parent->right = right;          // Assign right child
        pq.push(parent);                // Push the parent node back into the queue
    }
}

// Function to generate Huffman codes by traversing the tree
void encode(Node* root, string code, map<char, string>& huffmanCode) {
    if (!root) {                       // Base case: if the node is null, return
        return;
    }
    if (root->character != '$') {      // If it's a leaf node (not a parent node)
        huffmanCode[root->character] = code; // Assign the code to the character
    }
    // Traverse left and right, appending '0' for left and '1' for right
    encode(root->left, code + "0", huffmanCode);
    encode(root->right, code + "1", huffmanCode);
}

int main() {
    map<char, int> frequency;                  // Map to store character frequencies
    // Sample frequencies for characters
    frequency['a'] = 5;
    frequency['b'] = 9;
    frequency['c'] = 12;
    frequency['d'] = 13;
    frequency['e'] = 16;
    frequency['f'] = 45;

    // Build the Huffman tree with the given frequencies
    buildHuffmanTree(frequency);
    
    // Create a priority queue again to build the Huffman tree
    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (auto it : frequency) {
        pq.push(new Node(it.first, it.second)); // Push characters into the queue
    }
    
    Node* root; // Pointer to the root of the Huffman tree
    // Build the Huffman tree again (this part is redundant)
    while (pq.size() > 1) {
        Node* left = pq.top(); // Get the node with the lowest frequency
        pq.pop(); // Remove it from the queue
        Node* right = pq.top(); // Get the next node with the lowest frequency
        pq.pop(); // Remove it from the queue

        // Create a new parent node with combined frequency
        Node* parent = new Node('$', left->frequency + right->frequency);
        parent->left = left; // Assign left child
        parent->right = right; // Assign right child
        pq.push(parent); // Push the parent node back into the queue
    }
    root = pq.top(); // The remaining node is the root of the Huffman tree
    map<char, string> huffmanCode; // Map to store the generated Huffman codes
    encode(root, "", huffmanCode); // Generate the Huffman codes

    // Output the character and its corresponding Huffman code
    cout << "Character | Huffman Code" << endl;
    cout << "------------------------" << endl;
    for (auto it : huffmanCode) {
        cout << it.first << " | " << it.second << endl;
    }

    int total = 0; // Calculate the total length of the Huffman encoded message
    for (auto it : frequency) {
        total += it.second * huffmanCode[it.first].length(); // Add the product of frequency and code length
    }
    cout << "Average code length: " << (double)total / frequency.size() << endl;
    cout << "Length of Huffman encoded message: " << total << endl;

    return 0;
}
