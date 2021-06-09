create table employees(employeenumber int,firstname varchar(20),lastname varchar(20)); 
insert into employees values(12,'a','nm'); 
insert into employees values(13,'g','b'); 
CREATE TABLE employees_audit 
(id INT AUTO_INCREMENT PRIMARY KEY, employeeNumber INT NOT NULL, lastname VARCHAR(50) NOT NULL,
changedat DATETIME DEFAULT NULL, action VARCHAR(50) DEFAULT NULL); 
CREATE TRIGGER after_employee_update after UPDATE ON employees 
FOR EACH ROW INSERT INTO employees_audit SET action = 'update',
employeeNumber = OLD.employeeNumber, lastname =new.lastname, changedat = NOW(); 

update employees set lastname='p' where employeenumber=12; 
select * from employees;
select * from employees_audit; 
