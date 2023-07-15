-- find the names of all branches that have assets
-- greater then atleast one branch
-- located in Brooklyn
use BANK;

select BRANCH_NAME from BRANCH where ASSETS > (select min(ASSETS) from BRANCH where BRANCH_CITY like "Brooklyn");