


SRCS+= ../rts/rts/profile.c ../rts/rts/rts_support.c ../rts/rts/gc_none.c ../rts/rts/jhc_rts.c ../rts/lib/lib_cbits.c ../rts/rts/gc_jgc.c ../rts/rts/stableptr.c 
#CFLAGS+='-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC'
CFLAGS+='-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -g -O0 '-D_JHC_GC=_JHC_GC_JGC'
CFLAGS+= -I../rts/lib/cbits -I../rts

all: test
gc_perform: gc_perform.c  $(SRCS)
	gcc $(SRCS) $(CFLAGS) -o $@ $<

test: test.c $(SRCS)
	gcc $(SRCS) $(CFLAGS) -o $@ $<


.hs.c:
	jhc -C $< -o $@

clean:
	rm -rfv test gc_perform

.SUFFIXES: .c .hs

#gcc ../rts/profile.c ../rts/rts_support.c ../rts/gc_none.c ../rts/jhc_rts.c ../lib/lib_cbits.c ../rts/gc_jgc.c ../rts/stableptr.c -I../cbits -I.. ../main_code.c -o gcperform_jhc '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC'


