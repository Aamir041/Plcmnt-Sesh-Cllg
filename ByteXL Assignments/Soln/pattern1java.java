import java.util.Scanner;

public class pattern1java {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {

            solve();
            t--;
        }
    }

    static void solve() {
        Scanner sc = new Scanner(System.in);
        int n, m, p;
        n = sc.nextInt();
        m = sc.nextInt();
        p = sc.nextInt();
        printPattren(n, m, p);
    }

    static void printPattren(int n, int m, int p)
{

    // going row wise
    for (int i = 1; i <= n; i++)
    {
        lineOfStars((p * m) + (m + 1));
        // printing lines
        // lines me slash ka location lagega
        if (i % 2 != 0)
        {
            for (int j = 1; j <= p; j++)
            {

                // printing a line
                for (int k = 1; k <= m; k++)
                {
                    // cout << "*";
                    System.out.print("*");
                    // odd pe real
                    if (k % 2 != 0)
                    {
                        for (int l = 1; l <= p; l++)
                        {
                            if (l == j)
                            {
                                // cout << "\\";
                                System.out.print("\\");
                            }
                            else
                            {
                                // cout << ".";
                                System.out.print(".");
                            }
                        }
                    }
                    else
                    {
                        for (int l = p; l >= 1; l--)
                        {

                            if (l == j)
                            {
                                // cout << "/";
                                System.out.print("/");
                            }
                            else
                            {
                                // cout << ".";
                                System.out.print(".");
                            }
                        }
                    }
                }
                // cout << "*" << endl;
                System.out.println("*");
            }
        }
        else
        {
            for (int j = 1; j <= p; j++)
            {

                // printing a line
                for (int k = 1; k <= m; k++)
                {
                    // cout << "*";
                    System.out.print("*");

                    // odd pe real
                    if (k % 2 != 0)
                    {

                        for (int l = p; l >= 1; l--)
                        {

                            if (l == j)
                            {
                                // cout << "/";
                                System.out.print("/");
                            }
                            else
                            {
                                // cout << ".";
                                System.out.print(".");
                            }
                        }
                    }
                    else
                    {
                        for (int l = 1; l <= p; l++)
                        {
                            if (l == j)
                            {
                                // cout << "\\";
                                System.out.print("\\");
                            }
                            else
                            {
                                // cout << ".";
                                System.out.print(".");
                            }
                        }
                    }
                }
                System.out.println("*");
                // cout << "*" << endl;
            }
        }
    }
    lineOfStars((p * m) + (m + 1));
}

    static void lineOfStars(int m) {
        for (int i = 0; i < m; i++) {
            System.out.print("*");
        }
        System.out.println();
    }

}
