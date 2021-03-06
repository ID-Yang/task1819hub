// ---------------------------------------------------------------------------
// IMLAB
// ---------------------------------------------------------------------------
#ifndef INCLUDE_IMLAB_INFRA_ERROR_H_
#define INCLUDE_IMLAB_INFRA_ERROR_H_
//---------------------------------------------------------------------------
#include <stdexcept>
//---------------------------------------------------------------------------
namespace imlab {
//---------------------------------------------------------------------------
struct TransactionRollback: std::runtime_error {
    // Constructor
    explicit TransactionRollback(const char *what)
        : std::runtime_error(what) {}
};
//---------------------------------------------------------------------------
}  // namespace imlab
//---------------------------------------------------------------------------
#endif  // INCLUDE_IMLAB_INFRA_ERROR_H_
//---------------------------------------------------------------------------
