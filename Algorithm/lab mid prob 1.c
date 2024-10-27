#include <stdio.h>      // Include standard input-output header for printf
#include <stdlib.h>     // Include standard library header for malloc
#define MAX_TREE_HT 100 // Define a constant for maximum height of the Huffman tree

// Define a structure for a node in the Huffman tree
struct MH_Node {
    char character;           // Character stored in the node
    unsigned int frequency;   // Frequency of the character
    struct MH_Node* l, * r;   // Pointers to left and right children
};

// Define a structure for the min-heap
struct M_Heap {
    unsigned size;            // Current size of the heap
    unsigned space;           // Total space allocated for the heap
    struct MH_Node** array;   // Array of pointers to nodes
};

// Function to create a new node
struct MH_Node* newNode(char character, unsigned int frequency) {
    struct MH_Node* temp = (struct MH_Node*)malloc(sizeof(struct MH_Node)); // Allocate memory for a new node
    temp->l = temp->r = NULL; // Initialize left and right children to NULL
    temp->character = character; // Set the character
    temp->frequency = frequency; // Set the frequency
    return temp; // Return the new node
}

// Function to create a min-heap
struct M_Heap* createM_Heap(unsigned space) {
    struct M_Heap* M_Heap = (struct M_Heap*)malloc(sizeof(struct M_Heap)); // Allocate memory for the heap
    M_Heap->size = 0; // Initialize size to 0
    M_Heap->space = space; // Set the space
    M_Heap->array = (struct MH_Node**)malloc(M_Heap->space * sizeof(struct MH_Node*)); // Allocate memory for the array of nodes
    return M_Heap; // Return the created min-heap
}

// Function to swap two nodes in the heap
void swapMH_Node(struct MH_Node** a, struct MH_Node** b) {
    struct MH_Node* t = *a; // Temporary variable to hold the first node
    *a = *b; // Swap the nodes
    *b = t; // Complete the swap
}

// Function to maintain the min-heap property
void M_Heapify(struct M_Heap* M_Heap, int idx) {
    int smallest = idx; // Initialize smallest as the current index
    int l = 2 * idx + 1; // Left child index
    int r = 2 * idx + 2; // Right child index

    // Check if left child exists and is smaller than the current smallest
    if (l < M_Heap->size && M_Heap->array[l]->frequency < M_Heap->array[smallest]->frequency)
        smallest = l; // Update smallest to left child

    // Check if right child exists and is smaller than the current smallest
    if (r < M_Heap->size && M_Heap->array[r]->frequency < M_Heap->array[smallest]->frequency)
        smallest = r; // Update smallest to right child

    // If smallest is not the current index, swap and heapify again
    if (smallest != idx) {
        swapMH_Node(&M_Heap->array[smallest], &M_Heap->array[idx]); // Swap nodes
        M_Heapify(M_Heap, smallest); // Recursively heapify the affected sub-tree
    }
}

// Function to check if the heap size is one
int isSizeOne(struct M_Heap* M_Heap) {
    return (M_Heap->size == 1); // Return true if size is one
}

// Function to extract the minimum node from the heap
struct MH_Node* extractMin(struct M_Heap* M_Heap) {
    struct MH_Node* temp = M_Heap->array[0]; // Store the minimum node (root)
    M_Heap->array[0] = M_Heap ->array[M_Heap->size - 1]; // Replace root with the last node
    --M_Heap->size; // Decrease the size of the heap
    M_Heapify(M_Heap, 0); // Heapify the root
    return temp; // Return the minimum node
}

// Function to insert a node into the min-heap
void insertM_Heap(struct M_Heap* M_Heap, struct MH_Node* MH_Node) {
    ++M_Heap->size; // Increase the size of the heap
    int i = M_Heap->size - 1; // Start from the current size of the heap

    // Percolate up the new node to maintain the heap property
    while (i && MH_Node->frequency < M_Heap->array[(i - 1) / 2]->frequency) {
        M_Heap->array[i] = M_Heap->array[(i - 1) / 2]; // Move the parent node down
        i = (i - 1) / 2; // Move up the heap
    }
    M_Heap->array[i] = MH_Node; // Insert the new node
}

// Function to build the min-heap
void buildM_Heap(struct M_Heap* M_Heap) {
    int n = M_Heap->size - 1; // Start from the last non-leaf node
    for (int i = (n - 1) / 2; i >= 0; --i) // Iterate through the non-leaf nodes
        M_Heapify(M_Heap, i); // Heapify each non-leaf node
}

// Function to print an array of integers
void printArr(int arr[], int n) {
    for (int i = 0; i < n; ++i) // Iterate through the array
        printf("%d ", arr[i]); // Print each element followed by a space
    printf("\n"); // Print a newline at the end
}

// Function to check if a node is a leaf node
int isLeaf(struct MH_Node* root) {
    return !(root->l) && !(root->r); // Return true if both left and right children are NULL
}

// Function to create and build a min-heap from the given characters and frequencies
struct M_Heap* createAndBuildM_Heap(char character[], int frequency[], int size) {
    struct M_Heap* M_Heap = createM_Heap(size); // Create a min-heap
    for (int i = 0; i < size; ++i) // Iterate through the characters and frequencies
        M_Heap->array[i] = newNode(character[i], frequency[i]); // Create a new node and insert into the heap
    M_Heap->size = size; // Set the size of the heap
    buildM_Heap(M_Heap); // Build the min-heap
    return M_Heap; // Return the created and built min-heap
}

// Function to build the Huffman tree
struct MH_Node* buildHuffmanTree(char character[], int frequency[], int size) {
    struct MH_Node* l, *r, *top; // Temporary variables for left, right, and top nodes
    struct M_Heap* M_Heap = createAndBuildM_Heap(character, frequency, size); // Create and build the min-heap

    // While there are more than one nodes in the heap
    while (!isSizeOne(M_Heap)) {
        l = extractMin(M_Heap); // Extract the minimum node (left child)
        r = extractMin(M_Heap); // Extract the next minimum node (right child)
        top = newNode('$', l->frequency + r->frequency); // Create a new internal node with the sum of frequencies
        top->l = l; // Set the left child
        top->r = r; // Set the right child
        insertM_Heap(M_Heap, top); // Insert the new internal node into the heap
    }
    return extractMin(M_Heap); // Return the root of the Huffman tree
}

// Function to print the Huffman codes
void printCodes(struct MH_Node* root, int arr[], int top) {
    if (root->l) { // If the node has a left child
        arr[top] = 0; // Set the code to 0
        printCodes(root->l, arr, top + 1); // Recursively print the codes for the left subtree
    }
    if (root->r) { // If the node has a right child
        arr[top] = 1; // Set the code to 1
        printCodes(root->r, arr, top + 1); // Recursively print the codes for the right subtree
    }
    if (isLeaf(root)) { // If the node is a leaf node
        printf("%c: ", root->character); // Print the character
        printArr(arr, top); // Print the Huffman code
    }
}

// Function to generate Huffman codes
void HuffmanCodes(char character[], int frequency[], int size) {
    struct MH_Node* root = buildHuffmanTree(character, frequency, size); // Build the Huffman tree
    int arr[MAX_TREE_HT], top = 0; // Initialize an array to store the Huffman codes
    printCodes(root, arr, top); // Print the Huffman codes
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'}; // Characters
    int frequency[] = {5, 9, 12, 13, 16, 45};   // Frequencies
    int size = sizeof(arr) / sizeof(arr[0]);   // Calculate the size of the array
    HuffmanCodes(arr, frequency, size);       // Generate Huffman codes
    return 0; 
}