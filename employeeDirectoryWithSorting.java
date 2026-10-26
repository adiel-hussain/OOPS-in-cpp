import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Employee {
    int id;
    String name;
    String department;
    double salary;

    public Employee(int id, String name, String department, double salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

    public void display() {
        System.out.println("ID: " + id + " | Name: " + name + " | Dept: " + department + " | Salary: " + salary);
    }
}

public class employeeDirectoryWithSorting {
    public static void main(String[] args) {
        ArrayList<Employee> employees = new ArrayList<>();
        employees.add(new Employee(1, "Charlie", "IT", 70000));
        employees.add(new Employee(2, "Alex", "HR", 50000));
        employees.add(new Employee(3, "Blake", "IT", 90000));
        employees.add(new Employee(4, "Daniel", "IT", 40000));

        Collections.sort(employees, Comparator.comparingDouble(e -> e.salary));
        System.out.println("Sorted by Salary:");
        for (Employee e : employees) e.display();

        Collections.sort(employees, Comparator.comparing(e -> e.name));
        System.out.println("\nSorted by Name:");
        for (Employee e : employees) e.display();

        System.out.println("\nSearch IT Department:");
        for (Employee e : employees) {
            if (e.department.equals("IT")) e.display();
        }

        Collections.sort(employees, (e1, e2) -> Double.compare(e2.salary, e1.salary));
        System.out.println("\nTop 3 Highest Paid:");
        for (int i = 0; i < Math.min(3, employees.size()); i++) {
            employees.get(i).display();
        }
    }
}