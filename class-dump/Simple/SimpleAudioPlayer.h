//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SimpleAudioState;

@interface SimpleAudioPlayer : NSObject
{
    BOOL _m_hasPrepare;
    SimpleAudioState *m_bufferState;
}

+ (void)sprintRetCode:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL m_hasPrepare; // @synthesize m_hasPrepare=_m_hasPrepare;
@property(retain, nonatomic) SimpleAudioState *m_bufferState; // @synthesize m_bufferState;
- (void)printRetCode:(int)arg1;
- (void)stop;
- (BOOL)pause;
- (int)play;
- (BOOL)prepareToPlay;
- (BOOL)preparePlay;
- (BOOL)audioQueueStop;
- (int)audioQueueStart;
- (BOOL)updateBuffer;
- (void)clearBuffer;
- (BOOL)updateQueue;
- (void)clearQueue;
- (BOOL)updateDataFormat;
- (id)getState;
- (id)init;
- (void)dealloc;

@end

