import java.math.BigDecimal;
import java.math.BigInteger;
import java.math.MathContext;
import java.math.RoundingMode;
import java.util.Scanner;

public class ChudnovskyPi {

    static BigInteger factorial(BigInteger n) {
        BigInteger fact = BigInteger.ONE;
        BigInteger i = BigInteger.TWO;
        while (i.compareTo(n) <= 0) {
            fact = fact.multiply(i);
            i = i.add(BigInteger.ONE);
        }
        return fact;
    }

    static BigDecimal sqrt(BigDecimal A, MathContext mc) {
        BigDecimal x = A.divide(BigDecimal.valueOf(2), mc);
        BigDecimal prevX;
        BigDecimal TWO = BigDecimal.valueOf(2);
        BigDecimal tolerance = BigDecimal.ONE.scaleByPowerOfTen(-mc.getPrecision());

        do {
            prevX = x;
            x = A.divide(x, mc).add(x).divide(TWO, mc);
        } while (x.subtract(prevX).abs().compareTo(tolerance) > 0);

        return x;
    }

    static BigDecimal computePi(BigInteger digits) {
        int workingDigits = digits.intValue() + 50; // Over-provisioned precision
        MathContext mc = new MathContext(workingDigits, RoundingMode.HALF_UP);

        BigDecimal sum = BigDecimal.ZERO;
        BigDecimal C = new BigDecimal("426880").multiply(sqrt(new BigDecimal("10005"), mc));

        BigInteger k = BigInteger.ZERO;
        BigDecimal term;

        do {
            BigInteger sixK = k.multiply(BigInteger.valueOf(6));
            BigInteger threeK = k.multiply(BigInteger.valueOf(3));

            BigInteger num = factorial(sixK)
                    .multiply(BigInteger.valueOf(13591409L).add(BigInteger.valueOf(545140134L).multiply(k)));
            BigInteger denom = factorial(threeK)
                    .multiply(factorial(k).pow(3))
                    .multiply(BigInteger.valueOf(-262537412640768000L).pow(k.intValue()));

            term = new BigDecimal(num).divide(new BigDecimal(denom), mc);
            sum = sum.add(term, mc);

            k = k.add(BigInteger.ONE);

        } while (term.abs().compareTo(BigDecimal.ONE.scaleByPowerOfTen(-workingDigits)) >= 0);

        BigDecimal pi = C.divide(sum, mc);
        return pi.round(new MathContext(digits.intValue(), RoundingMode.HALF_UP));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter digits: ");
        BigInteger digits = sc.nextBigInteger();

        long start = System.currentTimeMillis();
        BigDecimal pi = computePi(digits);
        long end = System.currentTimeMillis();

        System.out.println("\nπ to " + digits + " digits:");
        System.out.println(pi);
        System.out.println("\nTime: " + (end - start) / 1000.0 + " sec");
        sc.close();
    }
}
