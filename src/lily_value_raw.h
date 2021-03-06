#ifndef LILY_VALUE_RAW_H
# define LILY_VALUE_RAW_H

# include "lily_value_structs.h"
# include "lily_api_embed.h"

lily_container_val *lily_new_list_raw(int);
lily_container_val *lily_new_tuple_raw(int);
lily_container_val *lily_new_instance_raw(uint16_t, int);
lily_bytestring_val *lily_new_bytestring_raw(const char *, int);
lily_string_val *lily_new_string_raw(const char *);
lily_hash_val *lily_new_hash_integer_raw(int);
lily_hash_val *lily_new_hash_like_raw(lily_hash_val *, int);
lily_hash_val *lily_new_hash_string_raw(int);

void lily_deref(lily_value *);
void lily_value_assign(lily_value *, lily_value *);
void lily_value_take(lily_state *, lily_value *);
lily_value *lily_value_copy(lily_value *);
lily_value *lily_stack_take(lily_state *);
void lily_stack_push_and_destroy(lily_state *, lily_value *);

#endif
