import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Deque<Integer> deque = new ArrayDeque<Integer>();
        HashMap<Integer, Integer> freqMap = new HashMap<Integer, Integer>();
        int m = in.nextInt(); // number of elements in given array
        int n = in.nextInt(); // size of the subarray
        int i = n, maxCount = 0;
        while(i-->0){
            int num = in.nextInt();
            deque.addLast(num);
            freqMap = addToMap(freqMap, num);
        }
        maxCount = freqMap.size();
        
        for (i = n; i < m; i++) {
            int num = in.nextInt();

            freqMap = addToMap(freqMap, num);

            deque.addLast(num);
            int head = deque.removeFirst();

            freqMap = removeFromMap(freqMap, head);
 
            
            int tempSize = freqMap.size();
            maxCount = (tempSize > maxCount) ? tempSize : maxCount;
            
        }
        System.out.println(maxCount);
    }

    public static HashMap addToMap(HashMap<Integer,Integer> freqMap, int num) {
        if (freqMap.get(num) == null)
            freqMap.put(num, 1);
        else {
            freqMap.put(num, freqMap.get(num).intValue() + 1);
        }

        return freqMap;
    }

    public static HashMap removeFromMap(HashMap<Integer,Integer> freqMap,int head) {
        int count = freqMap.get(head);
        if (freqMap.get(head) == 1) {
            freqMap.remove(head);
        } else {
            freqMap.put(head, count - 1);
        }

        return freqMap;
    }



}
