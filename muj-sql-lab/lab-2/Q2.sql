-- List all accounts of Perryridge branch
use BANK;

select ACCOUNT_NUMBER from ACCOUNT where BRANCH_NAME like "Perryridge";
