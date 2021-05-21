-- create a table
CREATE TABLE faculty_rec (
  id INTEGER PRIMARY KEY,
  name TEXT ,
  age INTEGER ,
  phno INTEGER,
  mode_of_transport TEXT,
  salary decimal,
  address TEXT
);
-- insert some values
INSERT INTO faculty_rec VALUES (1, 'Name1', '30','8881212','bus','15000','221b bakerstreet');
INSERT INTO faculty_rec VALUES (2, 'Name2', '35','8881212','bus','25000','221b nfc');
INSERT INTO faculty_rec VALUES (3, 'Name3', '40','8881212','car','35000','254r bakerstreet');
INSERT INTO faculty_rec VALUES (15, 'Name4', '45','8881212','bus','45000','221b parkstreet');
INSERT INTO faculty_rec VALUES (16, 'Name5', '25','8881212','car','10000','221b bakerstreet');
INSERT INTO faculty_rec VALUES (50, 'Name6', '50','8881212','bus','10050','225b parkstreet');
INSERT INTO faculty_rec VALUES (69, 'Name7', '47','8881212','metro','10500','221b bakerstreet');

-- fetch some values
SELECT* FROM faculty_rec;


Create view v1 as select id, name,address,salary from faculty_rec; 
Select * from v1; 
Insert into v1 values(151,"adff","fghl", 50000); 
Select * from v1; 
Delete from v1 where id=15;
Select * from v1;
Update v1 set salary=60000 where id=16; 
Select * from v1;
