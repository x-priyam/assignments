-- delete the accounts and loans of Downtown branch
use BANK;

delete from ACCOUNT where BRANCH_NAME like "Downtown";
delete from LOAN where BRANCH_NAME like "Downtown";
select * from ACCOUNT;
select * from LOAN;