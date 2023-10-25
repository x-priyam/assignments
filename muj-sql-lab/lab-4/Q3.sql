use office;

alter table Employee add foreign key(DNo) references Department(DeptNo);