#ifndef DT_AV_TYPE_H
#define DT_AV_TYPE_H

typedef enum
{
    DT_MEDIA_FORMAT_INVALID = -1,
    DT_MEDIA_FORMAT_MPEGTS,
    DT_MEDIA_FORMAT_MPEGPS,
    DT_MEDIA_FORMAT_RM,
    DT_MEDIA_FORMAT_AVI,
    DT_MEDIA_FORMAT_MKV,
    DT_MEDIA_FORMAT_MOV,
    DT_MEDIA_FORMAT_MP4,
    DT_MEDIA_FORMAT_FLV,
    DT_MEDIA_FORMAT_AAC,
    DT_MEDIA_FORMAT_AC3,
    DT_MEDIA_FORMAT_MP3,
    DT_MEDIA_FORMAT_WAV,
    DT_MEDIA_FORMAT_DTS,
    DT_MEDIA_FORMAT_FLAC,
    DT_MEDIA_FORMAT_H264,
    DT_MEDIA_FORMAT_AVS,
    DT_MEDIA_FORMAT_M2V,
    DT_MEDIA_FORMAT_P2P,
    DT_MEDIA_FORMAT_ASF,
    DT_MEDIA_FORMAT_RTSP,
    DT_MEDIA_FORMAT_APE,
    DT_MEDIA_FORMAT_AMR,
    DT_MEDIA_FORMAT_UNKOWN,
} dtmedia_format_t;

typedef enum
{
    DT_VIDEO_FORMAT_INVALID = -1,
    DT_VIDEO_FORMAT_H264,
    DT_VIDEO_FORMAT_UNKOWN,
} dtvideo_format_t;

typedef enum
{
    DT_AUDIO_FORMAT_INVALID = -1,
    DT_AUDIO_FORMAT_AAC,
    DT_AUDIO_FORMAT_AC3,
    DT_AUDIO_FORMAT_UNKOWN,
} dtaudio_format_t;

typedef enum
{
    DT_SUB_FORMAT_INVALID = -1,
    DT_SUB_FORMAT_UNKOWN,
} dtsub_format_t;


typedef enum
{
    DT_SUBTITLE_FORMAT_INVALID = -1,
    DT_SUBTITLE_FORMAT_UNKOWN,
} dtsubtitle_format_t;

#endif
