/*
 * mac.h: mac_policy list
 *
 */

#ifndef MAC_H
#define MAC_H

#include <stdint.h>

#include "unjail9.h"

//#define MAC_POLICY_OPS_VERSION 39 /* inc when new reserved slots are taken */
struct mac_policy_ops{
    kaddr_t mpo_audit_check_postselect;
    kaddr_t mpo_audit_check_preselect;
    kaddr_t mpo_bpfdesc_label_associate;
    kaddr_t mpo_bpfdesc_label_destroy;
    kaddr_t mpo_bpfdesc_label_init;
    kaddr_t mpo_bpfdesc_check_receive;
    kaddr_t mpo_cred_check_label_update_execve;
    kaddr_t mpo_cred_check_label_update;
    kaddr_t mpo_cred_check_visible;
    kaddr_t mpo_cred_label_associate_fork;
    kaddr_t mpo_cred_label_associate_kernel;
    kaddr_t mpo_cred_label_associate;
    kaddr_t mpo_cred_label_associate_user;
    kaddr_t mpo_cred_label_destroy;
    kaddr_t mpo_cred_label_externalize_audit;
    kaddr_t mpo_cred_label_externalize;
    kaddr_t mpo_cred_label_init;
    kaddr_t mpo_cred_label_internalize;
    kaddr_t mpo_cred_label_update_execve;
    kaddr_t mpo_cred_label_update;
    kaddr_t mpo_devfs_label_associate_device;
    kaddr_t mpo_devfs_label_associate_directory;
    kaddr_t mpo_devfs_label_copy;
    kaddr_t mpo_devfs_label_destroy;
    kaddr_t mpo_devfs_label_init;
    kaddr_t mpo_devfs_label_update;
    kaddr_t mpo_file_check_change_offset;
    kaddr_t mpo_file_check_create;
    kaddr_t mpo_file_check_dup;
    kaddr_t mpo_file_check_fcntl;
    kaddr_t mpo_file_check_get_offset;
    kaddr_t mpo_file_check_get;
    kaddr_t mpo_file_check_inherit;
    kaddr_t mpo_file_check_ioctl;
    kaddr_t mpo_file_check_lock;
    kaddr_t mpo_file_check_mmap_downgrade;
    kaddr_t mpo_file_check_mmap;
    kaddr_t mpo_file_check_receive;
    kaddr_t mpo_file_check_set;
    kaddr_t mpo_file_label_init;
    kaddr_t mpo_file_label_destroy;
    kaddr_t mpo_file_label_associate;
    kaddr_t mpo_ifnet_check_label_update;
    kaddr_t mpo_ifnet_check_transmit;
    kaddr_t mpo_ifnet_label_associate;
    kaddr_t mpo_ifnet_label_copy;
    kaddr_t mpo_ifnet_label_destroy;
    kaddr_t mpo_ifnet_label_externalize;
    kaddr_t mpo_ifnet_label_init;
    kaddr_t mpo_ifnet_label_internalize;
    kaddr_t mpo_ifnet_label_update;
    kaddr_t mpo_ifnet_label_recycle;
    kaddr_t mpo_inpcb_check_deliver;
    kaddr_t mpo_inpcb_label_associate;
    kaddr_t mpo_inpcb_label_destroy;
    kaddr_t mpo_inpcb_label_init;
    kaddr_t mpo_inpcb_label_recycle;
    kaddr_t mpo_inpcb_label_update;
    kaddr_t mpo_iokit_check_device;
    kaddr_t mpo_ipq_label_associate;
    kaddr_t mpo_ipq_label_compare;
    kaddr_t mpo_ipq_label_destroy;
    kaddr_t mpo_ipq_label_init;
    kaddr_t mpo_ipq_label_update;
    kaddr_t mpo_file_check_library_validation;
    kaddr_t mpo_vnode_notify_setacl;
    kaddr_t mpo_vnode_notify_setattrlist;
    kaddr_t mpo_vnode_notify_setextattr;
    kaddr_t mpo_vnode_notify_setflags;
    kaddr_t mpo_vnode_notify_setmode;
    kaddr_t mpo_vnode_notify_setowner;
    kaddr_t mpo_vnode_notify_setutimes;
    kaddr_t mpo_vnode_notify_truncate;
    kaddr_t mpo_mbuf_label_associate_bpfdesc;
    kaddr_t mpo_mbuf_label_associate_ifnet;
    kaddr_t mpo_mbuf_label_associate_inpcb;
    kaddr_t mpo_mbuf_label_associate_ipq;
    kaddr_t mpo_mbuf_label_associate_linklayer;
    kaddr_t mpo_mbuf_label_associate_multicast_encap;
    kaddr_t mpo_mbuf_label_associate_netlayer;
    kaddr_t mpo_mbuf_label_associate_socket;
    kaddr_t mpo_mbuf_label_copy;
    kaddr_t mpo_mbuf_label_destroy;
    kaddr_t mpo_mbuf_label_init;
    kaddr_t mpo_mount_check_fsctl;
    kaddr_t mpo_mount_check_getattr;
    kaddr_t mpo_mount_check_label_update;
    kaddr_t mpo_mount_check_mount;
    kaddr_t mpo_mount_check_remount;
    kaddr_t mpo_mount_check_setattr;
    kaddr_t mpo_mount_check_stat;
    kaddr_t mpo_mount_check_umount;
    kaddr_t mpo_mount_label_associate;
    kaddr_t mpo_mount_label_destroy;
    kaddr_t mpo_mount_label_externalize;
    kaddr_t mpo_mount_label_init;
    kaddr_t mpo_mount_label_internalize;
    kaddr_t mpo_netinet_fragment;
    kaddr_t mpo_netinet_icmp_reply;
    kaddr_t mpo_netinet_tcp_reply;
    kaddr_t mpo_pipe_check_ioctl;
    kaddr_t mpo_pipe_check_kqfilter;
    kaddr_t mpo_pipe_check_label_update;
    kaddr_t mpo_pipe_check_read;
    kaddr_t mpo_pipe_check_select;
    kaddr_t mpo_pipe_check_stat;
    kaddr_t mpo_pipe_check_write;
    kaddr_t mpo_pipe_label_associate;
    kaddr_t mpo_pipe_label_copy;
    kaddr_t mpo_pipe_label_destroy;
    kaddr_t mpo_pipe_label_externalize;
    kaddr_t mpo_pipe_label_init;
    kaddr_t mpo_pipe_label_internalize;
    kaddr_t mpo_pipe_label_update;
    kaddr_t mpo_policy_destroy;
    kaddr_t mpo_policy_init;
    kaddr_t mpo_policy_initbsd;
    kaddr_t mpo_policy_syscall;
    kaddr_t mpo_system_check_sysctlbyname;
    kaddr_t mpo_proc_check_inherit_ipc_ports;
    kaddr_t mpo_vnode_check_rename;
    kaddr_t mpo_kext_check_query;
    kaddr_t mpo_iokit_check_nvram_get;
    kaddr_t mpo_iokit_check_nvram_set;
    kaddr_t mpo_iokit_check_nvram_delete;
    kaddr_t mpo_proc_check_expose_task;
    kaddr_t mpo_proc_check_set_host_special_port;
    kaddr_t mpo_proc_check_set_host_exception_port;
    kaddr_t mpo_exc_action_check_exception_send;
    kaddr_t mpo_exc_action_label_associate;
    kaddr_t mpo_exc_action_label_copy;
    kaddr_t mpo_exc_action_label_destroy;
    kaddr_t mpo_exc_action_label_init;
    kaddr_t mpo_exc_action_label_update;
    kaddr_t mpo_reserved1;
    kaddr_t mpo_reserved2;
    kaddr_t mpo_reserved3;
    kaddr_t mpo_reserved4;
    kaddr_t mpo_reserved5;
    kaddr_t mpo_reserved6;
    kaddr_t mpo_posixsem_check_create;
    kaddr_t mpo_posixsem_check_open;
    kaddr_t mpo_posixsem_check_post;
    kaddr_t mpo_posixsem_check_unlink;
    kaddr_t mpo_posixsem_check_wait;
    kaddr_t mpo_posixsem_label_associate;
    kaddr_t mpo_posixsem_label_destroy;
    kaddr_t mpo_posixsem_label_init;
    kaddr_t mpo_posixshm_check_create;
    kaddr_t mpo_posixshm_check_mmap;
    kaddr_t mpo_posixshm_check_open;
    kaddr_t mpo_posixshm_check_stat;
    kaddr_t mpo_posixshm_check_truncate;
    kaddr_t mpo_posixshm_check_unlink;
    kaddr_t mpo_posixshm_label_associate;
    kaddr_t mpo_posixshm_label_destroy;
    kaddr_t mpo_posixshm_label_init;
    kaddr_t mpo_proc_check_debug;
    kaddr_t mpo_proc_check_fork;
    kaddr_t mpo_proc_check_get_task_name;
    kaddr_t mpo_proc_check_get_task;
    kaddr_t mpo_proc_check_getaudit;
    kaddr_t mpo_proc_check_getauid;
    kaddr_t mpo_proc_check_getlcid;
    kaddr_t mpo_proc_check_mprotect;
    kaddr_t mpo_proc_check_sched;
    kaddr_t mpo_proc_check_setaudit;
    kaddr_t mpo_proc_check_setauid;
    kaddr_t mpo_proc_check_setlcid;
    kaddr_t mpo_proc_check_signal;
    kaddr_t mpo_proc_check_wait;
    kaddr_t mpo_proc_label_destroy;
    kaddr_t mpo_proc_label_init;
    kaddr_t mpo_socket_check_accept;
    kaddr_t mpo_socket_check_accepted;
    kaddr_t mpo_socket_check_bind;
    kaddr_t mpo_socket_check_connect;
    kaddr_t mpo_socket_check_create;
    kaddr_t mpo_socket_check_deliver;
    kaddr_t mpo_socket_check_kqfilter;
    kaddr_t mpo_socket_check_label_update;
    kaddr_t mpo_socket_check_listen;
    kaddr_t mpo_socket_check_receive;
    kaddr_t mpo_socket_check_received;
    kaddr_t mpo_socket_check_select;
    kaddr_t mpo_socket_check_send;
    kaddr_t mpo_socket_check_stat;
    kaddr_t mpo_socket_check_setsockopt;
    kaddr_t mpo_socket_check_getsockopt;
    kaddr_t mpo_socket_label_associate_accept;
    kaddr_t mpo_socket_label_associate;
    kaddr_t mpo_socket_label_copy;
    kaddr_t mpo_socket_label_destroy;
    kaddr_t mpo_socket_label_externalize;
    kaddr_t mpo_socket_label_init;
    kaddr_t mpo_socket_label_internalize;
    kaddr_t mpo_socket_label_update;
    kaddr_t mpo_socketpeer_label_associate_mbuf;
    kaddr_t mpo_socketpeer_label_associate_socket;
    kaddr_t mpo_socketpeer_label_destroy;
    kaddr_t mpo_socketpeer_label_externalize;
    kaddr_t mpo_socketpeer_label_init;
    kaddr_t mpo_system_check_acct;
    kaddr_t mpo_system_check_audit;
    kaddr_t mpo_system_check_auditctl;
    kaddr_t mpo_system_check_auditon;
    kaddr_t mpo_system_check_host_priv;
    kaddr_t mpo_system_check_nfsd;
    kaddr_t mpo_system_check_reboot;
    kaddr_t mpo_system_check_settime;
    kaddr_t mpo_system_check_swapoff;
    kaddr_t mpo_system_check_swapon;
    kaddr_t mpo_reserved7;
    kaddr_t mpo_sysvmsg_label_associate;
    kaddr_t mpo_sysvmsg_label_destroy;
    kaddr_t mpo_sysvmsg_label_init;
    kaddr_t mpo_sysvmsg_label_recycle;
    kaddr_t mpo_sysvmsq_check_enqueue;
    kaddr_t mpo_sysvmsq_check_msgrcv;
    kaddr_t mpo_sysvmsq_check_msgrmid;
    kaddr_t mpo_sysvmsq_check_msqctl;
    kaddr_t mpo_sysvmsq_check_msqget;
    kaddr_t mpo_sysvmsq_check_msqrcv;
    kaddr_t mpo_sysvmsq_check_msqsnd;
    kaddr_t mpo_sysvmsq_label_associate;
    kaddr_t mpo_sysvmsq_label_destroy;
    kaddr_t mpo_sysvmsq_label_init;
    kaddr_t mpo_sysvmsq_label_recycle;
    kaddr_t mpo_sysvsem_check_semctl;
    kaddr_t mpo_sysvsem_check_semget;
    kaddr_t mpo_sysvsem_check_semop;
    kaddr_t mpo_sysvsem_label_associate;
    kaddr_t mpo_sysvsem_label_destroy;
    kaddr_t mpo_sysvsem_label_init;
    kaddr_t mpo_sysvsem_label_recycle;
    kaddr_t mpo_sysvshm_check_shmat;
    kaddr_t mpo_sysvshm_check_shmctl;
    kaddr_t mpo_sysvshm_check_shmdt;
    kaddr_t mpo_sysvshm_check_shmget;
    kaddr_t mpo_sysvshm_label_associate;
    kaddr_t mpo_sysvshm_label_destroy;
    kaddr_t mpo_sysvshm_label_init;
    kaddr_t mpo_sysvshm_label_recycle;
    kaddr_t mpo_reserved8;
    kaddr_t mpo_reserved9;
    kaddr_t mpo_vnode_check_getattr;
    kaddr_t mpo_mount_check_snapshot_create;
    kaddr_t mpo_mount_check_snapshot_delete;
    kaddr_t mpo_vnode_check_clone;
    kaddr_t mpo_proc_check_get_cs_info;
    kaddr_t mpo_proc_check_set_cs_info;
    kaddr_t mpo_iokit_check_hid_control;
    kaddr_t mpo_vnode_check_access;
    kaddr_t mpo_vnode_check_chdir;
    kaddr_t mpo_vnode_check_chroot;
    kaddr_t mpo_vnode_check_create;
    kaddr_t mpo_vnode_check_deleteextattr;
    kaddr_t mpo_vnode_check_exchangedata;
    kaddr_t mpo_vnode_check_exec;
    kaddr_t mpo_vnode_check_getattrlist;
    kaddr_t mpo_vnode_check_getextattr;
    kaddr_t mpo_vnode_check_ioctl;
    kaddr_t mpo_vnode_check_kqfilter;
    kaddr_t mpo_vnode_check_label_update;
    kaddr_t mpo_vnode_check_link;
    kaddr_t mpo_vnode_check_listextattr;
    kaddr_t mpo_vnode_check_lookup;
    kaddr_t mpo_vnode_check_open;
    kaddr_t mpo_vnode_check_read;
    kaddr_t mpo_vnode_check_readdir;
    kaddr_t mpo_vnode_check_readlink;
    kaddr_t mpo_vnode_check_rename_from;
    kaddr_t mpo_vnode_check_rename_to;
    kaddr_t mpo_vnode_check_revoke;
    kaddr_t mpo_vnode_check_select;
    kaddr_t mpo_vnode_check_setattrlist;
    kaddr_t mpo_vnode_check_setextattr;
    kaddr_t mpo_vnode_check_setflags;
    kaddr_t mpo_vnode_check_setmode;
    kaddr_t mpo_vnode_check_setowner;
    kaddr_t mpo_vnode_check_setutimes;
    kaddr_t mpo_vnode_check_stat;
    kaddr_t mpo_vnode_check_truncate;
    kaddr_t mpo_vnode_check_unlink;
    kaddr_t mpo_vnode_check_write;
    kaddr_t mpo_vnode_label_associate_devfs;
    kaddr_t mpo_vnode_label_associate_extattr;
    kaddr_t mpo_vnode_label_associate_file;
    kaddr_t mpo_vnode_label_associate_pipe;
    kaddr_t mpo_vnode_label_associate_posixsem;
    kaddr_t mpo_vnode_label_associate_posixshm;
    kaddr_t mpo_vnode_label_associate_singlelabel;
    kaddr_t mpo_vnode_label_associate_socket;
    kaddr_t mpo_vnode_label_copy;
    kaddr_t mpo_vnode_label_destroy;
    kaddr_t mpo_vnode_label_externalize_audit;
    kaddr_t mpo_vnode_label_externalize;
    kaddr_t mpo_vnode_label_init;
    kaddr_t mpo_vnode_label_internalize;
    kaddr_t mpo_vnode_label_recycle;
    kaddr_t mpo_vnode_label_store;
    kaddr_t mpo_vnode_label_update_extattr;
    kaddr_t mpo_vnode_label_update;
    kaddr_t mpo_vnode_notify_create;
    kaddr_t mpo_vnode_check_signature;
    kaddr_t mpo_vnode_check_uipc_bind;
    kaddr_t mpo_vnode_check_uipc_connect;
    kaddr_t mpo_proc_check_run_cs_invalid;
    kaddr_t mpo_proc_check_suspend_resume;
    kaddr_t mpo_thread_userret;
    kaddr_t mpo_iokit_check_set_properties;
    kaddr_t mpo_system_check_chud;
    kaddr_t mpo_vnode_check_searchfs;
    kaddr_t mpo_priv_check;
    kaddr_t mpo_priv_grant;
    kaddr_t mpo_proc_check_map_anon;
    kaddr_t mpo_vnode_check_fsgetpath;
    kaddr_t mpo_iokit_check_open;
    kaddr_t mpo_proc_check_ledger;
    kaddr_t mpo_vnode_notify_rename;
    kaddr_t mpo_vnode_check_setacl;
    kaddr_t mpo_vnode_notify_deleteextattr;
    kaddr_t mpo_system_check_kas_info;
    kaddr_t mpo_proc_check_cpumon;
    kaddr_t mpo_vnode_notify_open;
    kaddr_t mpo_system_check_info;
    kaddr_t mpo_pty_notify_grant;
    kaddr_t mpo_pty_notify_close;
    kaddr_t mpo_vnode_find_sigs;
    kaddr_t mpo_kext_check_load;
    kaddr_t mpo_kext_check_unload;
    kaddr_t mpo_proc_check_proc_info;
    kaddr_t mpo_vnode_notify_link;
    kaddr_t mpo_iokit_check_filter_properties;
    kaddr_t mpo_iokit_check_get_property;
} __attribute__((packed));

#endif
