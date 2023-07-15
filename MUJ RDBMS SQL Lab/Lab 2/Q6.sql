-- change the assets of Perryridge branch to 340000000
use BANK;

update BRANCH set ASSETS = 340000000 where BRANCH_NAME like "Perryridge";
select * from BRANCH;