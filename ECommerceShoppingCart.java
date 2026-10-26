import java.util.HashMap;

class Product {
    int id;
    String name;
    double price;

    public Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }
}

class CartItem {
    Product product;
    int quantity;

    public CartItem(Product product, int quantity) {
        this.product = product;
        this.quantity = quantity;
    }
}

class ShoppingCart {
    private HashMap<Integer, CartItem> cart = new HashMap<>();

    public void addProduct(Product product, int quantity) {
        if (quantity <= 0) return;
        if (cart.containsKey(product.id)) {
            cart.get(product.id).quantity += quantity;
        } else {
            cart.put(product.id, new CartItem(product, quantity));
        }
    }

    public void updateQuantity(int productId, int quantity) {
        if (quantity <= 0) return;
        if (cart.containsKey(productId)) {
            cart.get(productId).quantity = quantity;
        }
    }

    public void removeProduct(int productId) {
        cart.remove(productId);
    }

    public void displayReceipt() {
        double subtotal = 0;
        System.out.println("Product\tQuantity\tAmount");
        for (CartItem item : cart.values()) {
            double amount = item.product.price * item.quantity;
            subtotal += amount;
            System.out.println(item.product.name + "\t" + item.quantity + "\t\t" + String.format("%.2f", amount));
        }
        System.out.println("----------------------------------");
        System.out.println("Subtotal: " + String.format("%.2f", subtotal));
        
        double discountPercent = 0;
        if (subtotal >= 1000 && subtotal < 5000) discountPercent = 0.05;
        else if (subtotal >= 5000) discountPercent = 0.10;

        double discount = subtotal * discountPercent;
        double finalAmount = subtotal - discount;

        System.out.println("Discount (" + (int)(discountPercent * 100) + "%): " + String.format("%.2f", discount));
        System.out.println("Final Amount: " + String.format("%.2f", finalAmount));
    }
}

public class ECommerceShoppingCart {
    public static void main(String[] args) {
        ShoppingCart cart = new ShoppingCart();
        cart.addProduct(new Product(1, "Keyboard", 800), 2);
        cart.addProduct(new Product(2, "Mouse", 700), 1);
        cart.displayReceipt();
    }
}