#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb6a59b7b, "module_layout" },
	{ 0x42e2053a, "consume_skb" },
	{ 0x291526dc, "ip_route_input_common" },
	{ 0xd1e34738, "nf_afinfo" },
	{ 0xf8872276, "dst_alloc" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x3a8ad4dc, "interruptible_sleep_on" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x12095bb9, "create_proc_entry" },
	{ 0x2e3a4921, "remove_proc_entry" },
	{ 0x9b24f3b1, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x83508da0, "skb_realloc_headroom" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xadad9305, "register_netdev" },
	{ 0x48bc4e63, "ether_setup" },
	{ 0x54a34fcd, "alloc_netdev_mqs" },
	{ 0xa7544844, "dev_get_flags" },
	{ 0x48a8b4f5, "free_netdev" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xc5604c73, "unregister_netdev" },
	{ 0x3ed9d4da, "eth_type_trans" },
	{ 0xe1db2bad, "skb_push" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0x53985936, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x8a7c6f1, "add_timer" },
	{ 0x8ee69235, "timeval_to_jiffies" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x1000e51, "schedule" },
	{ 0xbb8c187d, "module_put" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x72542c85, "__wake_up" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x71c3f735, "skb_trim" },
	{ 0x6a578f97, "dst_release" },
	{ 0x4d49b877, "dev_kfree_skb_any" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0xce19bac5, "register_inet6addr_notifier" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x99bb8806, "memmove" },
	{ 0x328a05f1, "strncpy" },
	{ 0x538383c0, "unregister_inet6addr_notifier" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x587df050, "outer_cache" },
	{ 0x9c6e8918, "_raw_write_unlock" },
	{ 0x5413f231, "_raw_write_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4e96e3c, "nf_unregister_hook" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1fd7111, "nf_register_hook" },
	{ 0x14c5a62e, "init_net" },
	{ 0xa1468e16, "dev_base_lock" },
	{ 0xb838b499, "__alloc_skb" },
	{ 0xc7eb0454, "netif_rx" },
	{ 0x10c763a0, "skb_put" },
	{ 0x71b745ff, "in_dev_finish_destroy" },
	{ 0x7d02520f, "_raw_read_unlock" },
	{ 0x3fbe43b9, "in6_dev_finish_destroy" },
	{ 0x71c90087, "memcmp" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca01666d, "_raw_read_lock" },
	{ 0x27e1a049, "printk" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0xe52592a, "panic" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x9d669763, "memcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

