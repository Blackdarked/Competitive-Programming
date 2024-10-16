#!/bin/sh
# for i in 1 2 3 4 5
# do
#   echo "Looping ... number $i"
# done

# for i in hello 1 * 2 goodbye 
# do
#   echo "Looping ... i is set to $i"
# done

X=4
[ "$X" -ge "5" ] && echo "X is greater than or equal to 5" || \
[ "$X" -ge "3" ] && echo "X is greater than or equal to 3" || \
                    echo "X is less than 3"
