import java.util.*;
class SpiralPatternExample {
    public static void main(String[] args) {
       
        int size =5;
        int[][] board = new int[size][size];
        int left = 0;
        int top = size - 1;
        int currentNumber = 1;

        for (int layer = 1; layer <= size / 2; layer++, left++, top--) {
            // Fill from left to right
            for (int j = left; j <= top; j++, currentNumber++) {
                board[left][j] = currentNumber;
            }

            // Fill from top to bottom
            for (int j = left + 1; j <= top; j++, currentNumber++) {
                board[j][top] = currentNumber;
            }

            // Fill from right to left
            for (int j = top - 1; j >= left; j--, currentNumber++) {
                board[top][j] = currentNumber;
            }

            // Fill from bottom to top
            for (int j = top - 1; j >= left + 1; j--, currentNumber++) {
                board[j][left] = currentNumber;
            }
        }

        // Print the pattern
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.printf("%-5d", board[i][j]);
            }
            System.out.println();
        }
    }
}