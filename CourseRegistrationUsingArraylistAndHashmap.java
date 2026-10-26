import java.util.HashMap;
import java.util.ArrayList;

class Course {
    String code;
    String name;
    int maxCapacity;

    public Course(String code, String name, int maxCapacity) {
        this.code = code;
        this.name = name;
        this.maxCapacity = maxCapacity;
    }
}

class Student {
    String id;
    String name;

    public Student(String id, String name) {
        this.id = id;
        this.name = name;
    }
}

class CourseSystem {
    private HashMap<String, Course> courses = new HashMap<>();
    private HashMap<String, ArrayList<Student>> registrations = new HashMap<>();

    public void addCourse(Course course) {
        courses.put(course.code, course);
        registrations.put(course.code, new ArrayList<>());
    }

    public void registerStudent(String courseCode, Student student) {
        Course course = courses.get(courseCode);
        if (course == null) return;

        ArrayList<Student> list = registrations.get(courseCode);
        
        for (Student s : list) {
            if (s.id.equals(student.id)) return;
        }

        if (list.size() < course.maxCapacity) {
            list.add(student);
        }
    }

    public void displayCourseStudents(String courseCode) {
        ArrayList<Student> list = registrations.get(courseCode);
        if (list != null) {
            for (Student s : list) {
                System.out.println("Student ID: " + s.id + " | Name: " + s.name);
            }
        }
    }
}

public class CourseRegistrationUsingArraylistAndHashmap {
    public static void main(String[] args) {
        CourseSystem system = new CourseSystem();
        system.addCourse(new Course("CS101", "Java", 2));

        system.registerStudent("CS101", new Student("S1", "Alex"));
        system.registerStudent("CS101", new Student("S1", "Alex"));
        system.registerStudent("CS101", new Student("S2", "Blake"));
        system.registerStudent("CS101", new Student("S3", "Charlie"));

        system.displayCourseStudents("CS101");
    }
}