import java.util.Scanner;

public class DivisibleBy14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        boolean div2 = (num % 2 == 0);

        int temp = num;
        while (temp > 70) {
            int last = temp % 10;
            temp = temp / 10 - 2 * last;
        }

        boolean div7 = (temp % 7 == 0);

        if (div2 && div7)
            System.out.println(num + " is divisible by 14");
        else
            System.out.println(num + " is not divisible by 14");
    }
}
