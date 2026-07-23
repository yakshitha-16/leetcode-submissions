# Write your MySQL query statement below
select c.name AS Customers 
from Customers c 
Left Join Orders o 
ON c.id = o.CustomerId 
Where o.CustomerID IS null 