import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        int x1 = 3;
        int y1 = 4;
        int horizontalDistance = x - x1;
        int verticalDistance = y - y1;
        System.out.println(Math.max(horizontalDistance, verticalDistance));
    }
}
