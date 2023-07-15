-- avg account balance at each branch
use BANK;

select BRANCH_NAME, avg(BALANCE) from ACCOUNT group by BRANCH_NAME;