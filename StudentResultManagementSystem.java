class Student {
    private int rollNumber;
    private String name;
    private double marks1;
    private double marks2;
    private double marks3;

    public Student(int rollNumber, String name, double marks1, double marks2, double marks3) {
        this.rollNumber = rollNumber;
        this.name = name;
        this.marks1 = marks1;
        this.marks2 = marks2;
        this.marks3 = marks3;
    }

    public int getRollNumber() {
        return rollNumber;
    }

    public String getName() {
        return name;
    }

    public double calculateTotal() {
        return marks1 + marks2 + marks3;
    }

    public double calculatePercentage() {
        return (calculateTotal() / 300) * 100;
    }

    public char calculateGrade() {
        double percentage = calculatePercentage();
        if (percentage >= 90) return 'A';
        if (percentage >= 75) return 'B';
        if (percentage >= 60) return 'C';
        return 'D';
    }

    public void displayDetails() {
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Name: " + name);
        System.out.println("Total Marks: " + (int)calculateTotal() + " / 300");
        System.out.println("Percentage: " + calculatePercentage() + "%");
        System.out.println("Grade: " + calculateGrade());
    }
}

public class StudentResultManagementSystem {
    public static void main(String[] args) {
        Student s = new Student(101, "Aamir", 85, 80, 90);
        s.displayDetails();
    }
}