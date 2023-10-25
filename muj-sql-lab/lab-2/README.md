## Lab 2 Experiments
Create a Bank Database schema with the following relations.
```
account(account_number, branch_name, balance)
branch (branch_name, branch_city, assets)
customer (customer_name customer_street, customer_city)
loan (loan_number, branch_name, amount)
depositor(customer_name, account_number)
borrower(customer_name, loan_number)
```

### Account
| Field Name | Data Type | Constraint |
| --- | --- | --- |
| account_number | varchar(15) | Not null |
| branch_name | varchar(15) | Not null |
| balance | number | Primary key |

### Branch
| Field Name | Data Type | Constraint |
| --- | --- | --- |
| branch_name | varchar(15) | Not null |
| branch_city| varchar(15) | Not null |
| assets | varchar(15) | Primary key |

### Customer
| Field Name | Data Type | Constraint |
| --- | --- | --- |
| customer_name | varchar(15) | Not null |
| customer_street| varchar(15) | Not null |
| customer_city | varchar(15) | Primary key |

### Loan
| Field Name | Data Type | Constraint |
| --- | --- | --- |
| loan_number | varchar(15) | Not null |
| branch_name | varchar(15) | Not null |
| amount | number | Primary key |

### Despoitor
| Field Name | Data Type | Constraint |
| --- | --- | --- |
| customer_name | varchar(15) | Not null |
| loan_number | varchar(15) | Not null |

### Customer - Data
| Customer Name | Customer Street | Customer City |
| --- | --- | --- |
| Jones | Main | Harrison |
| Smith | Main | Rye |
| Hayes | Main | Harrison |
| Curry | North | Rye |
| Lindsay | Park | Pittsfield |
| Turner | Putnam | Stamford |
| Williams | Nassau | Princeton |
| Adams | Spring | Pittsfield |
| Johnson | Alma | Palo Alto |
| Glenn | Sand Hill | Woodside |
| Brooks | Senator | Brooklyn |
| Green | Walnut | Stamford |
| Jackson | University | Salt Lake |
| Majeris | First | Rye |
| McBride | Safety | Rye |

### Branch - Data
| Branch Name | Branch City | Assets |
| --- | --- | --- |
| Downtown | Brooklyn | 900000 |
| Redwood | Palo Alto | 2100000 |
| Perryridge | Horseneck | 1700000 |
| Mianus | Horseneck | 400200 |
| Round Hill | Horseneck | 8000000 |
| Pownall | Bennington | 400000 |
| North Town | Rye | 3700000 |
| Brighton | Brooklyn | 7000000 |
| Central | Rye | 400280 |

### Account - Data
| Account Number | Branch Name | Balance |
| --- | --- | --- |
| A-101 | Downtown | 500 |
| A-215 | Mianus | 700 |
| A-102 | Perryridge | 400 |
| A-305 | Round Hill | 350 |
| A-201 | Perryridge | 900 |
| A-222 | Redwood | 700 |
| A-217 | Brighton | 750 |
| A-333 | Central | 850 |
| A-444 | North Town | 625 |

### Depositor - Data
| Customer Name | Loan Number |
| --- | --- |
| Johnson | A-101 |
| Smith | A-215 |
| Hayes | A-102 |
| Hayes | A-101 |
| Turner | A-305 |
| Johnson | A-201 |
| Jones | A-217 |
| Lindsay | A-222 |
| Majeris | A-333 |
| Smith | A-444 |

### Loan - Data
| Loan Number | Branch Name | Account |
| --- | --- | --- |
| L-17 | Downtown | 1000 |
| L-23 | Redwood | 2000 |
| L-15 | Perryridge | 1500 |
| L-14 | Downtown | 1500 |
| L-93 | Mianus | 500 |
| L-11 | Round Hill | 900 |
| L-16 | Perryridge | 1300 |
| L-20 | North Town | 7500 |
| L-21 | Central | 570 |

### Borrower - Data
| Customer Name | Loan Number |
| --- | --- |
| Jones | L-17 |
| Smith | L-23 |
| Hayes | L-15 |
| Jackson | L-14 |
| Curry | L-93 |
| Smith | L-11 |
| Williams | L-17 |
| Adams | L-16 |
| McBride | L-20 |
| Smith | L-21 |

### Questions:
1. List all branch names and their assests.
2. List all accounts of `Perryridge` branch.
3. List all loans with `amount > 1000`.
4. List all accounts of `Perryridge` branch with `balance < 1000`.
5. List Numbers of accounts with balances between `700` and `900`.
6. Change the assests of Perryridge branch to `340000000`.
7. Transfer the accounts and loans of `Perryridge` branch to `Downtown` branch.
8.  Transfer `Rs. 100` from account `A-101` to `A-215`.
9. Delete the branch `Perryridge`.
10. Waive off all the loans with `amount < 1000`.
11. Delete the accounts and loans of `Downtown` branch.
12. Add a column `phoneNo` to `customer` table.
13. Change the size of the `branch_city` to `varchar(20)`.
14. Drop the column `phoneNo` from `customer` table.