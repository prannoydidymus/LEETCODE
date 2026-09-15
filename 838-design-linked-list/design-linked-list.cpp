class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* dummy;
    int size;

public:
    // Initializes the MyLinkedList object.
    MyLinkedList() {
        dummy = new Node(0);
        size = 0;
    }
    
    // Get the value of the index-th node. If invalid, return -1.
    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        Node* curr = dummy->next;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->val;
    }
    
    // Add a node of value val before the first element.
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    // Append a node of value val as the last element.
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    // Add a node of value val before the index-th node. 
    // If index equals length, append to the end. 
    // If index is greater than length, do not insert.
    void addAtIndex(int index, int val) {
        if (index > size || index < 0) {
            return;
        }
        Node* prev = dummy;
        for (int i = 0; i < index; ++i) {
            prev = prev->next;
        }
        Node* newNode = new Node(val);
        newNode->next = prev->next;
        prev->next = newNode;
        size++;
    }
    
    // Delete the index-th node in the linked list, if valid.
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        Node* prev = dummy;
        for (int i = 0; i < index; ++i) {
            prev = prev->next;
        }
        Node* toDelete = prev->next;
        prev->next = toDelete->next;
        delete toDelete;
        size--;
    }

    // Destructor to free memory
    ~MyLinkedList() {
        Node* curr = dummy;
        while (curr != nullptr) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
    }
};