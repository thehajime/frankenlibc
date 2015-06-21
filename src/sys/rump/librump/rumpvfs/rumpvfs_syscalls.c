/*	$NetBSD: rumpvfs_syscalls.c,v 1.4 2015/06/18 15:19:50 pooka Exp $	*/

/* AUTOMATICALLY GENERATED BY makerumpsyscalls.sh */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: rumpvfs_syscalls.c,v 1.4 2015/06/18 15:19:50 pooka Exp $");

#include <sys/param.h>

#include "rump_private.h"

extern sy_call_t sys_open;
extern sy_call_t sys_link;
extern sy_call_t sys_unlink;
extern sy_call_t sys_chdir;
extern sy_call_t sys_fchdir;
extern sy_call_t sys_chmod;
extern sy_call_t sys_chown;
extern sy_call_t sys_unmount;
extern sy_call_t sys_access;
extern sy_call_t sys_chflags;
extern sy_call_t sys_fchflags;
extern sy_call_t sys_sync;
extern sy_call_t sys_ktrace;
extern sy_call_t sys_revoke;
extern sy_call_t sys_symlink;
extern sy_call_t sys_readlink;
extern sy_call_t sys_umask;
extern sy_call_t sys_chroot;
extern sy_call_t sys_fsync;
extern sy_call_t sys_fchown;
extern sy_call_t sys_fchmod;
extern sy_call_t sys_rename;
extern sy_call_t sys_mkfifo;
extern sy_call_t sys_mkdir;
extern sy_call_t sys_rmdir;
extern sy_call_t sys_pread;
extern sy_call_t sys_pwrite;
extern sy_call_t sys_pathconf;
extern sy_call_t sys_lseek;
extern sy_call_t sys_truncate;
extern sy_call_t sys_ftruncate;
extern sy_call_t sys_fdatasync;
extern sy_call_t sys___posix_rename;
extern sy_call_t sys_lchmod;
extern sy_call_t sys_lchown;
extern sy_call_t sys___posix_chown;
extern sy_call_t sys___posix_fchown;
extern sy_call_t sys___posix_lchown;
extern sy_call_t sys_preadv;
extern sy_call_t sys_pwritev;
extern sy_call_t sys___getcwd;
extern sy_call_t sys_fchroot;
extern sy_call_t sys_lchflags;
extern sy_call_t sys_fsync_range;
extern sy_call_t sys_getvfsstat;
extern sy_call_t sys_statvfs1;
extern sy_call_t sys_fstatvfs1;
extern sy_call_t sys_extattrctl;
extern sy_call_t sys_extattr_set_file;
extern sy_call_t sys_extattr_get_file;
extern sy_call_t sys_extattr_delete_file;
extern sy_call_t sys_extattr_set_fd;
extern sy_call_t sys_extattr_get_fd;
extern sy_call_t sys_extattr_delete_fd;
extern sy_call_t sys_extattr_set_link;
extern sy_call_t sys_extattr_get_link;
extern sy_call_t sys_extattr_delete_link;
extern sy_call_t sys_extattr_list_fd;
extern sy_call_t sys_extattr_list_file;
extern sy_call_t sys_extattr_list_link;
extern sy_call_t sys_setxattr;
extern sy_call_t sys_lsetxattr;
extern sy_call_t sys_fsetxattr;
extern sy_call_t sys_getxattr;
extern sy_call_t sys_lgetxattr;
extern sy_call_t sys_fgetxattr;
extern sy_call_t sys_listxattr;
extern sy_call_t sys_llistxattr;
extern sy_call_t sys_flistxattr;
extern sy_call_t sys_removexattr;
extern sy_call_t sys_lremovexattr;
extern sy_call_t sys_fremovexattr;
extern sy_call_t sys___getdents30;
extern sy_call_t sys___getfh30;
extern sy_call_t sys___fhopen40;
extern sy_call_t sys___fhstatvfs140;
extern sy_call_t sys___mount50;
extern sy_call_t sys___utimes50;
extern sy_call_t sys___futimes50;
extern sy_call_t sys___lutimes50;
extern sy_call_t sys___stat50;
extern sy_call_t sys___lstat50;
extern sy_call_t sys___mknod50;
extern sy_call_t sys___fhstat50;
extern sy_call_t sys_linkat;
extern sy_call_t sys_renameat;
extern sy_call_t sys_mkfifoat;
extern sy_call_t sys_mknodat;
extern sy_call_t sys_mkdirat;
extern sy_call_t sys_faccessat;
extern sy_call_t sys_fchmodat;
extern sy_call_t sys_fchownat;
extern sy_call_t sys_fstatat;
extern sy_call_t sys_utimensat;
extern sy_call_t sys_openat;
extern sy_call_t sys_readlinkat;
extern sy_call_t sys_symlinkat;
extern sy_call_t sys_unlinkat;
extern sy_call_t sys_futimens;
extern sy_call_t sys___quotactl;
extern sy_call_t sys_posix_fallocate;
extern sy_call_t sys_fdiscard;

static const struct rump_onesyscall mysys[] = {
	{ 5,	sys_open },
	{ 9,	sys_link },
	{ 10,	sys_unlink },
	{ 12,	sys_chdir },
	{ 13,	sys_fchdir },
	{ 15,	sys_chmod },
	{ 16,	sys_chown },
	{ 22,	sys_unmount },
	{ 33,	sys_access },
	{ 34,	sys_chflags },
	{ 35,	sys_fchflags },
	{ 36,	sys_sync },
	{ 45,	sys_ktrace },
	{ 56,	sys_revoke },
	{ 57,	sys_symlink },
	{ 58,	sys_readlink },
	{ 60,	sys_umask },
	{ 61,	sys_chroot },
	{ 95,	sys_fsync },
	{ 123,	sys_fchown },
	{ 124,	sys_fchmod },
	{ 128,	sys_rename },
	{ 132,	sys_mkfifo },
	{ 136,	sys_mkdir },
	{ 137,	sys_rmdir },
	{ 173,	sys_pread },
	{ 174,	sys_pwrite },
	{ 191,	sys_pathconf },
	{ 199,	sys_lseek },
	{ 200,	sys_truncate },
	{ 201,	sys_ftruncate },
	{ 241,	sys_fdatasync },
	{ 270,	sys___posix_rename },
	{ 274,	sys_lchmod },
	{ 275,	sys_lchown },
	{ 283,	sys___posix_chown },
	{ 284,	sys___posix_fchown },
	{ 285,	sys___posix_lchown },
	{ 289,	sys_preadv },
	{ 290,	sys_pwritev },
	{ 296,	sys___getcwd },
	{ 297,	sys_fchroot },
	{ 304,	sys_lchflags },
	{ 354,	sys_fsync_range },
	{ 356,	sys_getvfsstat },
	{ 357,	sys_statvfs1 },
	{ 358,	sys_fstatvfs1 },
	{ 360,	sys_extattrctl },
	{ 361,	sys_extattr_set_file },
	{ 362,	sys_extattr_get_file },
	{ 363,	sys_extattr_delete_file },
	{ 364,	sys_extattr_set_fd },
	{ 365,	sys_extattr_get_fd },
	{ 366,	sys_extattr_delete_fd },
	{ 367,	sys_extattr_set_link },
	{ 368,	sys_extattr_get_link },
	{ 369,	sys_extattr_delete_link },
	{ 370,	sys_extattr_list_fd },
	{ 371,	sys_extattr_list_file },
	{ 372,	sys_extattr_list_link },
	{ 375,	sys_setxattr },
	{ 376,	sys_lsetxattr },
	{ 377,	sys_fsetxattr },
	{ 378,	sys_getxattr },
	{ 379,	sys_lgetxattr },
	{ 380,	sys_fgetxattr },
	{ 381,	sys_listxattr },
	{ 382,	sys_llistxattr },
	{ 383,	sys_flistxattr },
	{ 384,	sys_removexattr },
	{ 385,	sys_lremovexattr },
	{ 386,	sys_fremovexattr },
	{ 390,	sys___getdents30 },
	{ 395,	sys___getfh30 },
	{ 396,	sys___fhopen40 },
	{ 397,	sys___fhstatvfs140 },
	{ 410,	sys___mount50 },
	{ 420,	sys___utimes50 },
	{ 423,	sys___futimes50 },
	{ 424,	sys___lutimes50 },
	{ 439,	sys___stat50 },
	{ 441,	sys___lstat50 },
	{ 450,	sys___mknod50 },
	{ 451,	sys___fhstat50 },
	{ 457,	sys_linkat },
	{ 458,	sys_renameat },
	{ 459,	sys_mkfifoat },
	{ 460,	sys_mknodat },
	{ 461,	sys_mkdirat },
	{ 462,	sys_faccessat },
	{ 463,	sys_fchmodat },
	{ 464,	sys_fchownat },
	{ 466,	sys_fstatat },
	{ 467,	sys_utimensat },
	{ 468,	sys_openat },
	{ 469,	sys_readlinkat },
	{ 470,	sys_symlinkat },
	{ 471,	sys_unlinkat },
	{ 472,	sys_futimens },
	{ 473,	sys___quotactl },
	{ 479,	sys_posix_fallocate },
	{ 480,	sys_fdiscard },
};

RUMP_COMPONENT(RUMP_COMPONENT_SYSCALL)
{

	rump_syscall_boot_establish(mysys, __arraycount(mysys));
}
