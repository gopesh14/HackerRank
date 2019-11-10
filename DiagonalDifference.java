import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int primaryDiagonal   = 0;
        int secondaryDiagonal = 0;
        for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {
                int value = in.nextInt();
                if (row == col) {
                    primaryDiagonal += value;
                } 
                if (row + col == N - 1) {
                    secondaryDiagonal += value;
                }
            }
        }
        int diff = Math.abs(primaryDiagonal - secondaryDiagonal);
        System.out.println(diff);
    }
}

