import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("linux kernel sim loading");
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.print("command: ");
            String command = scanner.nextLine();
            if (command.equals("help")) {
                System.out.println("help shows all avalible commands");
                System.out.println("is_java shows if the project is programmed in java");
                System.out.println("files shows all files");
            } else if (command.equals("is_java")) {
                System.out.println("yes");
            } else if (command.equals(files)) {
                System.out.println("Main.class/");
                System.out.println("|->commands");
                System.out.println("|->fonts.f");
                System.out.println("|->banana.exe");
            } else if (command.equals("banana.exe")) {
                int times = 0;
                while (true) {
                    System.out.println(" times said banana");
                    times =+ 1;
                    System.out.print(times);
                }
            }
        }
    }
}
