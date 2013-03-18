char jhc_c_compile[] = "gcc /tmp/jhc_WG95Uo/rts/profile.c /tmp/jhc_WG95Uo/rts/rts_support.c /tmp/jhc_WG95Uo/rts/gc_none.c /tmp/jhc_WG95Uo/rts/jhc_rts.c /tmp/jhc_WG95Uo/lib/lib_cbits.c /tmp/jhc_WG95Uo/rts/gc_jgc.c /tmp/jhc_WG95Uo/rts/stableptr.c -I/tmp/jhc_WG95Uo/cbits -I/tmp/jhc_WG95Uo gc_perform.c -o gc_perform.c '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC'";
char jhc_command[] = "jhc -C gc_perform.hs -o gc_perform.c";
char jhc_version[] = "jhc 0.8.1 (-0)";

#include "jhc_rts_header.h"
static struct s_cache *cCJhc_Prim_Prim_$x3a;
static struct s_cache *cFW$__fJhc_Inst_Enum_267__f;
static struct s_cache *cCJhc_Type_Basic_Integer;
static struct s_cache *cFR$__fJhc_Basics_$pp;
static struct s_cache *cFW$__fJhc_Inst_Show_showWordMax;
#include <stdio.h>

enum {
    CJhc_Prim_Prim_$BE = 1,
    CJhc_Prim_Prim_$LR = 0,
    CJhc_Prim_Prim_$x3a = 0,
    CJhc_Type_Basic_Char = 0
};
struct sCJhc_Prim_Prim_$x3a A_ALIGNED;
struct sCJhc_Type_Basic_Integer A_ALIGNED;
struct sFR$__fJhc_Basics_$pp A_ALIGNED;
struct sFW$__fJhc_Inst_Enum_267__f A_ALIGNED;
struct sFW$__fJhc_Inst_Show_showWordMax A_ALIGNED;
struct sFtheMain$d2 A_ALIGNED;

struct sCJhc_Prim_Prim_$x3a {
    sptr_t a1;
    sptr_t a2;
};

struct sCJhc_Type_Basic_Integer {
    uintmax_t a1;
};

struct sFR$__fJhc_Basics_$pp {
    fptr_t head;
    sptr_t a1;
    wptr_t a2;
};

struct sFW$__fJhc_Inst_Enum_267__f {
    fptr_t head;
    uintmax_t a1;
};

struct sFW$__fJhc_Inst_Show_showWordMax {
    fptr_t head;
    wptr_t a2;
    uintmax_t a1;
};

struct sFtheMain$d2 {
    fptr_t head;
};
void jhc_hs_init(void) ;
static wptr_t E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Inst_Enum_267__f(gc_t gc,struct sFW$__fJhc_Inst_Enum_267__f* arg) A_STD A_FALIGNED;
static wptr_t E__fW$__fJhc_Inst_Show_showWordMax(gc_t gc,struct sFW$__fJhc_Inst_Show_showWordMax* arg) A_STD A_FALIGNED;
static wptr_t E__ftheMain$d2(gc_t gc,struct sFtheMain$d2* arg) A_STD A_FALIGNED;
void _amain(void) ;
static void b__main(gc_t gc) A_STD;
static wptr_t fJhc_Basics_$pp(gc_t gc,wptr_t v132,wptr_t v134) A_STD A_MALLOC;
static wptr_t fJhc_IO_putErrLn(gc_t gc,wptr_t v76) A_STD A_MALLOC;
static wptr_t fPrelude_IO_putStrLn(gc_t gc,wptr_t v2030567967) A_STD A_MALLOC;
static wptr_t fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v101379726,wptr_t v23898644) A_STD A_MALLOC;
static wptr_t fW$__fInstance$__iJhc_Show_show_default(gc_t gc,uintmax_t v912793639) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Inst_Enum_267__f(gc_t gc,uintmax_t v108606838) A_STD A_MALLOC;
static wptr_t fW$__fJhc_Inst_Show_showWordMax(gc_t gc,uintmax_t v385490995,wptr_t v388767789) A_STD A_MALLOC;
static wptr_t fW$__fR$__fMain_mydrop(gc_t gc,uintmax_t v209724106,sptr_t v238022744) A_STD A_MALLOC;
static void ftheMain(gc_t gc) A_STD;
static wptr_t ftheMain$d2(gc_t gc) A_STD A_MALLOC;
struct tup1 {
    sptr_t t1;
    uintmax_t t0;
};
/* CAFS */
/* v-1454776341 = (FtheMain$2)*/
static node_t _g1454776341 = { .head = TO_FPTR(&E__ftheMain$d2) };
#define g1454776341 (MKLAZY_C(&_g1454776341))

/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Left &("CJhc.Prim.Prim.[]")],7) */
static const struct sCJhc_Prim_Prim_$x3a _c7 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c7 (TO_SPTR_C(P_WHNF, (sptr_t)&_c7))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 7],8) */
static const struct sCJhc_Prim_Prim_$x3a _c8 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c7};
#define c8 (TO_SPTR_C(P_WHNF, (sptr_t)&_c8))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 115),Right 8],9) */
static const struct sCJhc_Prim_Prim_$x3a _c9 = {.a1 = (sptr_t)RAW_SET_UF('s'), .a2 = c8};
#define c9 (TO_SPTR_C(P_WHNF, (sptr_t)&_c9))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 111),Right 9],10) */
static const struct sCJhc_Prim_Prim_$x3a _c10 = {.a1 = (sptr_t)RAW_SET_UF('o'), .a2 = c9};
#define c10 (TO_SPTR_C(P_WHNF, (sptr_t)&_c10))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 10],11) */
static const struct sCJhc_Prim_Prim_$x3a _c11 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c10};
#define c11 (TO_SPTR_C(P_WHNF, (sptr_t)&_c11))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 99),Right 11],12) */
static const struct sCJhc_Prim_Prim_$x3a _c12 = {.a1 = (sptr_t)RAW_SET_UF('c'), .a2 = c11};
#define c12 (TO_SPTR_C(P_WHNF, (sptr_t)&_c12))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 12],13) */
static const struct sCJhc_Prim_Prim_$x3a _c13 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c12};
#define c13 (TO_SPTR_C(P_WHNF, (sptr_t)&_c13))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 115),Right 13],14) */
static const struct sCJhc_Prim_Prim_$x3a _c14 = {.a1 = (sptr_t)RAW_SET_UF('s'), .a2 = c13};
#define c14 (TO_SPTR_C(P_WHNF, (sptr_t)&_c14))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 105),Right 14],15) */
static const struct sCJhc_Prim_Prim_$x3a _c15 = {.a1 = (sptr_t)RAW_SET_UF('i'), .a2 = c14};
#define c15 (TO_SPTR_C(P_WHNF, (sptr_t)&_c15))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 15],16) */
static const struct sCJhc_Prim_Prim_$x3a _c16 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c15};
#define c16 (TO_SPTR_C(P_WHNF, (sptr_t)&_c16))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 16],17) */
static const struct sCJhc_Prim_Prim_$x3a _c17 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c16};
#define c17 (TO_SPTR_C(P_WHNF, (sptr_t)&_c17))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 101),Right 17],18) */
static const struct sCJhc_Prim_Prim_$x3a _c18 = {.a1 = (sptr_t)RAW_SET_UF('e'), .a2 = c17};
#define c18 (TO_SPTR_C(P_WHNF, (sptr_t)&_c18))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 108),Right 18],19) */
static const struct sCJhc_Prim_Prim_$x3a _c19 = {.a1 = (sptr_t)RAW_SET_UF('l'), .a2 = c18};
#define c19 (TO_SPTR_C(P_WHNF, (sptr_t)&_c19))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Right 19],20) */
static const struct sCJhc_Prim_Prim_$x3a _c20 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = c19};
#define c20 (TO_SPTR_C(P_WHNF, (sptr_t)&_c20))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 110),Right 20],21) */
static const struct sCJhc_Prim_Prim_$x3a _c21 = {.a1 = (sptr_t)RAW_SET_UF('n'), .a2 = c20};
#define c21 (TO_SPTR_C(P_WHNF, (sptr_t)&_c21))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 97),Right 21],22) */
static const struct sCJhc_Prim_Prim_$x3a _c22 = {.a1 = (sptr_t)RAW_SET_UF('a'), .a2 = c21};
#define c22 (TO_SPTR_C(P_WHNF, (sptr_t)&_c22))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 104),Right 22],23) */
static const struct sCJhc_Prim_Prim_$x3a _c23 = {.a1 = (sptr_t)RAW_SET_UF('h'), .a2 = c22};
#define c23 (TO_SPTR_C(P_WHNF, (sptr_t)&_c23))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 32),Right 23],24) */
static const struct sCJhc_Prim_Prim_$x3a _c24 = {.a1 = (sptr_t)RAW_SET_UF(' '), .a2 = c23};
#define c24 (TO_SPTR_C(P_WHNF, (sptr_t)&_c24))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 58),Right 24],25) */
static const struct sCJhc_Prim_Prim_$x3a _c25 = {.a1 = (sptr_t)RAW_SET_UF(':'), .a2 = c24};
#define c25 (TO_SPTR_C(P_WHNF, (sptr_t)&_c25))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Left &("CJhc.Prim.Prim.[]")],1) */
static const struct sCJhc_Prim_Prim_$x3a _c1 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = (sptr_t)SET_RAW_TAG(CJhc_Prim_Prim_$BE)};
#define c1 (TO_SPTR_C(P_WHNF, (sptr_t)&_c1))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 117),Right 1],2) */
static const struct sCJhc_Prim_Prim_$x3a _c2 = {.a1 = (sptr_t)RAW_SET_UF('u'), .a2 = c1};
#define c2 (TO_SPTR_C(P_WHNF, (sptr_t)&_c2))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 111),Right 2],3) */
static const struct sCJhc_Prim_Prim_$x3a _c3 = {.a1 = (sptr_t)RAW_SET_UF('o'), .a2 = c2};
#define c3 (TO_SPTR_C(P_WHNF, (sptr_t)&_c3))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 100),Right 3],4) */
static const struct sCJhc_Prim_Prim_$x3a _c4 = {.a1 = (sptr_t)RAW_SET_UF('d'), .a2 = c3};
#define c4 (TO_SPTR_C(P_WHNF, (sptr_t)&_c4))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 116),Right 4],5) */
static const struct sCJhc_Prim_Prim_$x3a _c5 = {.a1 = (sptr_t)RAW_SET_UF('t'), .a2 = c4};
#define c5 (TO_SPTR_C(P_WHNF, (sptr_t)&_c5))
/* (HcNode CJhc.Prim.Prim.: [Left &("CJhc.Type.Basic.Char" 115),Right 5],6) */
static const struct sCJhc_Prim_Prim_$x3a _c6 = {.a1 = (sptr_t)RAW_SET_UF('s'), .a2 = c5};
#define c6 (TO_SPTR_C(P_WHNF, (sptr_t)&_c6))

const void * const nh_stuff[] = {
&_g1454776341, &_c1, &_c2, &_c3, &_c4, &_c5, &_c6, &_c7, &_c8,
&_c9, &_c10, &_c11, &_c12, &_c13, &_c14, &_c15, &_c16, &_c17,
&_c18, &_c19, &_c20, &_c21, &_c22, &_c23, &_c24, &_c25, NULL
};


void 
jhc_hs_init(void)
{
        find_cache(&cCJhc_Prim_Prim_$x3a,arena,TO_BLOCKS(sizeof(struct sCJhc_Prim_Prim_$x3a)),2);
        find_cache(&cFW$__fJhc_Inst_Enum_267__f,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Inst_Enum_267__f)),1);
        find_cache(&cCJhc_Type_Basic_Integer,arena,TO_BLOCKS(sizeof(struct sCJhc_Type_Basic_Integer)),0);
        find_cache(&cFR$__fJhc_Basics_$pp,arena,TO_BLOCKS(sizeof(struct sFR$__fJhc_Basics_$pp)),3);
        find_cache(&cFW$__fJhc_Inst_Show_showWordMax,arena,TO_BLOCKS(sizeof(struct sFW$__fJhc_Inst_Show_showWordMax)),2);
}

static wptr_t A_STD A_FALIGNED
E__fR$__fJhc_Basics_$pp(gc_t gc,struct sFR$__fJhc_Basics_$pp* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fR$__fJhc_Basics_$pp(gc,arg->a1,arg->a2);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_Inst_Enum_267__f(gc_t gc,struct sFW$__fJhc_Inst_Enum_267__f* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Inst_Enum_267__f(gc,arg->a1);
            update(arg,r);
            return r;
        }
}

static wptr_t A_STD A_FALIGNED
E__fW$__fJhc_Inst_Show_showWordMax(gc_t gc,struct sFW$__fJhc_Inst_Show_showWordMax* arg)
{
        {   wptr_t r;
            gc_frame0(gc,1,MKLAZY(arg));
            r = fW$__fJhc_Inst_Show_showWordMax(gc,arg->a1,arg->a2);
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
fJhc_Basics_$pp(gc_t gc,wptr_t v132,wptr_t v134)
{
        sptr_t v213 = demote(v132);
        return fR$__fJhc_Basics_$pp(gc,v213,v134);
}

static wptr_t A_STD A_MALLOC
fJhc_IO_putErrLn(gc_t gc,wptr_t v76)
{
        sptr_t v46435054;
        sptr_t v143 = demote(v76);
        v46435054 = v143;
        fR$__fJhc_IO_putErrLn__9:;
        {   wptr_t v100024 = eval(gc,v46435054);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100024) {
                saved_gc = gc;
                (void)jhc_utf8_putchar((int)10);
                return SET_RAW_TAG(CJhc_Prim_Prim_$LR);
            } else {
                sptr_t v78;
                sptr_t v80;
                /* ("CJhc.Prim.Prim.:" ni78 ni80) */
                v78 = ((struct sCJhc_Prim_Prim_$x3a*)v100024)->a1;
                v80 = ((struct sCJhc_Prim_Prim_$x3a*)v100024)->a2;
                {   uint32_t v206123614;
                    gc_frame0(gc,1,v80);
                    wptr_t v100026 = eval(gc,v78);
                    v206123614 = ((uint32_t)RAW_GET_UF(v100026));
                    uint32_t v101379730 = v206123614;
                    saved_gc = gc;
                    (void)jhc_utf8_putchar((int)v101379730);
                    v46435054 = v80;
                    goto fR$__fJhc_IO_putErrLn__9;
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fPrelude_IO_putStrLn(gc_t gc,wptr_t v2030567967)
{
        sptr_t v82;
        sptr_t v2030568021 = demote(v2030567967);
        v82 = v2030568021;
        fJhc_Monad_72__go__10:;
        {   wptr_t v100020 = eval(gc,v82);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100020) {
                SET_RAW_TAG(CJhc_Prim_Prim_$LR);
            } else {
                sptr_t v86;
                sptr_t v89;
                /* ("CJhc.Prim.Prim.:" ni86 ni89) */
                v86 = ((struct sCJhc_Prim_Prim_$x3a*)v100020)->a1;
                v89 = ((struct sCJhc_Prim_Prim_$x3a*)v100020)->a2;
                {   uint32_t v73153256;
                    gc_frame0(gc,1,v89);
                    wptr_t v100022 = eval(gc,v86);
                    v73153256 = ((uint32_t)RAW_GET_UF(v100022));
                    uint32_t v28485250 = v73153256;
                    saved_gc = gc;
                    (void)jhc_utf8_putchar((int)v28485250);
                    v82 = v89;
                    goto fJhc_Monad_72__go__10;
                }
            }
        }
        saved_gc = gc;
        (void)jhc_utf8_putchar((int)10);
        return SET_RAW_TAG(CJhc_Prim_Prim_$LR);
}

static wptr_t A_STD A_MALLOC
fR$__fJhc_Basics_$pp(gc_t gc,sptr_t v101379726,wptr_t v23898644)
{
        {   gc_frame0(gc,1,v23898644);
            wptr_t v100028 = eval(gc,v101379726);
            if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100028) {
                return v23898644;
            } else {
                sptr_t v136;
                sptr_t v138;
                /* ("CJhc.Prim.Prim.:" ni136 ni138) */
                v136 = ((struct sCJhc_Prim_Prim_$x3a*)v100028)->a1;
                v138 = ((struct sCJhc_Prim_Prim_$x3a*)v100028)->a2;
                {   gc_frame0(gc,2,v136,v138);
                    sptr_t x7 = s_alloc(gc,cFR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x7)->head = TO_FPTR(&E__fR$__fJhc_Basics_$pp);
                    ((struct sFR$__fJhc_Basics_$pp*)x7)->a1 = v138;
                    ((struct sFR$__fJhc_Basics_$pp*)x7)->a2 = v23898644;
                    sptr_t v53352308 = MKLAZY(x7);
                    {   gc_frame0(gc,1,v53352308);
                        wptr_t x8 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x8)->a1 = v136;
                        ((struct sCJhc_Prim_Prim_$x3a*)x8)->a2 = v53352308;
                        return x8;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fInstance$__iJhc_Show_show_default(gc_t gc,uintmax_t v912793639)
{
        uint16_t v100030 = (((intmax_t)0) > ((intmax_t)v912793639));
        if (0 == v100030) {
            return fW$__fJhc_Inst_Show_showWordMax(gc,v912793639,SET_RAW_TAG(CJhc_Prim_Prim_$BE));
        } else {
            /* 1 */
            assert(1 == v100030);
            uintmax_t v5952628 = (-((intmax_t)v912793639));
            sptr_t x5 = s_alloc(gc,cFW$__fJhc_Inst_Show_showWordMax);
            ((struct sFW$__fJhc_Inst_Show_showWordMax*)x5)->head = TO_FPTR(&E__fW$__fJhc_Inst_Show_showWordMax);
            ((struct sFW$__fJhc_Inst_Show_showWordMax*)x5)->a1 = v5952628;
            ((struct sFW$__fJhc_Inst_Show_showWordMax*)x5)->a2 = SET_RAW_TAG(CJhc_Prim_Prim_$BE);
            sptr_t v189363710 = MKLAZY(x5);
            {   gc_frame0(gc,1,v189363710);
                wptr_t x6 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                ((struct sCJhc_Prim_Prim_$x3a*)x6)->a1 = ((sptr_t)RAW_SET_UF('-'));
                ((struct sCJhc_Prim_Prim_$x3a*)x6)->a2 = v189363710;
                return x6;
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Inst_Enum_267__f(gc_t gc,uintmax_t v108606838)
{
        wptr_t x11 = s_alloc(gc,cCJhc_Type_Basic_Integer);
        ((struct sCJhc_Type_Basic_Integer*)x11)->a1 = v108606838;
        wptr_t v51 = x11;
        sptr_t v131100608 = demote(v51);
        uint16_t v100002 = (((intmax_t)v108606838) > ((intmax_t)prim_maxbound(uintmax_t)));
        if (0 == v100002) {
            uintmax_t v192800020 = (1 + v108606838);
            {   gc_frame0(gc,1,v131100608);
                sptr_t x12 = s_alloc(gc,cFW$__fJhc_Inst_Enum_267__f);
                ((struct sFW$__fJhc_Inst_Enum_267__f*)x12)->head = TO_FPTR(&E__fW$__fJhc_Inst_Enum_267__f);
                ((struct sFW$__fJhc_Inst_Enum_267__f*)x12)->a1 = v192800020;
                sptr_t v120941362 = MKLAZY(x12);
                {   gc_frame0(gc,1,v120941362);
                    wptr_t x13 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                    ((struct sCJhc_Prim_Prim_$x3a*)x13)->a1 = v131100608;
                    ((struct sCJhc_Prim_Prim_$x3a*)x13)->a2 = v120941362;
                    return x13;
                }
            }
        } else {
            /* 1 */
            assert(1 == v100002);
            return SET_RAW_TAG(CJhc_Prim_Prim_$BE);
        }
}

static wptr_t A_STD A_MALLOC
fW$__fJhc_Inst_Show_showWordMax(gc_t gc,uintmax_t v385490995,wptr_t v388767789)
{
        wptr_t v146554548;
        uintmax_t v2401352;
        v2401352 = v385490995;
        v146554548 = v388767789;
        fW$__fR$__fJhc_Inst_Show_showWordMax__2:;
        {   sptr_t v146554662 = demote(v146554548);
            uintmax_t v46435058 = (v2401352 / 10);
            uintmax_t v261071132 = (v2401352 % 10);
            uint32_t v215073716 = ((uint32_t)v261071132);
            uint32_t v2931306 = (48 + v215073716);
            uint32_t v38884152 = v2931306;
            {   gc_frame0(gc,1,v146554662);
                wptr_t v121 = RAW_SET_UF(v38884152);
                sptr_t v105640576 = demote(v121);
                if (0 == v46435058) {
                    {   gc_frame0(gc,1,v105640576);
                        wptr_t x3 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x3)->a1 = v105640576;
                        ((struct sCJhc_Prim_Prim_$x3a*)x3)->a2 = v146554662;
                        return x3;
                    }
                } else {
                    {   gc_frame0(gc,1,v105640576);
                        wptr_t x4 = s_alloc(gc,cCJhc_Prim_Prim_$x3a);
                        ((struct sCJhc_Prim_Prim_$x3a*)x4)->a1 = v105640576;
                        ((struct sCJhc_Prim_Prim_$x3a*)x4)->a2 = v146554662;
                        wptr_t v14 = x4;
                        v2401352 = v46435058;
                        v146554548 = v14;
                        goto fW$__fR$__fJhc_Inst_Show_showWordMax__2;
                    }
                }
            }
        }
}

static wptr_t A_STD A_MALLOC
fW$__fR$__fMain_mydrop(gc_t gc,uintmax_t v209724106,sptr_t v238022744)
{
        sptr_t v238022796;
        uintmax_t v209724157;
        v209724157 = v209724106;
        v238022796 = v238022744;
        bRfW$__fR$__fMain_mydrop__14:;
        {   if (0 == v209724157) {
                return eval(gc,v238022796);
            } else {
                sptr_t v46;
                uintmax_t v113;
                struct tup1 x15;
                wptr_t v100000 = eval(gc,v238022796);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100000) {
                    jhc_error("gc_perform.hs:10:12: Unmatched pattern");
                } else {
                    sptr_t v10;
                    /* ("CJhc.Prim.Prim.:" ni0 ni10) */
                    v10 = ((struct sCJhc_Prim_Prim_$x3a*)v100000)->a2;
                    uintmax_t v157435254 = (v209724157 - 1);
                    x15.t0 = v157435254;
                    x15.t1 = v10;
                }
                v113 = x15.t0;
                v46 = x15.t1;
                v209724157 = v113;
                v238022796 = v46;
                goto bRfW$__fR$__fMain_mydrop__14;
            }
        }
}

static void A_STD
ftheMain(gc_t gc)
{
        sptr_t v74832834;
        v74832834 = g1454776341;
        fR$__fMain_sub__16:;
        {   {   wptr_t v139;
                sptr_t v69;
                gc_frame0(gc,1,v74832834);
                wptr_t v100004 = eval(gc,v74832834);
                if (SET_RAW_TAG(CJhc_Prim_Prim_$BE) == v100004) {
                    jhc_error("Prelude.error: Prelude.head: empty list");
                } else {
                    wptr_t v100008;
                    sptr_t v154;
                    uintmax_t v131100618;
                    /* ("CJhc.Prim.Prim.:" ni154 ni0) */
                    v154 = ((struct sCJhc_Prim_Prim_$x3a*)v100004)->a1;
                    wptr_t v100006 = eval(gc,v154);
                    v131100618 = ((struct sCJhc_Type_Basic_Integer*)v100006)->a1;
                    v100008 = fW$__fInstance$__iJhc_Show_show_default(gc,v131100618);
                    fPrelude_IO_putStrLn(gc,v100008);
                    uintptr_t v253706802 = *((uintptr_t *)((uintptr_t)&stdout));
                    if (0 == v253706802) {
                        wptr_t v100012;
                        v100012 = fJhc_Basics_$pp(gc,PROMOTE(c6),PROMOTE(c25));
                        fJhc_IO_putErrLn(gc,v100012);
                        jhc_exit(255);
                    } else {
                        saved_gc = gc;
                        (void)fflush((FILE*)v253706802);
                    }
                    v69 = v74832834;
                }
                v139 = fW$__fR$__fMain_mydrop(gc,100000000,v69);
                sptr_t v167 = demote(v139);
                v74832834 = v167;
                goto fR$__fMain_sub__16;
            }
        }
        return;
}

static wptr_t A_STD A_MALLOC
ftheMain$d2(gc_t gc)
{
        return fW$__fJhc_Inst_Enum_267__f(gc,1);
}
