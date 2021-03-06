//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "LVLiveServiceExt-Protocol.h"

@class CAShapeLayer, LVGroupLiveInfoItem, MMBorderView, MMCTTextView, NSString, NSTextField, NSView, SVGImageView;

@interface MMLiveMessageCellView : MMMessageCellView <LVLiveServiceExt>
{
    NSView *_containerView;
    NSTextField *_titleLabel;
    CAShapeLayer *_strokeLayer;
    NSTextField *_appName;
    MMBorderView *_divider;
    MMCTTextView *_liveStatus;
    SVGImageView *_appIcon;
    unsigned long long _currentLiveId;
    LVGroupLiveInfoItem *_groupLiveItem;
    CAShapeLayer *_highlightLayer;
}

+ (double)containerHeightWithMessage:(id)arg1;
+ (id)messageTableItemAppName:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) LVGroupLiveInfoItem *groupLiveItem; // @synthesize groupLiveItem=_groupLiveItem;
@property(nonatomic) unsigned long long currentLiveId; // @synthesize currentLiveId=_currentLiveId;
@property(retain, nonatomic) SVGImageView *appIcon; // @synthesize appIcon=_appIcon;
@property(retain, nonatomic) MMCTTextView *liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) MMBorderView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (id)getSection1MenuItem;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (void)onLiveClosedResult:(BOOL)arg1 andLiveId:(unsigned long long)arg2;
- (void)onGetLiveInfoWithLiveId:(unsigned long long)arg1 andRoomId:(id)arg2 andLiveInfo:(id)arg3;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)bubbleFrame;
- (BOOL)allowMultipleSelect;
- (struct CGRect)clickableArea;
- (void)checkLiveStatus;
- (void)updateMessageLayer;
- (void)layoutBottomView;
- (void)layoutLiveStatus:(int)arg1;
- (void)layoutTitleLabel;
- (void)layoutContainerView;
- (void)updateHighlightMaskView;
- (void)setupAccessibility;
- (void)populateWithMessage:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (id)defaultThumbnailImg;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

