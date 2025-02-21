import java.security.SecureRandom;

public class SecureRandomExample {
    public static void main(String[] args) {
        SecureRandom sr = new SecureRandom();
        int secureValue = sr.nextInt(100);
        System.out.println("Secure random number: " + secureValue);
    }
}