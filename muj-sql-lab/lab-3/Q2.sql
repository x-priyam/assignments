-- Find the customer name, loan numbers and loan amounts
-- for all loans at the Perryridge Branch
use BANK;

select BORROWER.CUSTOMER_NAME, LOAN.LOAN_NUMBER, LOAN.AMOUNT from BORROWER, LOAN where LOAN.LOAN_NUMBER = BORROWER.LOAN_NUMBER AND LOAN.BRANCH_NAME like "Perryridge";