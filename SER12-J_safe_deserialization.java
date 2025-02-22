/*
    2. Prevent Deserialization of Untrusted Data
    • CERT Number: SER12-J
    • Description: Deserializing untrusted data can allow attackers to execute 
      malicious code. Always validate data before deserialization.
*/


import java.io.*;

public class SafeDeserialization {
    public static Object deserializeSafe(byte[] data) throws IOException, ClassNotFoundException {
        try (ByteArrayInputStream bis = new ByteArrayInputStream(data);
             ObjectInputStream ois = new ObjectInputStream(bis)) {
            return ois.readObject();
        }
    }
}