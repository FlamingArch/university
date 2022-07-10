public class prog2 {
    public static void main(String[] args) {
        try {
            int[] arr = { 10, 5, 5 };
            arr[3] = arr[0] / arr[1] - arr[2];
            System.out.println("Hello");
        } catch (ArithmeticException e) {
            System.out.println("Divide by 0: " + e);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Out of Range: " + e);
        }
        System.out.println("End of Region");
    }
}
