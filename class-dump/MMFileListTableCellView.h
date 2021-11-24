//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "IMessageServiceFileExt-Protocol.h"
#import "MMAppMgrDownloadMsgExt-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class CAShapeLayer, MMCircularProgressView, MMDivider, MMImageView, MessageData, NSButton, NSImageView, NSString, NSTextField, NSView, TKStateMachine;

@interface MMFileListTableCellView : NSTableCellView <NSDraggingSource, NSMenuDelegate, CAAnimationDelegate, IMessageServiceFileExt, MMAppMgrDownloadMsgExt>
{
    BOOL _isSelected;
    BOOL _shouldDrawFocusRing;
    BOOL _isChoosenMode;
    BOOL _isLastRow;
    NSButton *_detailButton;
    NSImageView *_detailMask;
    NSTextField *_detailTextField;
    NSView *_progressContainer;
    MMCircularProgressView *_progressView;
    MessageData *_oMsgData;
    TKStateMachine *_stateMachine;
    CDUnknownBlockType _didContentMenuClick;
    CDUnknownBlockType _didContentMenuOpen;
    CDUnknownBlockType _didCellClick;
    CDUnknownBlockType _didDownloadButtonClick;
    CDUnknownBlockType _didCancleButtonClick;
    CDUnknownBlockType _didStopWaitButtonClick;
    MMImageView *_iconImageView;
    NSTextField *_titleTextField;
    NSTextField *_subTitleField;
    NSTextField *_timeTextField;
    NSTextField *_sizeTextField;
    MMDivider *_lineDivider;
    NSImageView *_checkBox;
    double _margin;
    CAShapeLayer *_shapeLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSImageView *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) MMDivider *lineDivider; // @synthesize lineDivider=_lineDivider;
@property(retain, nonatomic) NSTextField *sizeTextField; // @synthesize sizeTextField=_sizeTextField;
@property(retain, nonatomic) NSTextField *timeTextField; // @synthesize timeTextField=_timeTextField;
@property(retain, nonatomic) NSTextField *subTitleField; // @synthesize subTitleField=_subTitleField;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) MMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType didStopWaitButtonClick; // @synthesize didStopWaitButtonClick=_didStopWaitButtonClick;
@property(copy, nonatomic) CDUnknownBlockType didCancleButtonClick; // @synthesize didCancleButtonClick=_didCancleButtonClick;
@property(copy, nonatomic) CDUnknownBlockType didDownloadButtonClick; // @synthesize didDownloadButtonClick=_didDownloadButtonClick;
@property(copy, nonatomic) CDUnknownBlockType didCellClick; // @synthesize didCellClick=_didCellClick;
@property(copy, nonatomic) CDUnknownBlockType didContentMenuOpen; // @synthesize didContentMenuOpen=_didContentMenuOpen;
@property(copy, nonatomic) CDUnknownBlockType didContentMenuClick; // @synthesize didContentMenuClick=_didContentMenuClick;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MessageData *oMsgData; // @synthesize oMsgData=_oMsgData;
@property(retain, nonatomic) MMCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSView *progressContainer; // @synthesize progressContainer=_progressContainer;
@property(retain, nonatomic) NSTextField *detailTextField; // @synthesize detailTextField=_detailTextField;
@property(retain, nonatomic) NSImageView *detailMask; // @synthesize detailMask=_detailMask;
@property(retain, nonatomic) NSButton *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) BOOL isLastRow; // @synthesize isLastRow=_isLastRow;
@property(nonatomic) BOOL isChoosenMode; // @synthesize isChoosenMode=_isChoosenMode;
@property(nonatomic) BOOL shouldDrawFocusRing; // @synthesize shouldDrawFocusRing=_shouldDrawFocusRing;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
- (void)updateUI:(id)arg1 withKeywords:(id)arg2 isChoosenMode:(BOOL)arg3;
- (void)updateUI:(id)arg1 isChoosenMode:(BOOL)arg2;
- (id)getDragImage;
- (void)removeMultiSelectedWithoutAnimated;
- (void)showMultiSelectedWithoutAnimated;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)showSelected:(BOOL)arg1 WithFadeAnimated:(BOOL)arg2;
- (void)updateDownloadSubviews;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)initViews;
- (void)prepareForReuse;
- (BOOL)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1 withMargin:(double)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (struct CGRect)draggingFrameForEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)onStopWaitButtonClick:(id)arg1;
- (void)onRetryButtonClick:(id)arg1;
- (void)onCancleButtonClick:(id)arg1;
- (void)onDownloadButtonClick:(id)arg1;
- (void)onExpiredButtonClick:(id)arg1;
- (void)updateAppMsgState:(id)arg1 andState:(unsigned int)arg2;
- (void)onFileDidCancelUploadWithMessage:(id)arg1;
- (void)onFileDidFinishUploadWithMessage:(id)arg1;
- (void)onFileUploaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (void)onFileDidCancelDownloadWithMessage:(id)arg1;
- (void)onFileDidFailDownloadWithMessage:(id)arg1;
- (void)onFileDidFinishDownloadWithMessage:(id)arg1;
- (void)onFileDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (unsigned int)getFileDownloadStatus;
- (void)_fireStateEvent:(id)arg1;
- (void)setupFileMessageStatus;
- (void)setUpFileStateMachine;
- (void)updateFileMessageOpTime:(id)arg1;
- (void)onMenuButtonClick:(id)arg1;
- (void)contextMenuOpenWith:(id)arg1;
- (BOOL)isFileCanOpenWithQPL;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (id)realSubMenu;
- (id)fakeSubMenu;
- (id)contextMenuMenuSection3;
- (id)contextMenuMenuSection2;
- (id)contextMenuMenuSection1;
- (id)contextMenuMenuSection0;
- (id)contextMenuMenuTopSection;
- (id)getSection3MenuItem;
- (id)getSection2MenuItem;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (id)contentMenu;
- (id)menuForEvent:(id)arg1;
- (void)onStopWaitButtonClick:(id)arg1;
- (void)onRetryButtonClick:(id)arg1;
- (void)onCancleButtonClick:(id)arg1;
- (void)onDownloadButtonClick:(id)arg1;
- (void)onExpiredButtonClick:(id)arg1;
- (void)updateAppMsgState:(id)arg1 andState:(unsigned int)arg2;
- (void)onFileDidCancelUploadWithMessage:(id)arg1;
- (void)onFileDidFinishUploadWithMessage:(id)arg1;
- (void)onFileUploaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (void)onFileDidCancelDownloadWithMessage:(id)arg1;
- (void)onFileDidFailDownloadWithMessage:(id)arg1;
- (void)onFileDidFinishDownloadWithMessage:(id)arg1;
- (void)onFileDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3;
- (unsigned int)getFileDownloadStatus;
- (void)_fireStateEvent:(id)arg1;
- (void)setupFileMessageStatus;
- (void)setUpFileStateMachine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

