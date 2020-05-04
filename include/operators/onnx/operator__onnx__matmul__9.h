
//this file was generated by ../../scripts/onnx_generator/OperatorHeader.py
# ifndef OPERATOR_OPERATOR__ONNX__MATMUL__9_H
# define OPERATOR_OPERATOR__ONNX__MATMUL__9_H

# include "operators/operator.h"
# include "operators/operator_stub.h"

typedef struct operator_context_input__operator__onnx__matmul__9 {
    size_t length;
    operator_tensor *A;
operator_tensor *B;
} operator_context_input_operator__onnx__matmul__9;

typedef struct operator_context_output__operator__onnx__matmul__9 {
    size_t length;
    operator_tensor *Y;
} operator_context_output_operator__onnx__matmul__9;

typedef struct operator_context_attribute__operator__onnx__matmul__9 {
    size_t length;
    
} operator_context_attribute_operator__onnx__matmul__9;

typedef struct operator_context__operator__onnx__matmul__9 {
    struct operator_context_input__operator__onnx__matmul__9     *input;
    struct operator_context_output__operator__onnx__matmul__9    *output;
    struct operator_context_attribute__operator__onnx__matmul__9 *attribute;
    operator_executer                          operator;
} operator_context__operator__onnx__matmul__9;

/**
 * onnx operator 'MatMul' version 9
 *
 * @param[in]  ctx  Operator context
 * @return          Status code
 *
 * Matrix product that behaves like numpy.matmul:
 * https://docs.scipy.org/doc/numpy-1.13.0/reference/generated/numpy.matmul.html
 * 
 * Constraint T:
 *   Constrain input and output types to float/int tensors.
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64
 * Input T A:
 *   N-dimensional matrix A
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64
 * 
 * Input T B:
 *   N-dimensional matrix B
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64
 * Output T Y:
 *   Matrix multiply results from A * B
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64

 *
 * @since version 9
 *
 * @see ../../../../../../travis/build/onnx/wheel-builder/onnx/onnx/defs/math/defs.cc:926
 * @see https://github.com/onnx/onnx/blob/master/docs/Operators.md#MatMul
 */
operator_status operator__onnx__matmul__9(
    operator_context__operator__onnx__matmul__9 *ctx
);

operator_executer resolve_operator__onnx__matmul__9(
    operator_context__operator__onnx__matmul__9 *ctx
);

extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_double(
    operator_context__operator__onnx__matmul__9 *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_float(
    operator_context__operator__onnx__matmul__9 *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_float16(
    operator_context__operator__onnx__matmul__9 *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_int32(
    operator_context__operator__onnx__matmul__9 *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_int64(
    operator_context__operator__onnx__matmul__9 *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_uint32(
    operator_context__operator__onnx__matmul__9 *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_uint64(
    operator_context__operator__onnx__matmul__9 *ctx
);
# endif