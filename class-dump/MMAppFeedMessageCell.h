//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "SDWebImageManagerDelegate-Protocol.h"

@class CAShapeLayer, MMAppFeedLiveView, MMDivider, MMImageView, MMTextField, MMTimer, MMView, NSButton, NSImageView, NSString, NSTextField;

@interface MMAppFeedMessageCell : MMMessageCellView <SDWebImageManagerDelegate>
{
    MMView *_containerView;
    MMImageView *_coverImageView;
    NSImageView *_userImageView;
    MMTextField *_titleTextView;
    MMTextField *_descLabel;
    NSButton *_playIconBtn;
    MMAppFeedLiveView *_liveStatus;
    MMImageView *_authIconView;
    MMDivider *_divider;
    MMImageView *_bottomImageView;
    NSTextField *_bottomTextView;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_highlightLayer;
    NSImageView *_zhiboIConView;
    NSTextField *_zhiboStatusField;
    MMTimer *_liveStatusTimer;
}

+ (double)containerHeightWithMessage:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *liveStatusTimer; // @synthesize liveStatusTimer=_liveStatusTimer;
@property(retain, nonatomic) NSTextField *zhiboStatusField; // @synthesize zhiboStatusField=_zhiboStatusField;
@property(retain, nonatomic) NSImageView *zhiboIConView; // @synthesize zhiboIConView=_zhiboIConView;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) NSTextField *bottomTextView; // @synthesize bottomTextView=_bottomTextView;
@property(retain, nonatomic) MMImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) MMImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMAppFeedLiveView *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSButton *playIconBtn; // @synthesize playIconBtn=_playIconBtn;
@property(retain, nonatomic) MMTextField *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMTextField *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) NSImageView *userImageView; // @synthesize userImageView=_userImageView;
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
- (void)checkLiveStauts;
- (void)layoutCover;
- (void)getAuthIconView;
- (void)loadData;
- (id)authIconUrl;
- (id)authType;
- (id)coverUrlString;
- (id)descContent;
- (id)userName;
- (id)avatareUrlString;
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
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setupAccessibility;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (struct CGRect)clickableArea;
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

