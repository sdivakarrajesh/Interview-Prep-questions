import java.util.*;
class Solution{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int from = sc.nextInt();
        int to = sc.nextInt();
        int ans = (int)(Math.floor(Math.sqrt(to)) - Math.ceil(Math.sqrt(from)) + 1);
        System.out.println("The number of perfect squares between "+from +" and "+ to +" is "+ans );
    }
}