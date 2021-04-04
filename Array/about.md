# Array's are a type of data structure which stores data in an arrangement order of rows and columns.



arrays can be understood by

Grokking algorithm (pg:25)

sing an array means all your
tasks are stored contiguously (right next to each other) in memory.

It’s like going to a movie with your friends and finding a place to sit—
but another friend joins you, and there’s no place for them. You have to
move to a new spot where you all fit. In this case, you need to ask your
computer for a different chunk of memory that can fit four tasks. Then
you need to move all your tasks there.

If another friend comes by, you’re out of room again—and you all have
to move a second time! What a pain. Similarly, adding new items to
an array can be a big pain. If you’re out of space and need to move to a
new spot in memory every time, adding a new item will be really slow.
One easy fix is to “hold seats”: even if you have only 3 items in your task
list, you can ask the computer for 10 slots, just in case. Then you can
add 10 items to your task list without having to move. This is a good
workaround, but you should be aware of a couple of downsides:
• You may not need the extra slots that you asked for, and then that
memory will be wasted. You aren’t using it, but no one else can use
it either.
• You may add more than 10 items to your task list and have to
move anyway.