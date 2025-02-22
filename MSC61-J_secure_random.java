/*
    1. Use Secure Random Number Generation
    • CERT Number: MSC61-J
    • Description: Java’s Random class is not cryptographically secure. 
      For security-sensitive applications, use SecureRandom.
*/


import java.security.SecureRandom;

public class SecureRandomExample {
    public static void main(String[] args) {
        SecureRandom sr = new SecureRandom();
        int secureValue = sr.nextInt(100);
        System.out.println("Secure random number: " + secureValue);
    }
}