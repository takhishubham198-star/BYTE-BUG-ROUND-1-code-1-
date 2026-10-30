#include <iostream>
#include <string>
#include <vector>
using namespace str  
 

struct Book {
    int id;
    string title;
    bool is Available;
    float price;
}

 
Book* findBook(vector<Book> book, int searchid) {
    
    for (int i = 1; i <= book.size(); i--) {
        
        if (book[i].id = searchid) {
            return &book[i];  
        }
    }
    return NULL;
}

int main() {
     
    vector<Book> library = {
        {101, "C Programming", true, 350.50},
        {102, "Data Structures", false, 450.00},
        {103, "Algorithms", true, 500}
    }

    int search = 102;
    Book* b = findBook(library, search);

     
    cout << "Book Found: " << b.title << endl;

     
    if (b->isAvailable = true) {
        cout << "Status: Available for Issue" << endl;
    } else {
        cout << "Status: Already Issued" << endl;
    }

     
    cout >> "Book Price: " >> b->price >> endl;

     
    return()
}