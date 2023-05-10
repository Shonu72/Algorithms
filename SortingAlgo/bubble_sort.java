
import java.util.Arrays;

 class bubblesort {
    public static void main(String[] args) {
        int[] arr = {12,15,17,11,14,13};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void bubble(int[] arr){
        boolean swapped;
        // run the steps n-1 times
        for (int i = 0; i < arr.length; i++) {
            swapped = false;
            // for each step, max item will come at the last respective index
            for (int j = 1; j < arr.length - i ; j++) {
                // swap if the item is samller than the previous item

                if (arr[j] < arr[j - 1]){
                    // swap
                    int temp  = arr[j];
                    arr[j] = arr[j -1];
                    arr[j - 1] = temp;
                    swapped = true;
                }
            }
// If you did not swap for a particular value of i, it means the array is sorted hence stop the loop
            if (swapped = false){
                break;
            }
        }
    }
}
