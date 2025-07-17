import java.io.*;
import java.util.Scanner;
public class filehandlingfile11 {
public static void main(String[] args) throws IOException {
    // creating a file
    // File file = new File("demo.txt");
    // try {if(file.createNewFile()){
    //     System.out.println("file created with name "+ file.getName());
    // }
    // else{
    //     System.out.println("file already exits ");
    // }
        
    // } catch (Exception e) {
    //     System.out.println("Error");
    //     e.printStackTrace();
    // }

    //writing to a file,clean write, delete then write, if not created then create
    // try{
    // FileWriter writer = new FileWriter("demo1.txt");
    // writer.write("hello world! ");
    // writer.close();
    // System.out.println("file written successfully");
    // }
    // catch(Exception e){
    // e.printStackTrace();
    // }


    //appending to a file
    //     try{
    // FileWriter writer = new FileWriter("demo1.txt",true);
    // writer.write("hello world! ");
    // writer.close();
    // System.out.println("file written successfully");
    // }
    // catch(Exception e){
    // e.printStackTrace();
    // }


// file reading 
//     try{
//     File file = new File("dem.txt");
//     Scanner reader =new Scanner(file);
//     while(reader.hasNextLine()){
//         System.out.println(reader.nextLine());
        
//     }
//     reader.close();
// }
// catch(Exception e){
//     System.out.println("Error occured");
// e.printStackTrace();
// }
    




// deleting a file
    // File file = new File("demo.txt");
    // if(
    // file.delete()){
    // System.out.println("file deleted successfully");
    // }
    // else{ System.out.println("Error occured , failed to delete the file");
    // }


}
}
