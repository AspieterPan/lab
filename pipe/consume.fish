#!/usr/bin/env fish

set sum 0
while read -l line
    set sum (math "$sum + $line")
    echo "line: $line"
    echo "sum: $sum"
end
echo "Final sum: %sum"
