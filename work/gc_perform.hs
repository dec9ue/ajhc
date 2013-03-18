import System.IO

main = sub [1..]

sub l = do
    print $ head l
    hFlush stdout
    sub $ mydrop 100000000 l

mydrop 0 l = l
mydrop n (head:tail) = mydrop (n - 1) tail

