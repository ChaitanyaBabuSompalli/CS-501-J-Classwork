#include <iostream>
#include <string>

class Book {
private:
    // Member variables
    std::string title;          // Title of the book
    int year_published;         // Year the book was published
    double price;               // Price of the book
    bool is_hardcover;          // Indicates if the book is hardcover
    char initial;               // Initial of the author's last name

public:
    // Constructor
    Book(const std::string& title, int year_published, double price, bool is_hardcover, char initial) :
        title(title), year_published(year_published), price(price), is_hardcover(is_hardcover), initial(initial) {}

    // Getters
    std::string getTitle() const { return title; }
    int getYearPublished() const { return year_published; }
    double getPrice() const { return price; }
    bool getIsHardcover() const { return is_hardcover; }
    char getInitial() const { return initial; }

    // Setters (with optional validation)
    void setTitle(const std::string& new_title) {
        if (new_title.empty()) {
            // Handle empty title case (e.g., print an error message)
            std::cerr << "Error: Title cannot be empty." << std::endl;
            return;
        }
        title = new_title;
    }
    void setYearPublished(int new_year) {
        if (new_year < 0) {
            // Handle invalid year case (e.g., print an error message)
            std::cerr << "Error: Year published cannot be negative." << std::endl;
            return;
        }
        year_published = new_year;
    }
    void setPrice(double new_price) {
        if (new_price < 0) {
            // Handle negative price case (e.g., print an error message)
            std::cerr << "Error: Price cannot be negative." << std::endl;
            return;
        }
        price = new_price;
    }
    void setIsHardcover(bool new_is_hardcover) { is_hardcover = new_is_hardcover; }
    void setInitial(char new_initial) { initial = new_initial; }
};

int main() {
    // Create a book object
    Book myBook("The Lord of the Rings", 1954, 15.99, true, 'T');

    // Print book information using getter methods
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Year published: " << myBook.getYearPublished() << std::endl;
    std::cout << "Price: " << myBook.getPrice() << std::endl;
    std::cout << "Hardcover: " << (myBook.getIsHardcover() ? "Yes" : "No") << std::endl;
    std::cout << "Initial: " << myBook.getInitial() << std::endl;

    // Modify book information using setter methods with validation
    myBook.setTitle(""); // This will trigger an error message
    myBook.setYearPublished(-100); // This will trigger an error message
    myBook.setPrice(-5.0); // This will trigger an error message
    myBook.setTitle("The Hitchhiker's Guide to the Galaxy");
    myBook.setYearPublished(1979);
    myBook.setPrice(12.95);
    myBook.setIsHardcover(false);
    myBook.setInitial('D');

    // Print modified book information
    std::cout << "\n--- After modifications ---\n" << std::endl;
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Year published: " << myBook.getYearPublished() << std::endl;
    std::cout << "Price: " << myBook.getPrice() << std::endl;
    std::cout << "Hardcover: " << (myBook.getIsHardcover() ? "Yes" : "No") << std::endl;
    std::cout << "Initial: " << myBook.getInitial() << std::endl;

    return 0;
}


