-- List loan data by desc amount and then increasing loan number
use BANK;

select * from LOAN order by AMOUNT desc, LOAN_NUMBER asc;