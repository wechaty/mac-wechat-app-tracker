//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "SDWebImageManagerDelegate-Protocol.h"

@class CAShapeLayer, MMAppFeedLiveView, MMImageView, MMPageControl, MMTextField, MMTimer, MMView, NSButton, NSImageView, NSString, NSTextField, NSView;

@interface MMAppFeedMessageCell : MMMessageCellView <SDWebImageManagerDelegate>
{
    MMView *_containerView;
    MMImageView *_coverImageView;
    MMTextField *_titleTextView;
    NSButton *_playIconBtn;
    MMAppFeedLiveView *_liveStatus;
    MMImageView *_authIconView;
    MMImageView *_bottomImageView;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_highlightLayer;
    NSView *_liveEndView;
    NSImageView *_liveEndIconView;
    NSTextField *_liveEndTextField;
    NSTextField *_liveReplayTextField;
    MMTimer *_liveStatusTimer;
    NSImageView *_textMaskView;
    MMPageControl *_pageControl;
}

+ (double)containerHeightWithMessage:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSImageView *textMaskView; // @synthesize textMaskView=_textMaskView;
@property(retain, nonatomic) MMTimer *liveStatusTimer; // @synthesize liveStatusTimer=_liveStatusTimer;
@property(retain, nonatomic) NSTextField *liveReplayTextField; // @synthesize liveReplayTextField=_liveReplayTextField;
@property(retain, nonatomic) NSTextField *liveEndTextField; // @synthesize liveEndTextField=_liveEndTextField;
@property(retain, nonatomic) NSImageView *liveEndIconView; // @synthesize liveEndIconView=_liveEndIconView;
@property(retain, nonatomic) NSView *liveEndView; // @synthesize liveEndView=_liveEndView;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) MMImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMAppFeedLiveView *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSButton *playIconBtn; // @synthesize playIconBtn=_playIconBtn;
@property(retain, nonatomic) MMTextField *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
- (void)webImageManager:(id)arg1 didFailWithError:(id)arg2;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
- (void)stopCheckLiveStatusTimer;
- (void)addBubbleMaskToCoverView;
- (struct CGPath *)newBubblePathForRect:(struct CGRect)arg1;
- (void)onPlayButtonClicked:(id)arg1;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (void)setupImageBlur;
- (void)updateDB:(id)arg1;
- (void)checkLiveStauts;
- (void)layoutOriginCover;
- (void)layoutCover;
- (void)loadData;
- (BOOL)alwaysDisableMessageTextViewSelectableProperty;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setChoosable:(BOOL)arg1;
- (struct CGRect)bubbleFrame;
- (void)contextMenuMuteToPlay;
- (id)getSection1MenuItem;
- (id)contextMenuMenuExtendSection;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (BOOL)allowMultipleSelect;
- (BOOL)allowChoose;
- (void)updateHighlightMaskView;
- (void)updateMessageLayer;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityContent;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (struct CGRect)clickableArea;
- (void)updateLiveTextField:(BOOL)arg1;
- (void)updateStatusTitleLocation;
- (void)layoutSubViews;
- (void)viewDidChangeEffectiveAppearance;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

