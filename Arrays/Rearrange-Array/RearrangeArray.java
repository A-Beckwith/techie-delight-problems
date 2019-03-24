import java.util.Arrays;

public class RearrangeArray {
    public int[] rearrange(int[] arr, int[] pos) {
        int aux[] = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            aux[pos[i]] = arr[i];
        }

        return aux;
    }
    
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5 };
        int pos[] = { 3, 2, 4, 1, 0 };

        RearrangeArray ra = new RearrangeArray();
        arr = ra.rearrange(arr, pos);
        
        System.out.println(Arrays.toString(arr));
    }
}
