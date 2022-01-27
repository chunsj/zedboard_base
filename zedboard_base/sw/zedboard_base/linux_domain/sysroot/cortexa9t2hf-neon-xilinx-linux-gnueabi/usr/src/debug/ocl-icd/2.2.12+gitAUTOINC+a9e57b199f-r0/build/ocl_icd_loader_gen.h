/**
Copyright (c) 2012-2020, Brice Videau <bvideau@anl.gov>
Copyright (c) 2012-2020, Vincent Danjean <Vincent.Danjean@ens-lyon.org>
All rights reserved.
      
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    
1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
        
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Do not edit this file. It is automatically generated.

*/

#include "ocl_icd.h"


struct func_desc {
  const char* name;
  void(*const addr)(void);
};
typedef __typeof__(clGetExtensionFunctionAddress) *clGetExtensionFunctionAddress_fn;
extern const struct func_desc function_description[];
struct vendor_icd {
  cl_uint	num_platforms;
  void *	dl_handle;
  clGetExtensionFunctionAddress_fn ext_fn_ptr;
};

struct platform_icd {
  char *	extension_suffix;
  char *	version;
  struct vendor_icd *vicd;
  cl_platform_id pid;
  cl_uint	ngpus; /* number of GPU devices */
  cl_uint	ncpus; /* number of CPU devices */
  cl_uint	ndevs; /* total number of devices, of all types */
};

extern struct _cl_icd_dispatch master_dispatch;
struct _cl_platform_id { struct _cl_icd_dispatch *dispatch; };
struct _cl_device_id { struct _cl_icd_dispatch *dispatch; };
struct _cl_context { struct _cl_icd_dispatch *dispatch; };
struct _cl_command_queue { struct _cl_icd_dispatch *dispatch; };
struct _cl_mem { struct _cl_icd_dispatch *dispatch; };
struct _cl_program { struct _cl_icd_dispatch *dispatch; };
struct _cl_kernel { struct _cl_icd_dispatch *dispatch; };
struct _cl_event { struct _cl_icd_dispatch *dispatch; };
struct _cl_sampler { struct _cl_icd_dispatch *dispatch; };
