
//this file was generated by ../../../scripts/onnx_generator/OperatorSanityCheck.py
#include "operators/check_operator.h"
#include "operators/onnx/operator__onnx__transpose__1.h"

bool check_operator__onnx__transpose__1(
    size_t                  n_input,
    Onnx__TensorProto    ** input,
    size_t                  n_attribute,
    Onnx__AttributeProto ** attribute,
    size_t                  n_output,
    Onnx__TensorProto    ** output
){
    bool valid = true;
    { // check if input tensors have valid types
        uint32_t types_data[15] = {
            ONNX__TENSOR_PROTO__DATA_TYPE__BOOL,
            ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX128,
            ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX64,
            ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
            ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
            ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT16,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT32,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT64,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT8,
            ONNX__TENSOR_PROTO__DATA_TYPE__STRING,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT16,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT32,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT64,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT8
        };
        check_operator_condition_tensor conditions[1] = {
            {
                .skip = false,
                .name = "data",
                .optional = false,
                .n_types = 15,
                .types  = types_data
            }
        };
        valid &= check_operator_tensors("operator__onnx__transpose__1 input",
                                         1,
                                         conditions,
                                         input);
    }
    { // check if output tensors have valid types
        uint32_t types_transposed[15] = {
            ONNX__TENSOR_PROTO__DATA_TYPE__BOOL,
            ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX128,
            ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX64,
            ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE,
            ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT,
            ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT16,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT32,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT64,
            ONNX__TENSOR_PROTO__DATA_TYPE__INT8,
            ONNX__TENSOR_PROTO__DATA_TYPE__STRING,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT16,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT32,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT64,
            ONNX__TENSOR_PROTO__DATA_TYPE__UINT8
        };
        check_operator_condition_tensor conditions[1] = {
            {
                .skip = false,
                .name = "transposed",
                .optional = false,
                .n_types = 15,
                .types  = types_transposed
            }
        };
        valid &= check_operator_tensors("operator__onnx__transpose__1 output",
                                         1,
                                         conditions,
                                         output);
    }
    { // check if attributes have valid types
        check_operator_condition_attribute conditions[1] = {
            {
                .skip = false,
                .name = "perm",
                .optional = false,
                .type = ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS,
            }
        };
        valid &= check_operator_attributes("operator__onnx__transpose__1",
                                           1,
                                           conditions,
                                           attribute);
    }
    { // check if multiple tensors constrained by 'T' have same type
        check_operator_condition_constraint conditions_input[1] = {
            {
                .skip = false,
                .name = "data",
                .optional = false
            }
        };
        check_operator_condition_constraint conditions_output[1] = {
            {
                .skip = false,
                .name = "transposed",
                .optional = false
            }
        };
        valid &= check_operator_constraint("operator__onnx__transpose__1 T",
                                           1,
                                           conditions_input,
                                           input,
                                           1,
                                           conditions_output,
                                           output);
    }
    return valid;
}
