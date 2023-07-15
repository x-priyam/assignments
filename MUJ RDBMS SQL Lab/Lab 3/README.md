## Lab 3 Experiments
Create a Bank Database schema with the following relations.
```
account(account_number, branch_name, balance)
branch (branch_name, branch_city, assets)
customer (customer_name customer_street, customer_city)
loan (loan_number, branch_name, amount)
depositor(customer_name, account_number)
borrower(customer_name, loan_number) 
```

### Questions
1. For all customers who have a loan from the bank, find their names, loan numbers, and loan amount.
2.  Find the customer names, loan numbers, and loan amounts, for all loans at the Perryridge branch.
3. For all customers who have a loan from the bank, find their names and loan numbers with the attribute loan_number replaced by `loan_id`.
4. Find the names of all branches that have assets greater than atleast one branch located in Brooklyn.
5. Find the names of all customers whose name starts from R.