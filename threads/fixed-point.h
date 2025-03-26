#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

typedef int32_t fixed_t;
#define FP_SHIFT_AMOUNT 14

#define FP_CONST(N) ((fixed_t)(N << FP_SHIFT_AMOUNT))
#define FP_FLOOR_INT(X) (X >> FP_SHIFT_AMOUNT)
#define FP_ROUND_INT(X) (X >= 0 ? FP_FLOOR_INT((X + (1 << (FP_SHIFT_AMOUNT-1)))) \
                                : FP_FLOOR_INT((X - (1 << (FP_SHIFT_AMOUNT-1)))))

#define FP_SUB(X, Y) (X - Y)
#define FP_SUB_INT(X, N) (X - (N << FP_SHIFT_AMOUNT))

#define FP_ADD(X, Y) (X + Y)
#define FP_ADD_INT(X, N) (X + (N << FP_SHIFT_AMOUNT))

#define FP_MUL(X, Y) ((fixed_t)((((int64_t) X) * Y) >> FP_SHIFT_AMOUNT))
#define FP_MUL_INT(X, N) (X * N)

#define FP_DIV(X, Y) ((fixed_t)((((int64_t) X) << FP_SHIFT_AMOUNT) / Y))
#define FP_DIV_INT(X, N) (X / N)

#endif /* threads/fixed-point.h */
