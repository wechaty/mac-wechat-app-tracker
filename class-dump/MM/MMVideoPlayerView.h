//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

#import "MMovieDecoderDelegate-Protocol.h"

@class MMovieDecoder, NSImage, NSString;
@protocol MMVideoPlayerViewDelegate;

@interface MMVideoPlayerView : NSImageView <MMovieDecoderDelegate>
{
    MMovieDecoder *m_decoder;
    NSImage *m_firstFrame;
    NSImage *m_lastFrame;
    BOOL _isPlaying;
    id <MMVideoPlayerViewDelegate> delegate;
    NSString *_cpKey;
    CDUnknownBlockType _didEndPlayBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didEndPlayBlock; // @synthesize didEndPlayBlock=_didEndPlayBlock;
@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) NSImage *lastFrame; // @synthesize lastFrame=m_lastFrame;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> delegate; // @synthesize delegate;
- (void)mMovieDecoder:(id)arg1 onNewVideoFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoderOnDecodeFinished:(id)arg1;
- (void)restart;
- (void)pauseForRelease;
- (void)pause;
- (void)loadAndPlay:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

