//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class LiveInfo, MMImageView;

@interface LVLiveReplayViewController : NSViewController
{
    LiveInfo *_liveInfo;
    MMImageView *_thumbnailImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
- (void)loadVideoPlayer;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLiveInfo:(id)arg1;

@end

