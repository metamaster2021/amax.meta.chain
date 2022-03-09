#pragma once

#define BOOST_HANA_CONFIG_ENABLE_STRING_UDL
#include <boost/hana/tuple.hpp>
#include <boost/hana/string.hpp>

namespace eosio { namespace chain { namespace eosvmoc {

using namespace boost::hana::literals;

//NEVER reorder or remove indexes; the PIC uses the indexes in this table as an offset in to a jump
// table. Adding on the bottom is fine and requires no other updates elsewhere
constexpr auto intrinsic_table = boost::hana::make_tuple(
   "eosvmoc_internal.unreachable"_s,
   "eosvmoc_internal.grow_memory"_s,
   "eosvmoc_internal.div0_or_overflow"_s,
   "eosvmoc_internal.indirect_call_mismatch"_s,
   "eosvmoc_internal.indirect_call_oob"_s,
   "eosvmoc_internal.depth_assert"_s,
   "eosio_injection.call_depth_assert"_s,  //these two are never used by EOS VM OC but all intrinsics
   "eosio_injection.checktime"_s,          //must be mapped
   "env.__ashlti3"_s,
   "env.__ashrti3"_s,
   "env.__lshlti3"_s,
   "env.__lshrti3"_s,
   "env.__divti3"_s,
   "env.__udivti3"_s,
   "env.__modti3"_s,
   "env.__umodti3"_s,
   "env.__multi3"_s,
   "env.__addtf3"_s,
   "env.__subtf3"_s,
   "env.__multf3"_s,
   "env.__divtf3"_s,
   "env.__eqtf2"_s,
   "env.__netf2"_s,
   "env.__getf2"_s,
   "env.__gttf2"_s,
   "env.__lttf2"_s,
   "env.__letf2"_s,
   "env.__cmptf2"_s,
   "env.__unordtf2"_s,
   "env.__negtf2"_s,
   "env.__floatsitf"_s,
   "env.__floatunsitf"_s,
   "env.__floatditf"_s,
   "env.__floatunditf"_s,
   "env.__floattidf"_s,
   "env.__floatuntidf"_s,
   "env.__floatsidf"_s,
   "env.__extendsftf2"_s,
   "env.__extenddftf2"_s,
   "env.__fixtfti"_s,
   "env.__fixtfdi"_s,
   "env.__fixtfsi"_s,
   "env.__fixunstfti"_s,
   "env.__fixunstfdi"_s,
   "env.__fixunstfsi"_s,
   "env.__fixsfti"_s,
   "env.__fixdfti"_s,
   "env.__fixunssfti"_s,
   "env.__fixunsdfti"_s,
   "env.__trunctfdf2"_s,
   "env.__trunctfsf2"_s,
   "env.is_feature_active"_s,
   "env.activate_feature"_s,
   "env.get_resource_limits"_s,
   "env.set_resource_limits"_s,
   "env.set_proposed_producers"_s,
   "env.set_proposed_producers_ex"_s,
   "env.get_blockchain_parameters_packed"_s,
   "env.set_blockchain_parameters_packed"_s,
   "env.is_privileged"_s,
   "env.set_privileged"_s,
   "env.preactivate_feature"_s,
   "env.get_active_producers"_s,
   "env.db_store_i64"_s,
   "env.db_update_i64"_s,
   "env.db_remove_i64"_s,
   "env.db_get_i64"_s,
   "env.db_next_i64"_s,
   "env.db_previous_i64"_s,
   "env.db_find_i64"_s,
   "env.db_lowerbound_i64"_s,
   "env.db_upperbound_i64"_s,
   "env.db_end_i64"_s,
   "env.db_idx64_store"_s,
   "env.db_idx64_remove"_s,
   "env.db_idx64_update"_s,
   "env.db_idx64_find_primary"_s,
   "env.db_idx64_find_secondary"_s,
   "env.db_idx64_lowerbound"_s,
   "env.db_idx64_upperbound"_s,
   "env.db_idx64_end"_s,
   "env.db_idx64_next"_s,
   "env.db_idx64_previous"_s,
   "env.db_idx128_store"_s,
   "env.db_idx128_remove"_s,
   "env.db_idx128_update"_s,
   "env.db_idx128_find_primary"_s,
   "env.db_idx128_find_secondary"_s,
   "env.db_idx128_lowerbound"_s,
   "env.db_idx128_upperbound"_s,
   "env.db_idx128_end"_s,
   "env.db_idx128_next"_s,
   "env.db_idx128_previous"_s,
   "env.db_idx_double_store"_s,
   "env.db_idx_double_remove"_s,
   "env.db_idx_double_update"_s,
   "env.db_idx_double_find_primary"_s,
   "env.db_idx_double_find_secondary"_s,
   "env.db_idx_double_lowerbound"_s,
   "env.db_idx_double_upperbound"_s,
   "env.db_idx_double_end"_s,
   "env.db_idx_double_next"_s,
   "env.db_idx_double_previous"_s,
   "env.db_idx_long_double_store"_s,
   "env.db_idx_long_double_remove"_s,
   "env.db_idx_long_double_update"_s,
   "env.db_idx_long_double_find_primary"_s,
   "env.db_idx_long_double_find_secondary"_s,
   "env.db_idx_long_double_lowerbound"_s,
   "env.db_idx_long_double_upperbound"_s,
   "env.db_idx_long_double_end"_s,
   "env.db_idx_long_double_next"_s,
   "env.db_idx_long_double_previous"_s,
   "env.db_idx256_store"_s,
   "env.db_idx256_remove"_s,
   "env.db_idx256_update"_s,
   "env.db_idx256_find_primary"_s,
   "env.db_idx256_find_secondary"_s,
   "env.db_idx256_lowerbound"_s,
   "env.db_idx256_upperbound"_s,
   "env.db_idx256_end"_s,
   "env.db_idx256_next"_s,
   "env.db_idx256_previous"_s,
   "env.assert_recover_key"_s,
   "env.recover_key"_s,
   "env.assert_sha256"_s,
   "env.assert_sha1"_s,
   "env.assert_sha512"_s,
   "env.assert_ripemd160"_s,
   "env.sha1"_s,
   "env.sha256"_s,
   "env.sha512"_s,
   "env.ripemd160"_s,
   "env.check_transaction_authorization"_s,
   "env.check_permission_authorization"_s,
   "env.get_permission_last_used"_s,
   "env.get_account_creation_time"_s,
   "env.get_account_creator"_s,
   "env.current_time"_s,
   "env.publication_time"_s,
   "env.is_feature_activated"_s,
   "env.get_sender"_s,
   "env.abort"_s,
   "env.eosio_assert"_s,
   "env.eosio_assert_message"_s,
   "env.eosio_assert_code"_s,
   "env.eosio_exit"_s,
   "env.read_action_data"_s,
   "env.action_data_size"_s,
   "env.current_receiver"_s,
   "env.require_recipient"_s,
   "env.require_auth"_s,
   "env.require_auth2"_s,
   "env.has_auth"_s,
   "env.is_account"_s,
   "env.prints"_s,
   "env.prints_l"_s,
   "env.printi"_s,
   "env.printui"_s,
   "env.printi128"_s,
   "env.printui128"_s,
   "env.printsf"_s,
   "env.printdf"_s,
   "env.printqf"_s,
   "env.printn"_s,
   "env.printhex"_s,
   "env.read_transaction"_s,
   "env.transaction_size"_s,
   "env.expiration"_s,
   "env.tapos_block_prefix"_s,
   "env.tapos_block_num"_s,
   "env.get_action"_s,
   "env.send_inline"_s,
   "env.send_context_free_inline"_s,
   "env.send_deferred"_s,
   "env.cancel_deferred"_s,
   "env.get_context_free_data"_s,
   "env.memcpy"_s,
   "env.memmove"_s,
   "env.memcmp"_s,
   "env.memset"_s,
   "eosio_injection._eosio_f32_add"_s,
   "eosio_injection._eosio_f32_sub"_s,
   "eosio_injection._eosio_f32_mul"_s,
   "eosio_injection._eosio_f32_div"_s,
   "eosio_injection._eosio_f32_min"_s,
   "eosio_injection._eosio_f32_max"_s,
   "eosio_injection._eosio_f32_copysign"_s,
   "eosio_injection._eosio_f32_abs"_s,
   "eosio_injection._eosio_f32_neg"_s,
   "eosio_injection._eosio_f32_sqrt"_s,
   "eosio_injection._eosio_f32_ceil"_s,
   "eosio_injection._eosio_f32_floor"_s,
   "eosio_injection._eosio_f32_trunc"_s,
   "eosio_injection._eosio_f32_nearest"_s,
   "eosio_injection._eosio_f32_eq"_s,
   "eosio_injection._eosio_f32_ne"_s,
   "eosio_injection._eosio_f32_lt"_s,
   "eosio_injection._eosio_f32_le"_s,
   "eosio_injection._eosio_f32_gt"_s,
   "eosio_injection._eosio_f32_ge"_s,
   "eosio_injection._eosio_f64_add"_s,
   "eosio_injection._eosio_f64_sub"_s,
   "eosio_injection._eosio_f64_mul"_s,
   "eosio_injection._eosio_f64_div"_s,
   "eosio_injection._eosio_f64_min"_s,
   "eosio_injection._eosio_f64_max"_s,
   "eosio_injection._eosio_f64_copysign"_s,
   "eosio_injection._eosio_f64_abs"_s,
   "eosio_injection._eosio_f64_neg"_s,
   "eosio_injection._eosio_f64_sqrt"_s,
   "eosio_injection._eosio_f64_ceil"_s,
   "eosio_injection._eosio_f64_floor"_s,
   "eosio_injection._eosio_f64_trunc"_s,
   "eosio_injection._eosio_f64_nearest"_s,
   "eosio_injection._eosio_f64_eq"_s,
   "eosio_injection._eosio_f64_ne"_s,
   "eosio_injection._eosio_f64_lt"_s,
   "eosio_injection._eosio_f64_le"_s,
   "eosio_injection._eosio_f64_gt"_s,
   "eosio_injection._eosio_f64_ge"_s,
   "eosio_injection._eosio_f32_promote"_s,
   "eosio_injection._eosio_f64_demote"_s,
   "eosio_injection._eosio_f32_trunc_i32s"_s,
   "eosio_injection._eosio_f64_trunc_i32s"_s,
   "eosio_injection._eosio_f32_trunc_i32u"_s,
   "eosio_injection._eosio_f64_trunc_i32u"_s,
   "eosio_injection._eosio_f32_trunc_i64s"_s,
   "eosio_injection._eosio_f64_trunc_i64s"_s,
   "eosio_injection._eosio_f32_trunc_i64u"_s,
   "eosio_injection._eosio_f64_trunc_i64u"_s,
   "eosio_injection._eosio_i32_to_f32"_s,
   "eosio_injection._eosio_i64_to_f32"_s,
   "eosio_injection._eosio_ui32_to_f32"_s,
   "eosio_injection._eosio_ui64_to_f32"_s,
   "eosio_injection._eosio_i32_to_f64"_s,
   "eosio_injection._eosio_i64_to_f64"_s,
   "eosio_injection._eosio_ui32_to_f64"_s,
   "eosio_injection._eosio_ui64_to_f64"_s
);

}}}