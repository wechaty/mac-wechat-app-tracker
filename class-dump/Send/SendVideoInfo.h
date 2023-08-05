//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SendInfo.h"

@class NSString;

@interface SendVideoInfo : SendInfo
{
    BOOL _front_camera;
    BOOL _m_bForward;
    BOOL _sendRaw;
    unsigned int _video_time;
    unsigned int _video_size;
    unsigned int _m_uiVideoSource;
    NSString *_thumb_path;
    NSString *_video_path;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL sendRaw; // @synthesize sendRaw=_sendRaw;
@property(nonatomic) BOOL m_bForward; // @synthesize m_bForward=_m_bForward;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource=_m_uiVideoSource;
@property(nonatomic) BOOL front_camera; // @synthesize front_camera=_front_camera;
@property(nonatomic) unsigned int video_size; // @synthesize video_size=_video_size;
@property(nonatomic) unsigned int video_time; // @synthesize video_time=_video_time;
@property(retain, nonatomic) NSString *video_path; // @synthesize video_path=_video_path;
@property(retain, nonatomic) NSString *thumb_path; // @synthesize thumb_path=_thumb_path;
- (id)init;

@end

