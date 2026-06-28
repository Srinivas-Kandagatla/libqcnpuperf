#ifndef QCOM_DSP_PRIV_H_
#define QCOM_DSP_PRIV_H_

#include "qcom_dsp_types.h"
#include <stdint.h>

/*
 * Full definition of the opaque context.  Not installed — callers only
 * see the forward declaration in qcom_dsp.h.
 *
 * remote_handle64 is typedef uint64_t in remote.h; stored as uint64_t here
 * to keep the type explicit.
 */
struct qcom_dsp_ctx {
    enum DspDomainId            domain_id;
    uint64_t                    h;         /* remote_handle64 */
    struct sysmon_query_prof_data *prof_data;
    unsigned int                arch_ver;  /* cached; 0 = not yet queried */
};

#endif /* QCOM_DSP_PRIV_H_ */
