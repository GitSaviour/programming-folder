public class pi {
    static double pivalue(){
        double x=0d;
        double cons=4d;
    for(long i=1L;i<922337203685L;i++){
    long denominator = (2*i)-1;
    if (i%2!=0){
        x=x+(cons/denominator);

    }
    else{
        x=x-(cons/denominator);
    }
    }
    return x;
}
    public static void main(String[] args) {
        System.out.println(pivalue());
    }
}
// public class pi {
//     static float pivalue() {
//         float x = 0f;
//         float cons = 4f;  // Make it float!
//         for (int i = 1; i < 2000000000; i++) {
//             int denominator = (2 * i) - 1;
//             if (i % 2 != 0) {
//                 x = x + (cons / denominator);  // Proper float division
//             } else {
//                 x = x - (cons / denominator);
//             }
//         }
//         return x;
//     }

//     public static void main(String[] args) {
//         System.out.println(pivalue());
//     }
// }
