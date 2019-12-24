import java.util.*;

class Student {
	String number;
	String name;
	float score;

	// Constructor
	Student(String number1, String name1, float score1) {
		number = number1;
		name = name1;
		score = score1;
	}

	// Used to print student details in main()
	public String toString() {
		return this.number + " " + this.name + " " + this.score;
	}
}

public class student {
	public static void main(String[] args) {
		ArrayList<Student> ar = new ArrayList<Student>();

        final int n = 5;
        Scanner sc = new Scanner(System.in);

        for(int i = 0;i<n;i++){
            String num = sc.next();
            String name = sc.next();
            float score = sc.nextFloat();
            Student stu = new Student(num,name,score);
            ar.add(stu);
        }

        Collections.sort(ar,new Comparator<Student>(){
            
            @Override
            public int compare(Student s1,Student s2){
                return s1.score - s2.score < 0 ? 1 : -1;
            }

        });

        for(Student stu:ar){
            System.out.println(stu.number + " " + stu.name + " " + stu.score);
        }

    }
}
