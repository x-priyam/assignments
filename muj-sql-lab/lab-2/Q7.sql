-- Transfer the accounts and loans of perryridge branch to Downtown branch
use BANK;

update LOAN set BRANCH_NAME = "Downtown" where BRANCH_NAME like "Perryridge";
update ACCOUNT set BRANCH_NAME = "Downtown" where BRANCH_NAME like "Perryridge";
select * from LOAN;
select * from ACCOUNT;