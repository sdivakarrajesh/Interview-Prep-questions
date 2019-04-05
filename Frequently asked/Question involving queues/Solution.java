import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static int[] getHeights(String[] heights){
        int[] ans = new int[heights.length];
        for(int i=0;i<heights.length;i++){
            ans[i] = Integer.parseInt(heights[i]);
        }
        return ans;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String[] countStr = sc.nextLine().split(" ");
        String[] boysHeightsStr = sc.nextLine().split(" ");
        String[] girlsHeightsStr = sc.nextLine().split(" ");
        int boysCount = Integer.parseInt(countStr[0]);
        int girlsCount = Integer.parseInt(countStr[1]);
        int[] boysHeights = getHeights(boysHeightsStr);
        int[] girlsHeights = getHeights(girlsHeightsStr);

        Arrays.sort(girlsHeights);
        //Given that bCount is always <gCount
        int gSum=0, bSum=0, minDiff = 0;
        Queue<Integer> q = new LinkedList<Integer>();
        for (int var : boysHeights) {
            bSum +=var;
        }
        for (int i=0;i<boysCount;i++) {
            gSum +=girlsHeights[i];
            q.add(girlsHeights[i]);
        }
        minDiff = Math.abs(bSum-gSum);
        for(int i=boysCount;i<girlsCount;i++){
            int head = q.remove();
            gSum -=head;
            q.add(girlsHeights[i]);
            gSum +=girlsHeights[i];

            if(Math.abs(bSum-gSum)<minDiff){
                minDiff = Math.abs(bSum-gSum);
            }
        }
        System.out.println(minDiff);

    }
}
