#ifndef DT_EVENT_DEF_H
#define DT_EVENT_DEF_H

enum dtp_event_server_id {
    EVENT_SERVER_INVALID = -1,
    EVENT_SERVER_ID_MAIN = 0,
    EVENT_SERVER_ID_PLAYER,
    EVENT_SERVER_ID_AUDIO,
    EVENT_SERVER_ID_VIDEO,
};

#define EVENT_SERVER_NAME_MAIN "SERVER-MAIN"
#define EVENT_SERVER_NAME_PLAYER "SERVER-PLAYER"
#define EVENT_SERVER_NAME_AUDIO "SERVER-AUDIO"
#define EVENT_SERVER_NAME_VIDEO "SERVER-VIDEO"
#define EVENT_SERVER_NAME_SUB "SERVER-SUB"

enum dtp_event {
    /*player event */
    PLAYER_EVENT_INVALID = -1,
    PLAYER_EVENT_START,
    PLAYER_EVENT_PAUSE,
    PLAYER_EVENT_RESUME,
    PLAYER_EVENT_SEEK,
    PLAYER_EVENT_STOP,

    /*audio event */
    AUDIO_EVENT_START = 100,
    AUDIO_EVENT_PAUSE,
    AUDIO_EVENT_RESUME,
    AUDIO_EVENT_MUTE,
    AUDIO_EVENT_STOP,
    AUDIO_EVENT_RELEASE,

    /*video event */
    VIDEO_EVENT_START = 200,
    VIDEO_EVENT_PAUSE,
    VIDEO_EVENT_RESUME,
    VIDEO_EVENT_STOP,
};

#endif
