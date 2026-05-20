Minimal Inference Engine From Scratch

KV Cache as design focus

tensor primitive in progress

Shape [2, 3] - 2D tensor with 2 rows and 3 columns
2 x 3 = 6 elements

Strides [3, 1] - how many elements to skip in the flat buffer
Stride 3 for dim0 - jump 3 elements to go to the next row
Stride 1 for dim1 - jump 1 element to go to the next column

we have a flat float* buffer for a pair of multi-dimensional indices
strides tell us how far each index jumps you in the flat buffer

for at() multiply each index by its stride, and sum them to get flat offset

## Decisions

### 1. Row-major layout, strides computed from shape
- Strides are derived from shape at construction time
- Standard row-major (C-style) ordering — last dimension is contiguous
- Alternatives considered: column-major (Fortran-style) — went row-major because it matches how C++ lays out multi-dim arrays in memory

### 2. Tensor does not own its memory
- Raw float pointer passed in, tensor just provides a view over it
- Caller is responsible for allocation and deallocation
- Why: keeps the tensor simple for now; ownership decisions get revisited when the KV cache manager needs to hand out buffers

### 3.

