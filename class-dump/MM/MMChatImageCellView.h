//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatBaseCellView.h"

#import "IMessageServiceVideoExt-Protocol.h"
#import "MMChatManagerCacheExt-Protocol.h"

@class MMButton, MMCircularProgressView, NSImageView, NSString, TKStateMachine;

@interface MMChatImageCellView : MMChatBaseCellView <MMChatManagerCacheExt, IMessageServiceVideoExt>
{
    BOOL _isOriginalImage;
    int _fileMessageType;
    NSImageView *_imageView;
    TKStateMachine *_stateMachine;
    MMCircularProgressView *_progressView;
    NSImageView *_progressBackgroundView;
    MMButton *_actionButton;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isOriginalImage; // @synthesize isOriginalImage=_isOriginalImage;
@property(nonatomic) int fileMessageType; // @synthesize fileMessageType=_fileMessageType;
@property(retain, nonatomic) MMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSImageView *progressBackgroundView; // @synthesize progressBackgroundView=_progressBackgroundView;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (void)mouseUp:(id)arg1;
- (void)onPlayButtonClicked;
- (void)onDownloadButtonClicked;
- (void)_fireStateEvent:(id)arg1;
- (void)onVideoDidFailDownloadWithMessage:(id)arg1;
- (void)onVideoDidFinishDownloadWithMessage:(id)arg1 isPredownload:(BOOL)arg2;
- (void)onVideoDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (void)mouseDown:(id)arg1;
- (void)setChosen:(BOOL)arg1;
- (void)contextMenuExport;
- (void)contextMenuOpenWith:(id)arg1;
- (void)contextMenuOpenFoler;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (BOOL)allowRefer;
- (BOOL)allowChoose;
- (id)getSection2MenuItem;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (void)hdThumbImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2;
- (void)thumbImageDidLoadWithUniqueID:(id)arg1 image:(id)arg2;
- (void)layoutCheckBox;
- (void)layoutMediaContentView;
- (void)_setupStateMachine;
- (void)prepareForReuse;
- (void)willBeRecycled;
- (void)dealloc;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

