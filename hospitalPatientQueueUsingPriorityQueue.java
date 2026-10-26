import java.util.PriorityQueue;
import java.util.Comparator;

class Patient {
    String name;
    int priority;
    int arrivalOrder;

    public Patient(String name, int priority, int arrivalOrder) {
        this.name = name;
        this.priority = priority;
        this.arrivalOrder = arrivalOrder;
    }
}

class PatientComparator implements Comparator<Patient> {
    public int compare(Patient p1, Patient p2) {
        if (p1.priority != p2.priority) {
            return Integer.compare(p1.priority, p2.priority);
        }
        return Integer.compare(p1.arrivalOrder, p2.arrivalOrder);
    }
}

public class hospitalPatientQueueUsingPriorityQueue {
    public static void main(String[] args) {
        PriorityQueue<Patient> queue = new PriorityQueue<>(new PatientComparator());
        
        queue.add(new Patient("Patient A", 1, 1));
        queue.add(new Patient("Patient B", 2, 2));
        queue.add(new Patient("Patient C", 1, 3));
        queue.add(new Patient("Patient D", 3, 4));

        while (!queue.isEmpty()) {
            Patient p = queue.poll();
            System.out.println(p.name + " - Priority " + p.priority);
        }
    }
}