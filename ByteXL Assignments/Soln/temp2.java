import java.util.Scanner;

public class temp2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m, n, p;
		m = sc.nextInt();
		n = sc.nextInt();
		p = sc.nextInt();
		String temp = "*";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < p; j++) {
				temp += ".";
			}
			temp += "*";
		}
		String temp1 = "";
		for (int i = 0; i < temp.length(); i++) {
			temp1 += "*";
		}

		int arrPos[] = new int[n];
		arrPos[0] = 1;
		for (int i = 1; i < n; i++) {
			if (i % 2 != 0) {
				arrPos[i] = arrPos[i - 1] + p * 2;
			} else {
				arrPos[i] = arrPos[i - 1] + 2;
			}
		}
		boolean flag = false;
		System.out.println(temp1);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < p; j++) {
				char arrTemp[] = temp.toCharArray();
				for (int k = 0; k < arrPos.length; k++) {
					if (!flag && k % 2 == 0) {
						arrTemp[arrPos[k]] = '\\';
						arrPos[k]++;
					} else if (!flag && k % 2 != 0) {
						arrTemp[arrPos[k]] = '/';
						arrPos[k]--;
					}

					if (flag && k % 2 == 0) {
						arrTemp[arrPos[k]] = '/';
						arrPos[k]--;
					} else if (flag && k % 2 != 0) {
						arrTemp[arrPos[k]] = '\\';
						arrPos[k]++;
					}

				}

				String t = new String(arrTemp);
				System.out.println(t);
			}
			flag = !flag;
			System.out.println(temp1);
			if (flag) {
				for (int xx = 0; xx < arrPos.length; xx++) {
					if (xx % 2 == 0) {
						arrPos[xx]--;
					} else {
						arrPos[xx]++;
					}
				}
			} else {
				for (int xx = 0; xx < arrPos.length; xx++) {
					if (xx % 2 == 0) {
						arrPos[xx]++;
					} else {
						arrPos[xx]--;
					}
				}
			}
		}

	}
}