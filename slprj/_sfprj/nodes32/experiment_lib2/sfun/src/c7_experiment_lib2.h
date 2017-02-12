#ifndef __c7_experiment_lib2_h__
#define __c7_experiment_lib2_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc7_experiment_lib2InstanceStruct
#define typedef_SFc7_experiment_lib2InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c7_sfEvent;
  boolean_T c7_isStable;
  boolean_T c7_doneDoubleBufferReInit;
  uint8_T c7_is_active_c7_experiment_lib2;
  real_T c7_a;
} SFc7_experiment_lib2InstanceStruct;

#endif                                 /*typedef_SFc7_experiment_lib2InstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_experiment_lib2_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_experiment_lib2_get_check_sum(mxArray *plhs[]);
extern void c7_experiment_lib2_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
