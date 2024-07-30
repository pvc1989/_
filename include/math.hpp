namespace pvc {

/**
 * @brief Return the sum of squares of two floats.
 * 
 * @tparam Float type of the given floats 
 * @param x the value of \f$ x \f$
 * @param y the value of \f$ y \f$
 * @return the value of \f$ x^2 + y^2 \f$
 */
template <typename Float>
Float hypot2(Float x, Float y) {
  return x * x + y * y;
}

}  // namespace pvc
