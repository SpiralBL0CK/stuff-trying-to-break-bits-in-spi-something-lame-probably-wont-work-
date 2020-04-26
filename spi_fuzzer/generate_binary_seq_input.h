// Function to print the output 
void printTheArray(int arr[], int n) 
{ 
   
    cout << endl; 
} 
  
// Function to generate all binary strings 
void generateAllBinaryStrings(int n, int arr[], int i) 
{ 
    if (i == n) { 
        for (int i = 0; i < n; i++) { 
            cout << "[*]DEBUG::Input->: " << arr[i];
            SPCR = arr[i];
            delay(10); 
        } 
        return; 
    } 
  
    // First assign "0" at ith position 
    // and try for all other permutations 
    // for remaining positions 
    arr[i] = 0; 
    generateAllBinaryStrings(n, arr, i + 1); 
  
    // And then assign "1" at ith position 
    // and try for all other permutations 
    // for remaining positions 
    arr[i] = 1; 
    generateAllBinaryStrings(n, arr, i + 1); 
} 