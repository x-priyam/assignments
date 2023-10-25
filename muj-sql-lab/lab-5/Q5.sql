-- avg accoutn balance at perryridge branch
use BANK;

select avg(BALANCE) from ACCOUNT where BRANCH_NAME like "Perryridge";