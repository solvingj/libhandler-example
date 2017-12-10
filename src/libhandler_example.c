#include <stdio.h> 
#include <libhandler.h>

LH_DEFINE_EFFECT1(exn, raise)
LH_DEFINE_VOIDOP1(exn, raise, lh_string)

int divexn(int x, int y) {
  return (y != 0 ? x / y : exn_raise("divide by zero"));
}

lh_value handle_exn_raise(lh_resume* r, lh_value local, lh_value arg) {
  printf("exception raised: %s\n", lh_lh_string_value(arg));
  return lh_value_null;
}

const lh_operation _exn_ops[] =
{
  {
    LH_OP_NORESUME, LH_OPTAG(exn,raise), &handle_exn_raise
  }
};
  
const lh_handlerdef _exn_def =
{
  LH_EFFECT(exn), NULL, NULL, NULL, _exn_ops
};

lh_value my_exn_handle(lh_value(*action)(value), lh_value arg)
{
  return handle(&_exn_def, lh_value_null, action, arg);
}

lh_value divide_by(lh_value x)
{
  return lh_value_long(divexn(42, lh_long_value(x)));
}

int main()
{
  my_exn_handle(divide_by, lh_value_long(0));
  char g = getchar();
  return 0;
}
