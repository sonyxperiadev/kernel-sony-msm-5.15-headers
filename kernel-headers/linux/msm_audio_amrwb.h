/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_MSM_AUDIO_AMRWB_H
#define _UAPI_MSM_AUDIO_AMRWB_H
#include <linux/msm_audio.h>
#include <linux/types.h>
#define AUDIO_GET_AMRWB_ENC_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), struct msm_audio_amrwb_enc_config)
#define AUDIO_SET_AMRWB_ENC_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), struct msm_audio_amrwb_enc_config)
struct msm_audio_amrwb_enc_config {
  __u32 band_mode;
  __u32 dtx_enable;
  __u32 frame_format;
};
#endif
