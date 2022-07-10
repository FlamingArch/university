// DON'T USE BASE TYPE EXCEPTION

public class prog3genericexception {

    public static void main(String[] args) {
        try {
            int[] arr = { 10, 5, 5 };
            arr[3] = arr[0] / arr[1] - arr[2];
            System.out.println("Hello");
        } catch (Exception e) {
            System.out.println("Divide by 0: " + e);
        }
        System.out.println("End of Region");
    }
}
