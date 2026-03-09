Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

  #include <stdio.h>

int main() {
    int n, k, i;
    
    // Read size
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read key
    scanf("%d", &k);

    int comparisons = 0;
    int found = -1;

    // Linear Search
    for(i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            found = i;
            break;
        }
    }

    // Output result
    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", comparisons);

    return 0;
}
