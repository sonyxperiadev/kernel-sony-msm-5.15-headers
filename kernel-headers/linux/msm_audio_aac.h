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
#ifndef _UAPI_MSM_AUDIO_AAC_H
#define _UAPI_MSM_AUDIO_AAC_H
#include <linux/msm_audio.h>
#include <linux/types.h>
#define AUDIO_SET_AAC_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), struct msm_audio_aac_config)
#define AUDIO_GET_AAC_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), struct msm_audio_aac_config)
#define AUDIO_SET_AAC_ENC_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 3), struct msm_audio_aac_enc_config)
#define AUDIO_GET_AAC_ENC_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 4), struct msm_audio_aac_enc_config)
#define AUDIO_SET_AAC_MIX_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 5), __u32)
#define AUDIO_AAC_FORMAT_ADTS - 1
#define AUDIO_AAC_FORMAT_RAW 0x0000
#define AUDIO_AAC_FORMAT_PSUEDO_RAW 0x0001
#define AUDIO_AAC_FORMAT_LOAS 0x0002
#define AUDIO_AAC_FORMAT_ADIF 0x0003
#define AUDIO_AAC_OBJECT_LC 0x0002
#define AUDIO_AAC_OBJECT_LTP 0x0004
#define AUDIO_AAC_OBJECT_ERLC 0x0011
#define AUDIO_AAC_OBJECT_BSAC 0x0016
#define AUDIO_AAC_SEC_DATA_RES_ON 0x0001
#define AUDIO_AAC_SEC_DATA_RES_OFF 0x0000
#define AUDIO_AAC_SCA_DATA_RES_ON 0x0001
#define AUDIO_AAC_SCA_DATA_RES_OFF 0x0000
#define AUDIO_AAC_SPEC_DATA_RES_ON 0x0001
#define AUDIO_AAC_SPEC_DATA_RES_OFF 0x0000
#define AUDIO_AAC_SBR_ON_FLAG_ON 0x0001
#define AUDIO_AAC_SBR_ON_FLAG_OFF 0x0000
#define AUDIO_AAC_SBR_PS_ON_FLAG_ON 0x0001
#define AUDIO_AAC_SBR_PS_ON_FLAG_OFF 0x0000
#define AUDIO_AAC_DUAL_MONO_PL_PR 0
#define AUDIO_AAC_DUAL_MONO_SL_SR 1
#define AUDIO_AAC_DUAL_MONO_SL_PR 2
#define AUDIO_AAC_DUAL_MONO_PL_SR 3
struct msm_audio_aac_config {
  signed short format;
  unsigned short audio_object;
  unsigned short ep_config;
  unsigned short aac_section_data_resilience_flag;
  unsigned short aac_scalefactor_data_resilience_flag;
  unsigned short aac_spectral_data_resilience_flag;
  unsigned short sbr_on_flag;
  unsigned short sbr_ps_on_flag;
  unsigned short dual_mono_mode;
  unsigned short channel_configuration;
  unsigned short sample_rate;
};
struct msm_audio_aac_enc_config {
  __u32 channels;
  __u32 sample_rate;
  __u32 bit_rate;
  __u32 stream_format;
};
#endif
