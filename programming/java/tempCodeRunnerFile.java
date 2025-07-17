import java.sql.*;

public class jdbctest {
    public static void main(String[] args) {
        String jdbcURL = "jdbc:mysql://localhost:3306/demodb";
        String userName= "root";
        String pass="Vansh@8138";
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection connection = DriverManager.getConnection(jdbcURL, userName, pass);
            Statement statement = connection.createStatement();
            String sql = "SHOW DATABASES";
            ResultSet result = statement.executeQuery(sql);
            while (result.next()) {
                System.out.println(result.getString(1));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}