# digital-retail-system

### This repo includes files for a project that implements the backend for a simplified version of an online retail system, such as Amazon.

A database of products from certain categories as well as users and their associated information is read in with a parser, and that data is used to model the information associated with the current retail system. Reference the input.txt fike to see the format which data is stored and accessed in. Any amount of input data is supported as long as it is inputted in the specified format.

My program allows user to interactively search for products based on certain keywords, returning the products that match their search. From those matches, my program allows users to add select items to their "cart", view items in their cart, purchase the items in their cart, and saves the updated database of product and user information.

My system derives products from an abstract product base class. It currently supports 3 categories of derived products, each one with it's own unique, additional data. For example, in addition to the derived product data members, the "book" product supports an ISBN number and an author. The 3 categories of products supported are:
- Books
- Clothing
- Movies

Other product categories are supported and may be implemented by deriving a new category class from the abstract product class and implementing it in a similar fashion as book.cpp/book.h, clothing.cpp/clothing.h, and movie.cpp/movie.h.

amazon.cpp includes main() and the basic logic of the program. mydatastore.cpp is the second highest, and stores most important data and functionality. 

Thanks for reading! I hope you like my mock retail system!
