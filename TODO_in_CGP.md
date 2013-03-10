TODO in Concurrent GC with pthread
=======
This is a topic branch for concurrent GC.

TODO
----

* add marking bitarray for Concurrent GC
    - malloc-ed bitarray for cached objects
    - additional area for monolithic objects
* separate GC functions from Mutator I/F
* implement Snapshot GC of JGC
    - marking algorithm
    - write barrier
    - snapshot gc frame 



