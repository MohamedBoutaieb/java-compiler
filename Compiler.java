import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;

public class Compiler {
    public static void main(String[] args) throws IOException {
        try {
            ProcessBuilder processBuilder = new ProcessBuilder();
            processBuilder.command("cmd", "/c", "analyseur_semantique.bat");
            Process process = processBuilder.start();
            BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()));
            String line;
            while ((line = reader.readLine())!=null ){
                System.out.println(line);
            }

        } catch (Exception e) {
            e.printStackTrace();
        }

    }
}
