import java.util.HashMap;

class Product {
private int id;
private String name;
private double price;
private int quantity;

public Product(int id, String name, double price, int quantity) {
    this.id = id;
    this.name = name;
    this.price = price;
    this.quantity = quantity;
}

public void setPrice(double price) {
    this.price = price;
}

public void display() {
    System.out.println("ID: " + id + " | Name: " + name
            + " | Price: " + price + " | Qty: " + quantity);
}

}

class ProductCatalogue {
private HashMap<Integer, Product> catalogue = new HashMap<>();

public void addProduct(int id, Product p) {
    if (!catalogue.containsKey(id)) {
        catalogue.put(id, p);
    }
}

public Product searchProduct(int id) {
    return catalogue.get(id);
}

public void updatePrice(int id, double newPrice) {
    Product p = catalogue.get(id);

    if (p != null) {
        p.setPrice(newPrice);
    }
}

public void removeProduct(int id) {
    catalogue.remove(id);
}

public void displayAll() {
    for (Product p : catalogue.values()) {
        p.display();
    }
}

}

public class ProductCatalogueUsingHashmap {
public static void main(String[] args) {
ProductCatalogue cat = new ProductCatalogue();

    cat.addProduct(1, new Product(1, "Laptop", 50000, 10));
    cat.addProduct(2, new Product(2, "Phone", 20000, 15));

    cat.updatePrice(1, 48000);

    cat.displayAll();
}

}