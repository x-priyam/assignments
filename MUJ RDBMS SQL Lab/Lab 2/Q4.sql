-- List all accounts of Perryridge branch where balance < 1000
use BANK;

select ACCOUNT_NUMBER from ACCOUNT where BRANCH_NAME like "Perryridge" and BALANCE < 1000;