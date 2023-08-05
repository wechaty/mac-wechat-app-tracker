//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "IMMNewRecordDownloadServiceExt-Protocol.h"
#import "IMessageServiceVideoExt-Protocol.h"
#import "MMFavoriteFileServiceExt-Protocol.h"
#import "MMPreviewVideoPlayerDelegate-Protocol.h"

@class MMButton, MMCircularProgressView, MMImageView, MMPreviewVideoPlayerControl, MMQLPreviewItem, NSString, TKStateMachine;
@protocol MMPreviewVideoPlayerViewDelegate;

@interface MMPreviewVideoPlayerView : NSView <IMessageServiceVideoExt, MMFavoriteFileServiceExt, IMMNewRecordDownloadServiceExt, MMPreviewVideoPlayerDelegate>
{
    BOOL _shouldPlayVideo;
    BOOL _isPlayRawVide;
    id <MMPreviewVideoPlayerViewDelegate> _delegate;
    CDUnknownBlockType _finishDownloadBlock;
    TKStateMachine *_stateMachine;
    MMQLPreviewItem *_previewItem;
    MMImageView *_thumbnailImageView;
    MMButton *_actionButton;
    MMImageView *_progressBgView;
    MMCircularProgressView *_progressView;
    MMPreviewVideoPlayerControl *_playerControl;
    MMPreviewVideoPlayerControl *_fakePlayerControl;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isPlayRawVide; // @synthesize isPlayRawVide=_isPlayRawVide;
@property(retain, nonatomic) MMPreviewVideoPlayerControl *fakePlayerControl; // @synthesize fakePlayerControl=_fakePlayerControl;
@property(retain, nonatomic) MMPreviewVideoPlayerControl *playerControl; // @synthesize playerControl=_playerControl;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MMImageView *progressBgView; // @synthesize progressBgView=_progressBgView;
@property(retain, nonatomic) MMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MMQLPreviewItem *previewItem; // @synthesize previewItem=_previewItem;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) CDUnknownBlockType finishDownloadBlock; // @synthesize finishDownloadBlock=_finishDownloadBlock;
@property(nonatomic) BOOL shouldPlayVideo; // @synthesize shouldPlayVideo=_shouldPlayVideo;
@property(nonatomic) __weak id <MMPreviewVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDownloadPartLen:(unsigned int)arg1 TotalLen:(unsigned int)arg2;
- (BOOL)_checkRecordExtContext:(id)arg1;
- (void)onDownloadRecordExpired:(id)arg1 key:(id)arg2 context:(id)arg3;
- (void)onDownloadRecordFail:(id)arg1 key:(id)arg2 context:(id)arg3;
- (void)onDownloadRecordPart:(id)arg1 key:(id)arg2 partLen:(unsigned int)arg3 totalLen:(unsigned int)arg4 context:(id)arg5;
- (void)onDownloadRecordOK:(id)arg1 key:(id)arg2 context:(id)arg3;
- (void)favoriteFileService:(id)arg1 didFailDownloadWithFavItemData:(id)arg2 type:(int)arg3 taskID:(id)arg4;
- (void)favoriteFileService:(id)arg1 didFinishDownloadWithFavItemData:(id)arg2 type:(int)arg3 filePath:(id)arg4 taskID:(id)arg5;
- (void)favoriteFileService:(id)arg1 downloaded:(int)arg2 of:(int)arg3 WithFavItemData:(id)arg4 type:(int)arg5;
- (void)reportRawVideoPlayFailed;
- (void)performActionWhenRawVideoDownloadedButPlayFailed;
- (void)replaceOriginalVideoWhenRawVideoDownloadedAndReadyPlay;
- (void)playCompressedVideoWhenPlayRawVideoFailed;
- (void)videoPlayerStautsChanged:(int)arg1 videoPlayer:(id)arg2;
- (void)onVideoDidCancelDownloadWithMessage:(id)arg1;
- (void)onVideoDidFailDownloadWithMessage:(id)arg1;
- (void)syncPlayerControlProgress;
- (void)performWhenRawVideoDownloadedWithMsg:(id)arg1;
- (void)onVideoDidFinishDownloadWithMessage:(id)arg1 isPredownload:(BOOL)arg2;
- (void)onRawVideoDidFinishDownloadWithMessage:(id)arg1 isPredownload:(BOOL)arg2;
- (void)onVideoDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (void)startDownloadRecordVideo;
- (void)startDownloadFavVideo;
- (void)startDownloadMessageVideoWithManual:(BOOL)arg1;
- (void)startDownloadThumbIfNeeded;
- (BOOL)isAutoDownload;
- (void)popupVideoInfo;
- (void)retryDownload:(id)arg1;
- (void)onPlayButtonClicked:(id)arg1;
- (void)onDownloadButtonClicked:(id)arg1;
- (void)_setupWithDataField;
- (void)_setupWithFav;
- (void)_setupWithMessage;
- (BOOL)_isVideoAvailable;
- (void)setupWithPreviewItem:(id)arg1;
- (void)releasePlayer;
- (BOOL)onSpacePressed;
- (void)addPlayView;
- (void)appendVideoPlayerView;
- (void)_setupVideoPlayer;
- (id)getVideoFilePath;
- (void)checkVideoViewBeforePlay;
- (void)_fireStateEvent:(id)arg1;
- (void)_setupStateMachine;
- (void)_layoutProgressBgView;
- (void)_layoutActionButton;
- (void)_layoutThumbnailImageView;
- (id)defaultVideoThumbnail;
- (void)showThumbnailImageViewAgain;
- (void)dismissThumbnailImageView;
- (void)_setupSubViews;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

