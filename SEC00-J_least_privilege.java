/*
    3. Apply the Principle of Least Privilege
    • CERT Number: SEC00-J
    • Description: Always grant only the necessary permissions to Java applications 
      to minimize the risk of exploitation.
*/

public class LeastPrivilegeExample {
    public static void main(String[] args) {
        SecurityManager sm = System.getSecurityManager();
        if (sm != null) {
            sm.checkPermission(new RuntimePermission("modifyThread"));
        }
    }
}