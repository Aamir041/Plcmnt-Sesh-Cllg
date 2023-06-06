import java.util.*;

public class triangle {

    public static void main(String[] args) {
        // int nums[] = {5 ,4 ,2 ,3 ,5, 3};
        int nums[] = {6 ,3 ,2 ,2 ,3 ,3};
        
        Arrays.sort(nums);
        int i = 0;
        ArrayList<ArrayList<Integer>> num = new ArrayList<>();
        int total = 1;
        while(i < nums.length){
            ArrayList<Integer> al = new ArrayList<>();
            for(int j=0; j<total; j++){
                al.add(nums[i++]);
            }
            num.add(al);
            total++;
        }
        for(ArrayList al : num){
            System.out.println(al);
        }
        boolean res = true;
        for(int j=0; j<num.size()-1; j++){
            for(int k=0; k<num.get(j).size(); k++){   
                if(num.get(j).get(k) >= num.get(j+1).get(k) || num.get(j).get(k) >= num.get(j+1).get(k+1) ){
                    res = false;
                    break;
                }
            }
        }
        if(res){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }

    }
}
