1)Insertion in the middle (or begining) is costly.
2)Deletion from the middle (or begining) is costly.
More...


1)Given a sequence of items. Whenever we see an item x in the sequence we need to replace it with 5 instances of another item y.

i/p -> dea x        qqr x      py
o/p -> dea yyyyy    qqr yyyyy  py

here -:
1) normal array  -> here predefined size is there.
2) dynamic size -> vector or list double the size so its also not a gud approach.


2) we have multiple sorted sequences and we need merge them frequently.

sequences[]={{5,10,15,20},
             {1,12,18},
             {3,30,40},
             {100,200}}

1. merge(0,1)
2. merge(1,2)




To store these sequences using array always need a extra space.
but in linked list not needed.
