# mock-digital-retail-system

### This repo includes files for a project that implements the backend for a simplified version of an online retail system, such as Amazon.

A database of products from certain categories as well as users and their associated information is read in with a parser, and that data is used to model the information associated with the current retail system. Data will be stored and accessed in the following format:

//======================================================== <br />
<products> <br />
product_category <br />
name <br />
price <br />
quantity <br />
category-specific-info <br />
product_category <br />
name <br />
price <br />
quantity <br />
category-specific-info <br />
... <br />
</products> <br />
<users> <br />
username credit_amount type <br />
username credit_amount type <br />
... <br />
</users> <br />
//========================================================

My program allows user to interactively search for products based on certain keywords, returning the products that match the search. From those matches, my program allows a user to add select items to their "cart", view items in their cart, purchase the items in their cart, and saves the updated database of product and user information.

My system derives products from an abstract product base class. It currently supports 3 categories of derived products, each one with it's own unique, additional data. For example, in addition to the derived product data members, the "book" product supports an ISBN number and an author. The 3 categories of products supported are:
- Books
- Clothing
- Movies


