public class LeastPrivilegeExample {
    public static void main(String[] args) {
        SecurityManager sm = System.getSecurityManager();
        if (sm != null) {
            sm.checkPermission(new RuntimePermission("modifyThread"));
        }
    }
}