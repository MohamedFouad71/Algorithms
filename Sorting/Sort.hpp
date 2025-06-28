
class Sort
{
    //#################### Helper Methods ######################
    static void swap(int &x, int &y){

        // -------------Could Cause Overflow------------

        int temp = x; 
        x = y;
        y = temp;

    }

    // Hoare's Partition Scheme 
    static int Partition(int arr[], int back, int front){

        int pivot = arr[(front + back)/2]; //middle element pivot => prevent the o(n^2) WCS
        back--; front++; //this + do while => prevent infinite loops

        while (true){


            // Two Pointers compares the pointed values with pivot
            do {back++;} while(arr[back] < pivot); 
            do {front--;} while (arr[front] > pivot);


            if (front <= back)
                return front;
            
            swap(arr[front], arr[back]); // swaping the values ensuring the front is the larger

        }


    }

    // ######################## Public Methods to Use #################################
public:

    static void SelectionSort(int arr[], int size){

        for (int i = 0; i < size - 1; i++){

            int minimumIndex = i;

            for (int j = i+1; j <size; j++)
                if (arr[j] < arr[minimumIndex])
                    minimumIndex = j;
            
            swap(arr[minimumIndex], arr[i]);
        }
    }



    static void QuickSort(int arr[], int low, int high){

        if (high <= low) return; // base case

        int pivotIndex = Partition(arr, low, high);
        QuickSort(arr, low, pivotIndex); // including the pivot is a must
        QuickSort(arr, pivotIndex+1, high);
    }

};

