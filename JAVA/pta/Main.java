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

public class Main {
	public static void main(String[] args) {
		ArrayList<Student> ar = new ArrayList<Student>();
        
        Scanner sc = new Scanner(System.in);
        for(int i = 0;i<5;i++){
            String number = sc.next();
            String name = sc.next();
            float score = sc.nextFloat();
            // String name = tmp.toUpperCase();
            Student stu = new Student(number,name,score);
            ar.add(stu);
        }
        
        // Collections.sort(ar, String.CASE_INSENSITIVE_ORDER);

        Collections.sort(ar, new Comparator<Student>() {
			@Override
			public int compare(Student s1, Student s2) {
                return s2.name.compareToIgnoreCase(s1.name);
			}
		});

        for(Student stu:ar){
            System.out.println(stu.number + " " + stu.name + " " + stu.score);
        }

    }
}
