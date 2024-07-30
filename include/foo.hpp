/**
 * @brief Get the result of a binary operation of two given intergers.
 * 
 * @tparam Op type of the binary operation
 * @param x the 1st operand
 * @param y the 2nd operand
 * @param op the binary operation
 * @return int the result
 */
template <typename Op>
int foo(int x, int y, Op op) {
  return op(x, y);
}
