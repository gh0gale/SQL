# Write your MySQL query statement below
SELECT p.product_name,SUM(o.unit) AS unit
FROM Products p
JOIN Orders o ON o.product_id = p.product_id
WHERE LEFT(order_date,7) = '2020-02'
GROUP BY o.product_id
HAVING SUM(o.unit) >= 100;



