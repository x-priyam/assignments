-- Delete the branch perryridge
use BANK;

delete from BRANCH where BRANCH_NAME like "Perryridge";
select * from BRANCH;