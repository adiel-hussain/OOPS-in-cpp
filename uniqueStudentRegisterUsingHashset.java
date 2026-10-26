import java.util.HashSet;
import java.util.Objects;

class Student {
    private int regNumber;
    private String name;

    public Student(int regNumber, String name) {
        this.regNumber = regNumber;
        this.name = name;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Student student = (Student) o;
        return regNumber == student.regNumber;
    }

    @Override
    public int hashCode() {
        return Objects.hash(regNumber);
    }

    public void display() {
        System.out.println("Reg No: " + regNumber + " | Name: " + name);
    }
}

public class uniqueStudentRegisterUsingHashset {
    public static void main(String[] args) {
        HashSet<Student> set = new HashSet<>();
        Student s1 = new Student(101, "Aamir");
        Student s2 = new Student(101, "Aamir Khan");

        set.add(s1);
        set.add(s2);

        for (Student s : set) {
            s.display();
        }
    }
}