# Write your MySQL query statement below
select score , 
DENSE_RANK() Over (ORDER BY score DESC ) as  `rank`  
from scores
order by score desc