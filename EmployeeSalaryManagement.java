class Employee {
    private int employeeId;
    private String name;
    private double basicSalary;

    public Employee(int employeeId, String name, double basicSalary) {
        this.employeeId = employeeId;
        this.name = name;
        this.basicSalary = basicSalary;
    }

    public double calculateGrossSalary() {
        double hra = 0.20 * basicSalary;
        double da = 0.10 * basicSalary;
        double bonus = 0.0;
        if (basicSalary > 50000) {
            bonus = 0.05 * basicSalary;
        }
        return basicSalary + hra + da + bonus;
    }

    public void displaySalaryDetails() {
        System.out.println("ID: " + employeeId + " | Name: " + name + " | Gross Salary: " + calculateGrossSalary());
    }

    public static Employee compareSalary(Employee e1, Employee e2) {
        if (e1.calculateGrossSalary() >= e2.calculateGrossSalary()) {
            return e1;
        }
        return e2;
    }
}

public class EmployeeSalaryManagement {
    public static void main(String[] args) {
        Employee e1 = new Employee(1, "John", 45000);
        Employee e2 = new Employee(2, "Alice", 60000);
        Employee e3 = new Employee(3, "Bob", 55000);

        e1.displaySalaryDetails();
        e2.displaySalaryDetails();
        e3.displaySalaryDetails();

        Employee higher = Employee.compareSalary(e1, e2);
        System.out.println("\nHigher Gross Salary Between John and Alice:");
        higher.displaySalaryDetails();
    }
}