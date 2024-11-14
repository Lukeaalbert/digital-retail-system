# digital retail system

### This repo includes files for a project that implements the backend for a simplified version of an online retail system, such as Amazon.

Once this program is run, a database of products from certain categories, as well as users and their associated information, is read in with a parser. The parsed data is used to model the information associated with the current retail system. See input.txt for an example of the format that data is stored and accessed in.

The system allows users to interactively search for products based on certain keywords, returning the products that match their search. From those matches, the program allows users to add selected items to their "cart", view items in their cart, purchase the items in their cart, and save the updated database of product and user information.

My system supports 3 categories of products, each one containing shared product attributes and unique product attributes. This was implemented using inheritance from an abstract base class. For example, in addition to its shared attributes, the "book" product supports an ISBN number and an author. The 3 categories of products supported are:
- Books
- Clothing
- Movies

Other product categories are supported and may be implemented by deriving a new class from the abstract product class and implementing it in a similar fashion as book.cpp/book.h, clothing.cpp/clothing.h, and movie.cpp/movie.h.

amazon.cpp includes main() and the basic logic of the program.

Thanks for reading! I hope you enjoy! - Luke Albert (^▽^)
