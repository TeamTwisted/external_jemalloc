#undef a0dalloc
#undef a0malloc
#undef arena_aalloc
#undef arena_alloc_junk_small
#undef arena_basic_stats_merge
#undef arena_bin_index
#undef arena_bin_info
#undef arena_bitselm_get_const
#undef arena_bitselm_get_mutable
#undef arena_boot
#undef arena_choose
#undef arena_choose_hard
#undef arena_choose_impl
#undef arena_chunk_alloc_huge
#undef arena_chunk_cache_maybe_insert
#undef arena_chunk_cache_maybe_remove
#undef arena_chunk_dalloc_huge
#undef arena_chunk_ralloc_huge_expand
#undef arena_chunk_ralloc_huge_shrink
#undef arena_chunk_ralloc_huge_similar
#undef arena_cleanup
#undef arena_dalloc
#undef arena_dalloc_bin
#undef arena_dalloc_bin_junked_locked
#undef arena_dalloc_junk_large
#undef arena_dalloc_junk_small
#undef arena_dalloc_large
#undef arena_dalloc_large_junked_locked
#undef arena_dalloc_small
#undef arena_decay_tick
#undef arena_decay_ticks
#undef arena_decay_time_default_get
#undef arena_decay_time_default_set
#undef arena_decay_time_get
#undef arena_decay_time_set
#undef arena_dss_prec_get
#undef arena_dss_prec_set
#undef arena_get
#undef arena_ichoose
#undef arena_init
#undef arena_lg_dirty_mult_default_get
#undef arena_lg_dirty_mult_default_set
#undef arena_lg_dirty_mult_get
#undef arena_lg_dirty_mult_set
#undef arena_malloc
#undef arena_malloc_hard
#undef arena_malloc_large
#undef arena_mapbits_allocated_get
#undef arena_mapbits_binind_get
#undef arena_mapbits_decommitted_get
#undef arena_mapbits_dirty_get
#undef arena_mapbits_get
#undef arena_mapbits_internal_set
#undef arena_mapbits_large_binind_set
#undef arena_mapbits_large_get
#undef arena_mapbits_large_set
#undef arena_mapbits_large_size_get
#undef arena_mapbits_size_decode
#undef arena_mapbits_size_encode
#undef arena_mapbits_small_runind_get
#undef arena_mapbits_small_set
#undef arena_mapbits_unallocated_set
#undef arena_mapbits_unallocated_size_get
#undef arena_mapbits_unallocated_size_set
#undef arena_mapbits_unzeroed_get
#undef arena_mapbitsp_get_const
#undef arena_mapbitsp_get_mutable
#undef arena_mapbitsp_read
#undef arena_mapbitsp_write
#undef arena_maxrun
#undef arena_maybe_purge
#undef arena_metadata_allocated_add
#undef arena_metadata_allocated_get
#undef arena_metadata_allocated_sub
#undef arena_migrate
#undef arena_miscelm_get_const
#undef arena_miscelm_get_mutable
#undef arena_miscelm_to_pageind
#undef arena_miscelm_to_rpages
#undef arena_new
#undef arena_node_alloc
#undef arena_node_dalloc
#undef arena_nthreads_dec
#undef arena_nthreads_get
#undef arena_nthreads_inc
#undef arena_palloc
#undef arena_postfork_child
#undef arena_postfork_parent
#undef arena_prefork0
#undef arena_prefork1
#undef arena_prefork2
#undef arena_prefork3
#undef arena_prof_accum
#undef arena_prof_accum_impl
#undef arena_prof_accum_locked
#undef arena_prof_promoted
#undef arena_prof_tctx_get
#undef arena_prof_tctx_reset
#undef arena_prof_tctx_set
#undef arena_ptr_small_binind_get
#undef arena_purge
#undef arena_quarantine_junk_small
#undef arena_ralloc
#undef arena_ralloc_junk_large
#undef arena_ralloc_no_move
#undef arena_rd_to_miscelm
#undef arena_redzone_corruption
#undef arena_reset
#undef arena_run_regind
#undef arena_run_to_miscelm
#undef arena_salloc
#undef arena_sdalloc
#undef arena_stats_merge
#undef arena_tcache_fill_small
#undef arena_tdata_get
#undef arena_tdata_get_hard
#undef arenas
#undef arenas_tdata_bypass_cleanup
#undef arenas_tdata_cleanup
#undef atomic_add_p
#undef atomic_add_u
#undef atomic_add_uint32
#undef atomic_add_uint64
#undef atomic_add_z
#undef atomic_cas_p
#undef atomic_cas_u
#undef atomic_cas_uint32
#undef atomic_cas_uint64
#undef atomic_cas_z
#undef atomic_sub_p
#undef atomic_sub_u
#undef atomic_sub_uint32
#undef atomic_sub_uint64
#undef atomic_sub_z
#undef atomic_write_p
#undef atomic_write_u
#undef atomic_write_uint32
#undef atomic_write_uint64
#undef atomic_write_z
#undef base_alloc
#undef base_boot
#undef base_postfork_child
#undef base_postfork_parent
#undef base_prefork
#undef base_stats_get
#undef bitmap_full
#undef bitmap_get
#undef bitmap_info_init
#undef bitmap_init
#undef bitmap_set
#undef bitmap_sfu
#undef bitmap_size
#undef bitmap_unset
#undef bootstrap_calloc
#undef bootstrap_free
#undef bootstrap_malloc
#undef bt_init
#undef buferror
#undef chunk_alloc_base
#undef chunk_alloc_cache
#undef chunk_alloc_dss
#undef chunk_alloc_mmap
#undef chunk_alloc_wrapper
#undef chunk_boot
#undef chunk_dalloc_cache
#undef chunk_dalloc_mmap
#undef chunk_dalloc_wrapper
#undef chunk_deregister
#undef chunk_dss_boot
#undef chunk_dss_postfork_child
#undef chunk_dss_postfork_parent
#undef chunk_dss_prec_get
#undef chunk_dss_prec_set
#undef chunk_dss_prefork
#undef chunk_hooks_default
#undef chunk_hooks_get
#undef chunk_hooks_set
#undef chunk_in_dss
#undef chunk_lookup
#undef chunk_npages
#undef chunk_postfork_child
#undef chunk_postfork_parent
#undef chunk_prefork
#undef chunk_purge_wrapper
#undef chunk_register
#undef chunks_rtree
#undef chunksize
#undef chunksize_mask
#undef ckh_count
#undef ckh_delete
#undef ckh_insert
#undef ckh_iter
#undef ckh_new
#undef ckh_pointer_hash
#undef ckh_pointer_keycomp
#undef ckh_remove
#undef ckh_search
#undef ckh_string_hash
#undef ckh_string_keycomp
#undef ctl_boot
#undef ctl_bymib
#undef ctl_byname
#undef ctl_nametomib
#undef ctl_postfork_child
#undef ctl_postfork_parent
#undef ctl_prefork
#undef decay_ticker_get
#undef dss_prec_names
#undef extent_node_achunk_get
#undef extent_node_achunk_set
#undef extent_node_addr_get
#undef extent_node_addr_set
#undef extent_node_arena_get
#undef extent_node_arena_set
#undef extent_node_committed_get
#undef extent_node_committed_set
#undef extent_node_dirty_insert
#undef extent_node_dirty_linkage_init
#undef extent_node_dirty_remove
#undef extent_node_init
#undef extent_node_prof_tctx_get
#undef extent_node_prof_tctx_set
#undef extent_node_size_get
#undef extent_node_size_set
#undef extent_node_zeroed_get
#undef extent_node_zeroed_set
#undef extent_tree_ad_destroy
#undef extent_tree_ad_destroy_recurse
#undef extent_tree_ad_empty
#undef extent_tree_ad_first
#undef extent_tree_ad_insert
#undef extent_tree_ad_iter
#undef extent_tree_ad_iter_recurse
#undef extent_tree_ad_iter_start
#undef extent_tree_ad_last
#undef extent_tree_ad_new
#undef extent_tree_ad_next
#undef extent_tree_ad_nsearch
#undef extent_tree_ad_prev
#undef extent_tree_ad_psearch
#undef extent_tree_ad_remove
#undef extent_tree_ad_reverse_iter
#undef extent_tree_ad_reverse_iter_recurse
#undef extent_tree_ad_reverse_iter_start
#undef extent_tree_ad_search
#undef extent_tree_szad_destroy
#undef extent_tree_szad_destroy_recurse
#undef extent_tree_szad_empty
#undef extent_tree_szad_first
#undef extent_tree_szad_insert
#undef extent_tree_szad_iter
#undef extent_tree_szad_iter_recurse
#undef extent_tree_szad_iter_start
#undef extent_tree_szad_last
#undef extent_tree_szad_new
#undef extent_tree_szad_next
#undef extent_tree_szad_nsearch
#undef extent_tree_szad_prev
#undef extent_tree_szad_psearch
#undef extent_tree_szad_remove
#undef extent_tree_szad_reverse_iter
#undef extent_tree_szad_reverse_iter_recurse
#undef extent_tree_szad_reverse_iter_start
#undef extent_tree_szad_search
#undef ffs_llu
#undef ffs_lu
#undef ffs_u
#undef ffs_u32
#undef ffs_u64
#undef ffs_zu
#undef get_errno
#undef hash
#undef hash_fmix_32
#undef hash_fmix_64
#undef hash_get_block_32
#undef hash_get_block_64
#undef hash_rotl_32
#undef hash_rotl_64
#undef hash_x64_128
#undef hash_x86_128
#undef hash_x86_32
#undef huge_aalloc
#undef huge_dalloc
#undef huge_dalloc_junk
#undef huge_malloc
#undef huge_palloc
#undef huge_prof_tctx_get
#undef huge_prof_tctx_reset
#undef huge_prof_tctx_set
#undef huge_ralloc
#undef huge_ralloc_no_move
#undef huge_salloc
#undef iaalloc
#undef ialloc
#undef iallocztm
#undef iarena_cleanup
#undef idalloc
#undef idalloctm
#undef in_valgrind
#undef index2size
#undef index2size_compute
#undef index2size_lookup
#undef index2size_tab
#undef ipalloc
#undef ipalloct
#undef ipallocztm
#undef iqalloc
#undef iralloc
#undef iralloct
#undef iralloct_realign
#undef isalloc
#undef isdalloct
#undef isqalloc
#undef isthreaded
#undef ivsalloc
#undef ixalloc
#undef jemalloc_postfork_child
#undef jemalloc_postfork_parent
#undef jemalloc_prefork
#undef large_maxclass
#undef lg_floor
#undef lg_prof_sample
#undef malloc_cprintf
#undef malloc_mutex_assert_not_owner
#undef malloc_mutex_assert_owner
#undef malloc_mutex_boot
#undef malloc_mutex_init
#undef malloc_mutex_lock
#undef malloc_mutex_postfork_child
#undef malloc_mutex_postfork_parent
#undef malloc_mutex_prefork
#undef malloc_mutex_unlock
#undef malloc_printf
#undef malloc_snprintf
#undef malloc_strtoumax
#undef malloc_tsd_boot0
#undef malloc_tsd_boot1
#undef malloc_tsd_cleanup_register
#undef malloc_tsd_dalloc
#undef malloc_tsd_malloc
#undef malloc_tsd_no_cleanup
#undef malloc_vcprintf
#undef malloc_vsnprintf
#undef malloc_write
#undef map_bias
#undef map_misc_offset
#undef mb_write
#undef narenas_auto
#undef narenas_tdata_cleanup
#undef narenas_total_get
#undef ncpus
#undef nhbins
#undef nhclasses
#undef nlclasses
#undef nstime_add
#undef nstime_compare
#undef nstime_copy
#undef nstime_divide
#undef nstime_idivide
#undef nstime_imultiply
#undef nstime_init
#undef nstime_init2
#undef nstime_ns
#undef nstime_nsec
#undef nstime_sec
#undef nstime_subtract
#undef nstime_update
#undef opt_abort
#undef opt_decay_time
#undef opt_dss
#undef opt_junk
#undef opt_junk_alloc
#undef opt_junk_free
#undef opt_lg_chunk
#undef opt_lg_dirty_mult
#undef opt_lg_prof_interval
#undef opt_lg_prof_sample
#undef opt_lg_tcache_max
#undef opt_narenas
#undef opt_prof
#undef opt_prof_accum
#undef opt_prof_active
#undef opt_prof_final
#undef opt_prof_gdump
#undef opt_prof_leak
#undef opt_prof_prefix
#undef opt_prof_thread_active_init
#undef opt_purge
#undef opt_quarantine
#undef opt_redzone
#undef opt_stats_print
#undef opt_tcache
#undef opt_utrace
#undef opt_xmalloc
#undef opt_zero
#undef p2rz
#undef pages_boot
#undef pages_commit
#undef pages_decommit
#undef pages_map
#undef pages_purge
#undef pages_trim
#undef pages_unmap
#undef pow2_ceil_u32
#undef pow2_ceil_u64
#undef pow2_ceil_zu
#undef prng_lg_range
#undef prng_range
#undef prof_active
#undef prof_active_get
#undef prof_active_get_unlocked
#undef prof_active_set
#undef prof_alloc_prep
#undef prof_alloc_rollback
#undef prof_backtrace
#undef prof_boot0
#undef prof_boot1
#undef prof_boot2
#undef prof_bt_count
#undef prof_dump_header
#undef prof_dump_open
#undef prof_free
#undef prof_free_sampled_object
#undef prof_gdump
#undef prof_gdump_get
#undef prof_gdump_get_unlocked
#undef prof_gdump_set
#undef prof_gdump_val
#undef prof_idump
#undef prof_interval
#undef prof_lookup
#undef prof_malloc
#undef prof_malloc_sample_object
#undef prof_mdump
#undef prof_postfork_child
#undef prof_postfork_parent
#undef prof_prefork0
#undef prof_prefork1
#undef prof_realloc
#undef prof_reset
#undef prof_sample_accum_update
#undef prof_sample_threshold_update
#undef prof_tctx_get
#undef prof_tctx_reset
#undef prof_tctx_set
#undef prof_tdata_cleanup
#undef prof_tdata_count
#undef prof_tdata_get
#undef prof_tdata_init
#undef prof_tdata_reinit
#undef prof_thread_active_get
#undef prof_thread_active_init_get
#undef prof_thread_active_init_set
#undef prof_thread_active_set
#undef prof_thread_name_get
#undef prof_thread_name_set
#undef purge_mode_names
#undef quarantine
#undef quarantine_alloc_hook
#undef quarantine_alloc_hook_work
#undef quarantine_cleanup
#undef register_zone
#undef rtree_child_read
#undef rtree_child_read_hard
#undef rtree_child_tryread
#undef rtree_delete
#undef rtree_get
#undef rtree_new
#undef rtree_node_valid
#undef rtree_set
#undef rtree_start_level
#undef rtree_subkey
#undef rtree_subtree_read
#undef rtree_subtree_read_hard
#undef rtree_subtree_tryread
#undef rtree_val_read
#undef rtree_val_write
#undef run_quantize_ceil
#undef run_quantize_floor
#undef run_quantize_max
#undef s2u
#undef s2u_compute
#undef s2u_lookup
#undef sa2u
#undef set_errno
#undef size2index
#undef size2index_compute
#undef size2index_lookup
#undef size2index_tab
#undef stats_cactive
#undef stats_cactive_add
#undef stats_cactive_get
#undef stats_cactive_sub
#undef stats_print
#undef tcache_alloc_easy
#undef tcache_alloc_large
#undef tcache_alloc_small
#undef tcache_alloc_small_hard
#undef tcache_arena_reassociate
#undef tcache_bin_flush_large
#undef tcache_bin_flush_small
#undef tcache_bin_info
#undef tcache_boot
#undef tcache_cleanup
#undef tcache_create
#undef tcache_dalloc_large
#undef tcache_dalloc_small
#undef tcache_enabled_cleanup
#undef tcache_enabled_get
#undef tcache_enabled_set
#undef tcache_event
#undef tcache_event_hard
#undef tcache_flush
#undef tcache_get
#undef tcache_get_hard
#undef tcache_maxclass
#undef tcache_salloc
#undef tcache_stats_merge
#undef tcaches
#undef tcaches_create
#undef tcaches_destroy
#undef tcaches_flush
#undef tcaches_get
#undef thread_allocated_cleanup
#undef thread_deallocated_cleanup
#undef ticker_copy
#undef ticker_init
#undef ticker_read
#undef ticker_tick
#undef ticker_ticks
#undef tsd_arena_get
#undef tsd_arena_set
#undef tsd_arenap_get
#undef tsd_arenas_tdata_bypass_get
#undef tsd_arenas_tdata_bypass_set
#undef tsd_arenas_tdata_bypassp_get
#undef tsd_arenas_tdata_get
#undef tsd_arenas_tdata_set
#undef tsd_arenas_tdatap_get
#undef tsd_boot
#undef tsd_boot0
#undef tsd_boot1
#undef tsd_booted
#undef tsd_booted_get
#undef tsd_cleanup
#undef tsd_cleanup_wrapper
#undef tsd_fetch
#undef tsd_get
#undef tsd_iarena_get
#undef tsd_iarena_set
#undef tsd_iarenap_get
#undef tsd_initialized
#undef tsd_init_check_recursion
#undef tsd_init_finish
#undef tsd_init_head
#undef tsd_narenas_tdata_get
#undef tsd_narenas_tdata_set
#undef tsd_narenas_tdatap_get
#undef tsd_wrapper_get
#undef tsd_wrapper_set
#undef tsd_nominal
#undef tsd_prof_tdata_get
#undef tsd_prof_tdata_set
#undef tsd_prof_tdatap_get
#undef tsd_quarantine_get
#undef tsd_quarantine_set
#undef tsd_quarantinep_get
#undef tsd_set
#undef tsd_tcache_enabled_get
#undef tsd_tcache_enabled_set
#undef tsd_tcache_enabledp_get
#undef tsd_tcache_get
#undef tsd_tcache_set
#undef tsd_tcachep_get
#undef tsd_thread_allocated_get
#undef tsd_thread_allocated_set
#undef tsd_thread_allocatedp_get
#undef tsd_thread_deallocated_get
#undef tsd_thread_deallocated_set
#undef tsd_thread_deallocatedp_get
#undef tsd_tls
#undef tsd_tsd
#undef tsd_tsdn
#undef tsd_witness_fork_get
#undef tsd_witness_fork_set
#undef tsd_witness_forkp_get
#undef tsd_witnesses_get
#undef tsd_witnesses_set
#undef tsd_witnessesp_get
#undef tsdn_fetch
#undef tsdn_null
#undef tsdn_tsd
#undef u2rz
#undef valgrind_freelike_block
#undef valgrind_make_mem_defined
#undef valgrind_make_mem_noaccess
#undef valgrind_make_mem_undefined
#undef witness_assert_lockless
#undef witness_assert_not_owner
#undef witness_assert_owner
#undef witness_fork_cleanup
#undef witness_init
#undef witness_lock
#undef witness_lock_error
#undef witness_lockless_error
#undef witness_not_owner_error
#undef witness_owner_error
#undef witness_postfork_child
#undef witness_postfork_parent
#undef witness_prefork
#undef witness_unlock
#undef witnesses_cleanup
