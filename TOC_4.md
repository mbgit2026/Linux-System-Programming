# Table of contents - Mastering Memory
<img src="front_4.jpg" width=200>

# 1. Executable files 
	1.1 The Executable and Linkable Format (ELF)
	1.2 The ELF Header
	1.3 Sections and Segments
	1.4 The Symbol Table
	1.5 The Relocation Table
	1.6 The Dynamic Section
	1.7 The Note Section
	1.8 Reading ELF
	1.9 Loading ELF into memory
# 2. Process Termination
	2.1 The main function
	2.2 Non-standard process termination: _exit and _Exit
	2.3 Normal process termination: exit
	2.4 Exit handlers: at_exit and on_exit
	2.5 Process termination and exit status
	2.6 Aborting a program: abort
# 3. Command line arguments
	3.1 Parsing options with getopt
	3.2 Parsing options with getopt_long
	3.3 The getsubopt function
	3.2 The argp interface
# 4. Memory allocation
	4.1 Memory allocation functions
	4.2 Processes and memory
	4.3 The GNU Allocator
	4.4 Meory reclamation using malloc_trim
	4.5 Automatic stack allocation with alloca
	4.6 Aligned memory allocation with posix_memalign
	4.7 Retrieving the system page size with getpagesize
# 5. Memory mapped I/O
	5.1 Memory mapping with mmap
	5.2 Private file mapping
	5.3 Shared file mapping
	5.4 Anonymous mapping
	5.5 Extending a mapped file
	5.6 Memory remapping with mremap
# 6. Memory functions
	6.1 Memory copying with memcpy
	6.2 Safe memory copying with memmove
	6.3 Memory initialization with memset and bzero
	6.4 Memory searching with memchr and memmem
	6.5 Memory comparison with memcmp
	6.6 Memory obfuscation with memfrob
# 7. Protecting the memory
	7.1 Memory protection with mprotect
	7.2 Memory protection keys
# 8. Locking memory
	8.1 Memory locking with mlock
	8.2 Memory residency inspection with mincore
# 9. RAM-Backed Files and Secret Memory
	9.1 Anonymous RAM-backed files: memfd_create
	9.2 Secret memory regions with memfd_secret
# 10. Memory advice
	10.1 Memory advice with madvise
	10.2 Portable memory advice with posix_madvise
	10.3 Remote memory advice with process_madvise
# 11. Nonlocal gotos
	11.1 The setjmp and longjmp functions
	11.2 The sigsetjmp and siglongjmp functions
# 12. Core dump file
# 13. Dynamically loaded objects
	13.1 Opening a shared object: dlopen
	13.2 Obtaining the address of a symbol: dlsym
	13.4 Obtaining information about a loaded object: dlinfo
	13.5 Translating address to symbolic information: dladdr
	13.6 Walking through a list of shared objects: dl­_iterate_phdr

List of tables
List of figures
