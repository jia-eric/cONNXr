#ifndef OPERATOR_H
#define OPERATOR_H

#include "onnx.pb-c.h"
#include <errno.h>

// TODO Remove unused code
typedef struct operator_context operator_context;
typedef struct operator_tensor           operator_tensor;
typedef struct operator_context_tensor     operator_context_input;
typedef struct operator_context_tensor     operator_context_output;
typedef struct operator_context_attribute  operator_context_attribute;
typedef enum operator_status    operator_status;
typedef struct node_context  node_context;
typedef operator_status (*operator_executer)(node_context *ctx);
typedef operator_executer (*operator_resolver)(node_context *ctx);



// TODO Move this to a file named operator_interface
struct node_context{
  Onnx__NodeProto     *onnx_node;
  Onnx__TensorProto  **inputs;
  Onnx__TensorProto  **outputs;
  operator_executer resolved_op;
  //int (*resolved_op)(node_context *ctx);
};

enum operator_status {
  OP_OK     = 0,
  OP_ENOSYS = ENOSYS, // Function not implemented
  OP_ENOMEM = ENOMEM, // Out of memory
  OP_EINVAL = EINVAL, // Invalid argument
  OP_EDOM   = EDOM,   // Math argument out of domain of func
  OP_ERANGE = ERANGE  // Math result not representable
};

struct operator_tensor
{
    Onnx__TensorProto *tensor;
    operator_context  *origin;
    char              *name;
};

struct operator_context_tensor
{
    size_t  length;
    operator_tensor *tensor[];
};

struct operator_context_attribute
{
    size_t                length;
    Onnx__AttributeProto *attribute[];
};

struct operator_context
{
    operator_context_input      *input;
    operator_context_output     *output;
    operator_context_attribute  *attribute;
    operator_executer operator;
};

#endif
