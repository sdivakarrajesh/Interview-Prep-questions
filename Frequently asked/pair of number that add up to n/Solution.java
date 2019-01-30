import java.util.*;

class Solution {
    static int addToN(int[] arr, int sum) {
        int length = arr.length;
        int left = 0, right = length - 1, count = 0;
        while (left < right) {
            int temp = arr[left] + arr[right];
            if (temp == sum) {
                count++;
                left++;
            } else if (temp < sum) {
                left++;
            } else {
                right--;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = Integer.parseInt(sc.nextLine());

        String line = sc.nextLine();
        String[] arrStr = line.split(" ");
        int[] arr = new int[arrStr.length];
        for (int i = 0; i < arrStr.length; i++) {
            arr[i] = Integer.parseInt(arrStr[i]);
        }
        Arrays.sort(arr);
        int ans = addToN(arr, sum);
        System.out.println("There are " + ans + " pairs that add up to " + sum);
    }
}