📘 Notes on priority_queue in C++

A priority_queue in C++ is a container adaptor (built on top of std::vector by default) that provides constant-time access to the “top” element according to some ordering.
It is essentially a heap (binary heap under the hood).


1️⃣ Default Behavior
priority_queue<int> pq;


Element Type: int

Container: vector<int> (default)

Comparator: less<int> (default → max-heap)

Behavior: Largest element on top.

✅ Example: push [5, 1, 10] → top = 10





2️⃣ Min-Heap of Primitives
priority_queue<int, vector<int>, greater<int>> minHeap;


Uses greater<int> comparator.

Smallest element stays at top.

✅ Example: push [5, 1, 10] → top = 1





3️⃣ Custom Objects with Comparator (by value)
struct Node {
    int val, freq;
};
struct compare {
    bool operator()(Node a, Node b) {
        return a.freq < b.freq;   // max-heap by frequency
    }
};
priority_queue<Node, vector<Node>, compare> maxHeap;


Stores full Node objects.

Top element chosen based on custom property (freq).





4️⃣ Custom Objects with Comparator (by pointer)
struct Node {
    int val, freq;
};
struct compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq; // min-heap by frequency
    }
};
priority_queue<Node*, vector<Node*>, compare> minHeap;


Stores pointers instead of objects.

Useful when object copies are expensive.






5️⃣ Key Difference: Max-Heap vs Min-Heap
Comparator Code	Heap Type	Meaning
return a < b;	Max-Heap	Larger values → top
return a > b;	Min-Heap	Smaller values → top






6️⃣ Syntax Patterns Summary
Syntax	Type Stored	Comparator	Heap Type
priority_queue<int> pq;	int	less<int>	Max-heap
priority_queue<int, vector<int>, greater<int>> pq;	int	greater<int>	Min-heap
priority_queue<Node, vector<Node>, compare> pq;	Node (object)	compare	Custom (depends on logic)
priority_queue<Node*, vector<Node*>, compare> pq;	Node* (pointer)	compare	Custom (depends on logic)





7️⃣ When to Use Which?

priority_queue<int> → simple largest-element queries.

priority_queue<int, vector<int>, greater<int>> → simple smallest-element queries.

priority_queue<Node, vector<Node>, compare> → when ordering depends on some object property.

priority_queue<Node*, vector<Node*>, compare> → when avoiding object copies (heap works with pointers).

✅ Rule of Thumb:

If you’re only dealing with numbers → use built-in less / greater.

If you’re dealing with objects → write a compare struct.

If objects are heavy (large structs) → use Node* instead of Node.