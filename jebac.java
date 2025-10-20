public class Game {
    public static int którą(int x) {
        return x*x - 3;
    }

    public static String grałeś(String name) {
        return "Player: " + name;
    }

    public static void w(int[] arr) {
        int sum = 0;
        for(int i : arr) sum += i;
        System.out.println(sum);
    }

    public static void main(String[] args) {
        System.out.println(którą(5));
        System.out.println(grałeś("Paweł"));
        w(new int[]{1,2,3});
    }
}
