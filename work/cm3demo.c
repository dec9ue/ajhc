char jhc_c_compile[] = "gcc /tmp/jhc_lbfTyG/rts/profile.c /tmp/jhc_lbfTyG/rts/rts_support.c /tmp/jhc_lbfTyG/rts/gc_none.c /tmp/jhc_lbfTyG/rts/jhc_rts.c /tmp/jhc_lbfTyG/lib/lib_cbits.c /tmp/jhc_lbfTyG/rts/gc_jgc.c /tmp/jhc_lbfTyG/rts/stableptr.c -I/tmp/jhc_lbfTyG/cbits -I/tmp/jhc_lbfTyG hs_main.c -o hs_main.c '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC'";
char jhc_command[] = "ajhc -fffi -C -o hs_main.c hs_src/Main.hs";
char jhc_version[] = "ajhc 0.8.0.0 (-0)";
 
#include "jhc_rts_header.h"
static struct s_cache *cCJhc_Prim_Prim_$x3a;
static struct s_cache *cFR$__fJhc_Basics_concat;
static struct s_cache *cFR$__fJhc_Basics_zipWith;
static struct s_cache *cFR$__fJhc_Basics_$pp;
static struct s_cache *cBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036;
static struct s_cache *cFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE;
static struct s_cache *cP1__Main_ledOff;
static struct s_cache *cP1__Main_ledOn;
#include <c_extern.h>
 
enum {
CJhc_Prim_Prim_$BE = 1,
CJhc_Prim_Prim_$LR = 0,
CJhc_Prim_Prim_$x3a = 0,
CJhc_Type_Word_Word16 = 0,
P1__Main_ledOff = 0,
P1__Main_ledOn = 1,
P1__theMain$d3 = 2,
P1__theMain$d6 = 3,
P1__theMain$d8 = 4,
P2__Main_ledOff = 5,
P2__Main_ledOn = 6
};
struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036 A_ALIGNED;
struct sCJhc_Prim_Prim_$x3a A_ALIGNED;
struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE A_ALIGNED;
struct sFR$__fJhc_Basics_$pp A_ALIGNED;
struct sFR$__fJhc_Basics_concat A_ALIGNED;
struct sFR$__fJhc_Basics_zipWith A_ALIGNED;
struct sFtheMain$d2 A_ALIGNED;
struct sFtheMain$d4 A_ALIGNED;
struct sP1__Main_ledOff A_ALIGNED;
struct sP1__Main_ledOn A_ALIGNED;
 
struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036 {
fptr_t head;
wptr_t a1;
sptr_t a2;
};
 
struct sCJhc_Prim_Prim_$x3a {
sptr_t a1;
sptr_t a2;
};
 
struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE {
fptr_t head;
wptr_t a1;
sptr_t a2;
};
 
struct sFR$__fJhc_Basics_$pp {
fptr_t head;
sptr_t a1;
wptr_t a2;
};
 
struct sFR$__fJhc_Basics_concat {
fptr_t head;
wptr_t a1;
};
 
struct sFR$__fJhc_Basics_zipWith {
fptr_t head;
sptr_t a1;
sptr_t a2;
};
 
struct sFtheMain$d2 {
fptr_t head;
};
 
struct sFtheMain$d4 {
fptr_t head;
};
 
struct sP1__Main_ledOff {
what_t what;
sptr_t a1;
};
 
struct sP1__Main_ledOn {
what_t what;
sptr_t a1;
};
void jhc_hs_init(void) ;
static wptr_t E__bap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036(gc_t gc,struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036* arg) A_STD A_FALIGNED;
static wptr_t E__fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE(gc_t gc,struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_concat(gc_t gc,struct sFR$__fJhc_Basics_concat* arg) A_STD A_FALIGNED;
static wptr_t E__fR$__fJhc_Basics_zipWith(gc_t gc,struct sFR$__fJhc_Basics_zipWith* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d2(gc_t gc,struct sFtheMain$d2* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d4(gc_t gc,struct sFtheMain$d4* arg) A_STD A_FALIGNED;
void _amain(void) ;
static void b__main(gc_t gc) A_STD;
static wptr_t bap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036(gc_t gc,wptr_t v72,sptr_t v83) A_STD A_MALLOC;
static sptr_t bapply__2278(gc_t gc,wptr_t v4) A_STD A_MALLOC;
static wptr_t bapply__2279(gc_t gc,wptr_t v1,sptr_t v2) A_STD A_MALLOC;
static wptr_t fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE(gc_t gc,wptr_t v28,sptr_t v30) A_STD A_MALLOC;
static wptr_t fJhc_Monad_sequence__(gc_t gc,wptr_t v112204833) A_STD A_MALLOC;
static sptr_t fMain_ledOff(gc_t gc,sptr_t v119549088) A_STD A_MALLOC;
static sptr_t fMain_ledOn(gc_t gc,sptr_t v110947992) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v216085090,wptr_t v29534740) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_concat(gc_t gc,wptr_t v216085086) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_zipWith(gc_t gc,sptr_t v182639120,sptr_t v153480248) A_STD A_MALLOC;
static wptr_t fW$__fMain_ledOff(gc_t gc,uint16_t v678435873) A_STD A_MALLOC;
static wptr_t fW$__fMain_ledOn(gc_t gc,uint16_t v676338721) A_STD A_MALLOC;
static void ftheMain(gc_t gc) A_STD;
static wptr_t ftheMain$d2(gc_t gc) A_STD A_MALLOC;
static sptr_t ftheMain$d3(gc_t gc) A_STD A_MALLOC;
static wptr_t ftheMain$d4(gc_t gc) A_STD A_MALLOC;
static sptr_t ftheMain$d6(gc_t gc) A_STD A_MALLOC;
static sptr_t ftheMain$d8(gc_t gc) A_STD A_MALLOC;
/* CAFS */
/* v-909646869 = (FtheMain$4)*/
static node_t _g909646869 = { .head = TO_FPTR(&E__ftheMain$d4) };
#define g909646869 (MKLAZY_C(&_g909646869))
 
/* v-906763285 = (FtheMain$2)*/
static node_t _g906763285 = { .head = TO_FPTR(&E__ftheMain$d2) };
#define g906763285 (MKLAZY_C(&_g906763285))
 
/* (HcNode CJhc.Prim.Prim.: [Left &("P1_theMain$6"),Left ni-906763285],8) */
static const struct sCJhc_Prim_Prim_$x3a _c8 = {.a1 = (sptr_t)SET_RAW_TAG(P1__theMain$d6), .a2 = g906763285};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))
/* (HcNode CJhc.Prim.Prim.: [Left &("P1_theMain$3"),Left ni-909646869],9) */
static const struct sCJhc_Prim_Prim_$x3a _c9 = {.a1 = (sptr_t)SET_RAW_TAG(P1__theMain$d3), .a2 = g909646869};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Word.Word16" 8192),Left &("CJhc.Prim.Prim.[]")],1) */
static const struct sCJhc_Prim_Prim_$x3a _c1 = {.a1 = (sptr_t)RAW_SET_UF(8192), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Word.Word16" 4096),Right 1],2) */
static const struct sCJhc_Prim_Prim_$x3a _c2 = {.a1 = (sptr_t)RAW_SET_UF(4096), .a2 = c1};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Word.Word16" 16384),Right 2],3) */
static const struct sCJhc_Prim_Prim_$x3a _c3 = {.a1 = (sptr_t)RAW_SET_UF(16384), .a2 = c2};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Word.Word16" 2048),Right 3],4) */
static const struct sCJhc_Prim_Prim_$x3a _c4 = {.a1 = (sptr_t)RAW_SET_UF(2048), .a2 = c3};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Word.Word16" 32768),Right 4],5) */
static const struct sCJhc_Prim_Prim_$x3a _c5 = {.a1 = (sptr_t)RAW_SET_UF(32768), .a2 = c4};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Word.Word16" 1024),Right 5],6) */
static const struct sCJhc_Prim_Prim_$x3a _c6 = {.a1 = (sptr_t)RAW_SET_UF(1024), .a2 = c5};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Word.Word16" 256),Right 6],7) */
static const struct sCJhc_Prim_Prim_$x3a _c7 = {.a1 = (sptr_t)RAW_SET_UF(256), .a2 = c6};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
 
const void * const nh_stuff[] = {
&_g909646869, &_g906763285, &_c1, &_c2, &_c3, &_c4, &_c5, &_c6,
&_c7, &_c8, &_c9, NULL
};
 
 
void
jhc_hs_init(void)
{
find_cache(&cCJhc_Prim_Prim_$x3a,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$x3a)),2);
find_cache(&cFR$__fJhc_Basics_concat,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_concat)),2);
find_cache(&cFR$__fJhc_Basics_zipWith,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_zipWith)),3);
find_cache(&cFR$__fJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_$pp)),3);
find_cache(&cBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036,arena,TO_BLOCKS(sizeof(struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036)),3);
find_cache(&cFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE,arena,TO_BLOCKS(sizeof(struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE)),3);
find_cache(&cP1__Main_ledOff,arena,TO_BLOCKS(sizeof(struct sP1__Main_ledOff)),2);
find_cache(&cP1__Main_ledOn,arena,TO_BLOCKS(sizeof(struct sP1__Main_ledOn)),2);
}
 
static wptr_t A_STD A_FALIGNED
E__bap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036(gc_t gc,struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036* arg)
{
{ wptr_t r;
gc_frame0(gc,1,MKLAZY(arg));
r = bap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036(gc,arg->a1,arg->a2);
update(arg,r);
return r;
}
}
 
static wptr_t A_STD A_FALIGNED
E__fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE(gc_t gc,struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE* arg)
{
{ wptr_t r;
gc_frame0(gc,1,MKLAZY(arg));
r = fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE(gc,arg->a1,arg->a2);
update(arg,r);
return r;
}
}
 
static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg)
{
{ wptr_t r;
gc_frame0(gc,1,MKLAZY(arg));
r = fR$__fJhc_Basics_$pp(gc,arg->a1,arg->a2);
update(arg,r);
return r;
}
}
 
static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_concat(gc_t gc,struct sFR$__fJhc_Basics_concat* arg)
{
{ wptr_t r;
gc_frame0(gc,1,MKLAZY(arg));
r = fR$__fJhc_Basics_concat(gc,arg->a1);
update(arg,r);
return r;
}
}
 
static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_zipWith(gc_t gc,struct sFR$__fJhc_Basics_zipWith* arg)
{
{ wptr_t r;
gc_frame0(gc,1,MKLAZY(arg));
r = fR$__fJhc_Basics_zipWith(gc,arg->a1,arg->a2);
update(arg,r);
return r;
}
}
 
static wptr_t A_STD A_FALIGNED
E__ftheMain$d2(gc_t gc,struct sFtheMain$d2* arg)
{
wptr_t r;
r = ftheMain$d2(gc);
update(arg,r);
gc_add_root(gc,(sptr_t)r);
return r;
}
 
static wptr_t A_STD A_FALIGNED
E__ftheMain$d4(gc_t gc,struct sFtheMain$d4* arg)
{
wptr_t r;
r = ftheMain$d4(gc);
update(arg,r);
gc_add_root(gc,(sptr_t)r);
return r;
}
 
void
_amain(void)
{
return (void)b__main(saved_gc);
}
 
static void A_STD
b__main(gc_t gc)
{
return ftheMain(gc);
}
 
static wptr_t A_STD A_MALLOC
bap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036(gc_t gc,wptr_t v72,sptr_t v83)
{
return bapply__2279(gc,v72,v83);
}
 
static sptr_t A_STD A_MALLOC
bapply__2278(gc_t gc,wptr_t v4)
{
switch (FETCH_TAG(v4)) {
case P1__Main_ledOn:
{ sptr_t v3;
v3 = ((struct sP1__Main_ledOn*)v4)->a1;
return fMain_ledOn(gc,v3);
}
break;
case P1__Main_ledOff:
{ sptr_t v8;
v8 = ((struct sP1__Main_ledOff*)v4)->a1;
return fMain_ledOff(gc,v8);
}
break;
case P1__theMain$d3:
{ return ftheMain$d3(gc);
}
break;
case P1__theMain$d6:
{ return ftheMain$d6(gc);
}
break;
case P1__theMain$d8:
{ return ftheMain$d8(gc);
}
break;
default: jhc_case_fell_off(__LINE__);
}
}
 
static wptr_t A_STD A_MALLOC
bapply__2279(gc_t gc,wptr_t v1,sptr_t v2)
{
if (SET_RAW_TAG(P2__Main_ledOn) == v1) {
{ gc_frame0(gc,1,v2);
wptr_t x2 = s_alloc(gc,cP1__Main_ledOn);
SET_MEM_TAG((struct sP1__Main_ledOn*)x2,P1__Main_ledOn);
((struct sP1__Main_ledOn*)x2)->a1 = v2;
return x2;
}
} else {
/* ("P2_Main.ledOff") */
{ gc_frame0(gc,1,v2);
wptr_t x3 = s_alloc(gc,cP1__Main_ledOff);
SET_MEM_TAG((struct sP1__Main_ledOff*)x3,P1__Main_ledOff);
((struct sP1__Main_ledOff*)x3)->a1 = v2;
return x3;
}
}
}
 
static wptr_t A_STD A_MALLOC
fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE(gc_t gc,wptr_t v28,sptr_t v30)
{
{ gc_frame0(gc,1,v28);
wptr_t v100034 = eval(gc,v30);
if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100034) {
return v100034;
} else {
sptr_t v32;
sptr_t v34;
/* ("CJhc.Prim.Prim.:" ni32 ni34) */
v32 = ((struct sCJhc_Prim_Prim_$x3a*)v100034)->a1;
v34 = ((struct sCJhc_Prim_Prim_$x3a*)v100034)->a2;
{ gc_frame0(gc,2,v32,v34);
sptr_t x4 = s_alloc(gc,cFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE);
((struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE*)x4)->head = TO_FPTR(&E__fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE);
((struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE*)x4)->a1 = v28;
((struct sFInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE*)x4)->a2 = v34;
sptr_t v250976806 = MKLAZY(x4);
{ gc_frame0(gc,1,v250976806);
sptr_t x5 = s_alloc(gc,cBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036);
((struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036*)x5)->head = TO_FPTR(&E__bap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036);
((struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036*)x5)->a1 = v28;
((struct sBap__1__Instance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BEu100036*)x5)->a2 = v32;
sptr_t v15832350 = MKLAZY(x5);
{ gc_frame0(gc,1,v15832350);
wptr_t x6 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
((struct sCJhc_Prim_Prim_$x3a*)x6)->a1 = v15832350;
((struct sCJhc_Prim_Prim_$x3a*)x6)->a2 = v250976806;
return x6;
}
}
}
}
}
}
 
static wptr_t A_STD A_MALLOC
fJhc_Monad_sequence__(gc_t gc,wptr_t v112204833)
{
sptr_t v230599642;
sptr_t v112204914 = demote(v112204833);
v230599642 = v112204914;
fR$__fJhc_Monad_89__f__7:;
{ wptr_t v100030 = eval(gc,v230599642);
if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100030) {
return SET_RAW_TAG(CJhc_Prim_Prim_$LR);
} else {
sptr_t v109;
sptr_t v26;
/* ("CJhc.Prim.Prim.:" ni109 ni26) */
v109 = ((struct sCJhc_Prim_Prim_$x3a*)v100030)->a1;
v26 = ((struct sCJhc_Prim_Prim_$x3a*)v100030)->a2;
{ gc_frame0(gc,1,v26);
wptr_t v100032 = eval(gc,v109);
bapply__2278(gc,v100032);
v230599642 = v26;
goto fR$__fJhc_Monad_89__f__7;
}
}
}
}
 
static sptr_t A_STD A_MALLOC
fMain_ledOff(gc_t gc,sptr_t v119549088)
{
wptr_t v71;
uint16_t v216085096;
wptr_t v100026 = eval(gc,v119549088);
v216085096 = ((uint16_t)RAW_GET_UF(v100026));
v71 = fW$__fMain_ledOff(gc,v216085096);
return demote(v71);
}
 
static sptr_t A_STD A_MALLOC
fMain_ledOn(gc_t gc,sptr_t v110947992)
{
wptr_t v79;
uint16_t v68216828;
wptr_t v100028 = eval(gc,v110947992);
v68216828 = ((uint16_t)RAW_GET_UF(v100028));
v79 = fW$__fMain_ledOn(gc,v68216828);
return demote(v79);
}
 
static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v216085090,wptr_t v29534740)
{
{ gc_frame0(gc,1,v29534740);
wptr_t v100024 = eval(gc,v216085090);
if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100024) {
return v29534740;
} else {
sptr_t v106;
sptr_t v108;
/* ("CJhc.Prim.Prim.:" ni106 ni108) */
v106 = ((struct sCJhc_Prim_Prim_$x3a*)v100024)->a1;
v108 = ((struct sCJhc_Prim_Prim_$x3a*)v100024)->a2;
{ gc_frame0(gc,2,v106,v108);
sptr_t x8 = s_alloc(gc,cFR$__fJhc_Basics_$pp);
((struct sFR$__fJhc_Basics_$pp*)x8)->head = TO_FPTR(&E__fR$__fJhc_Basics_$pp);
((struct sFR$__fJhc_Basics_$pp*)x8)->a1 = v108;
((struct sFR$__fJhc_Basics_$pp*)x8)->a2 = v29534740;
sptr_t v69834446 = MKLAZY(x8);
{ gc_frame0(gc,1,v69834446);
wptr_t x9 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
((struct sCJhc_Prim_Prim_$x3a*)x9)->a1 = v106;
((struct sCJhc_Prim_Prim_$x3a*)x9)->a2 = v69834446;
return x9;
}
}
}
}
}
 
static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_concat(gc_t gc,wptr_t v216085086)
{
sptr_t v216085128;
sptr_t v216085113 = demote(v216085086);
v216085128 = v216085113;
bRfR$__fJhc_Basics_concat__14:;
{ wptr_t v100000 = eval(gc,v216085128);
if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100000) {
return v100000;
} else {
sptr_t v116;
sptr_t v52;
/* ("CJhc.Prim.Prim.:" ni52 ni116) */
v52 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a1;
v116 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a2;
{ gc_frame0(gc,1,v116);
wptr_t v100002 = eval(gc,v52);
if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100002) {
v216085128 = v116;
goto bRfR$__fJhc_Basics_concat__14;
} else {
sptr_t v168;
sptr_t v50;
/* ("CJhc.Prim.Prim.:" ni168 ni50) */
v168 = ((struct sCJhc_Prim_Prim_$x3a*)v100002)->a1;
v50 = ((struct sCJhc_Prim_Prim_$x3a*)v100002)->a2;
{ gc_frame0(gc,2,v50,v168);
wptr_t x15 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
((struct sCJhc_Prim_Prim_$x3a*)x15)->a1 = v50;
((struct sCJhc_Prim_Prim_$x3a*)x15)->a2 = v116;
wptr_t v59 = x15;
{ gc_frame0(gc,1,v59);
sptr_t x16 = s_alloc(gc,cFR$__fJhc_Basics_concat);
((struct sFR$__fJhc_Basics_concat*)x16)->head = TO_FPTR(&E__fR$__fJhc_Basics_concat);
((struct sFR$__fJhc_Basics_concat*)x16)->a1 = v59;
sptr_t v2131150 = MKLAZY(x16);
{ gc_frame0(gc,1,v2131150);
wptr_t x17 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
((struct sCJhc_Prim_Prim_$x3a*)x17)->a1 = v168;
((struct sCJhc_Prim_Prim_$x3a*)x17)->a2 = v2131150;
return x17;
}
}
}
}
}
}
}
}
 
static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_zipWith(gc_t gc,sptr_t v182639120,sptr_t v153480248)
{
{ gc_frame0(gc,1,v153480248);
wptr_t v100020 = eval(gc,v182639120);
if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100020) {
return v100020;
} else {
sptr_t v80;
sptr_t v86;
/* ("CJhc.Prim.Prim.:" ni80 ni86) */
v80 = ((struct sCJhc_Prim_Prim_$x3a*)v100020)->a1;
v86 = ((struct sCJhc_Prim_Prim_$x3a*)v100020)->a2;
{ gc_frame0(gc,2,v80,v86);
wptr_t v100022 = eval(gc,v153480248);
if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100022) {
return v100022;
} else {
sptr_t v44;
sptr_t v90;
/* ("CJhc.Prim.Prim.:" ni90 ni44) */
v90 = ((struct sCJhc_Prim_Prim_$x3a*)v100022)->a1;
v44 = ((struct sCJhc_Prim_Prim_$x3a*)v100022)->a2;
{ gc_frame0(gc,2,v44,v90);
sptr_t x10 = s_alloc(gc,cFR$__fJhc_Basics_zipWith);
((struct sFR$__fJhc_Basics_zipWith*)x10)->head = TO_FPTR(&E__fR$__fJhc_Basics_zipWith);
((struct sFR$__fJhc_Basics_zipWith*)x10)->a1 = v86;
((struct sFR$__fJhc_Basics_zipWith*)x10)->a2 = v44;
sptr_t v248061794 = MKLAZY(x10);
{ gc_frame0(gc,1,v248061794);
wptr_t x11 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
((struct sCJhc_Prim_Prim_$x3a*)x11)->a1 = v90;
((struct sCJhc_Prim_Prim_$x3a*)x11)->a2 = ((sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE));
wptr_t v104 = x11;
sptr_t v72252072 = demote(v104);
{ gc_frame0(gc,1,v72252072);
wptr_t x12 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
((struct sCJhc_Prim_Prim_$x3a*)x12)->a1 = v80;
((struct sCJhc_Prim_Prim_$x3a*)x12)->a2 = v72252072;
wptr_t v100 = x12;
sptr_t v229109160 = demote(v100);
{ gc_frame0(gc,1,v229109160);
wptr_t x13 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
((struct sCJhc_Prim_Prim_$x3a*)x13)->a1 = v229109160;
((struct sCJhc_Prim_Prim_$x3a*)x13)->a2 = v248061794;
return x13;
}
}
}
}
}
}
}
}
}
 
static wptr_t A_STD A_MALLOC
fW$__fMain_ledOff(gc_t gc,uint16_t v678435873)
{
*((uint16_t *)(1207963688 + ((uintptr_t)&jhc_zeroAddress))) = v678435873;
return SET_RAW_TAG(CJhc_Prim_Prim_$LR);
}
 
static wptr_t A_STD A_MALLOC
fW$__fMain_ledOn(gc_t gc,uint16_t v676338721)
{
*((uint16_t *)(1207963672 + ((uintptr_t)&jhc_zeroAddress))) = v676338721;
return SET_RAW_TAG(CJhc_Prim_Prim_$LR);
}
 
static void A_STD
ftheMain(gc_t gc)
{
fR$__fControl_Monad_forever__18:;
{ wptr_t v100004;
v100004 = fR$__fJhc_Basics_$pp(gc,c8,PROMOTE(c9));
sptr_t v152834595 = demote(v100004);
{ wptr_t v100012;
wptr_t v100016;
gc_frame0(gc,1,v152834595);
wptr_t x19 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
wptr_t v65 = x19;
sptr_t v151392791 = demote(v65);
((struct sCJhc_Prim_Prim_$x3a*)FROM_SPTR(v151392791))->a1 = ((sptr_t)SET_RAW_TAG(P1__theMain$d8));
((struct sCJhc_Prim_Prim_$x3a*)FROM_SPTR(v151392791))->a2 = v151392791;
v100012 = fR$__fJhc_Basics_zipWith(gc,v152834595,v151392791);
v100016 = fR$__fJhc_Basics_concat(gc,v100012);
fJhc_Monad_sequence__(gc,v100016);
goto fR$__fControl_Monad_forever__18;
}
}
return;
}
 
static wptr_t A_STD A_MALLOC
ftheMain$d2(gc_t gc)
{
return fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE(gc,SET_RAW_TAG(P2__Main_ledOn),c7);
}
 
static sptr_t A_STD A_MALLOC
ftheMain$d3(gc_t gc)
{
*((uint16_t *)(1207963688 + ((uintptr_t)&jhc_zeroAddress))) = 512;
return (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$LR);
}
 
static wptr_t A_STD A_MALLOC
ftheMain$d4(gc_t gc)
{
return fInstance$__iJhc_Monad_fmap_Jhc_Prim_Prim_$BE(gc,SET_RAW_TAG(P2__Main_ledOff),c7);
}
 
static sptr_t A_STD A_MALLOC
ftheMain$d6(gc_t gc)
{
*((uint16_t *)(1207963672 + ((uintptr_t)&jhc_zeroAddress))) = 512;
return (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$LR);
}
 
static sptr_t A_STD A_MALLOC
ftheMain$d8(gc_t gc)
{
saved_gc = gc;
(void)Delay((uint32_t)1);
return (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$LR);
}
