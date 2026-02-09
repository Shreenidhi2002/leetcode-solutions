in solution 1.0;
the space complexity is O(1), since it made use of a single vector
The time complexity is O(n2):
How??

here it is, suppose the vector had n elements , in worst case scenario there would be
when i=0 -> n-1 number of comarisions
when i=1 -> n-2 number of comarisions
when i=2 -> n-3 number of comarisions
.
.
.
when i=n-2 -> 1 comparision

so the total number of comparision would be (n-1) + (n-2) + (n-3) +........+1
i.e , sum of n-1 natural numbers
the sum of n natural numbers is (n(n+1))/2

in our case its
((n-1)(n))/2 
= (n^2-n)/2
= n^2/2 -n/2 

when n is large we can ignore the lower order term and constants
hence the time complexity becomes O(n2)
