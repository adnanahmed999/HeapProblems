class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i) {
      // Your Code Here
        int l = 2*i+1;
        int r = 2*i+2;
        int largest = i;
        if(l<n && arr[l]>arr[largest])
            largest = l;
        if(r<n && arr[r]>arr[largest])
            largest = r;
        if(largest!=i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n) { 
    // Your Code Here
        int lastNonLeaf = n/2-1;
        for(int i = lastNonLeaf; i>=0; i--) {
            heapify(arr, n, i);
        }
        // cout<<"the heap"<<endl;
        // for(int i=0; i<n; i++) {
        //     cout<<arr[i]<<" ";
        // }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n) {
        //code here
        buildHeap(arr, n);
        for(int i=n-1; i>=1; i--) {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
};
