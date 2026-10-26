class BankAccount {
    private int accountNumber;
    private String accountHolderName;
    private double balance;

    public BankAccount(int accountNumber, String accountHolderName) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        this.balance = 0.0;
    }

    public BankAccount(int accountNumber, String accountHolderName, double openingBalance) {
        this.accountNumber = accountNumber;
        this.accountHolderName = accountHolderName;
        if (openingBalance >= 0) {
            this.balance = openingBalance;
        } else {
            this.balance = 0.0;
        }
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    public void displayBalance() {
        System.out.println("Account: " + accountNumber + " | Holder: " + accountHolderName + " | Balance: " + balance);
    }
}

public class BankAccountWithConstructorOverloading {
    public static void main(String[] args) {
        BankAccount a1 = new BankAccount(1001, "Aamir");
        BankAccount a2 = new BankAccount(1002, "Sara", 5000);

        a1.deposit(2000);
        a2.withdraw(1500);

        a1.displayBalance();
        a2.displayBalance();
    }
}