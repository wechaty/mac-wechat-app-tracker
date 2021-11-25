//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "IMessageServiceFileExt-Protocol.h"

@class CAShapeLayer, MMBorderView, MMCTTextView, MMTextView, MMView, NSString, SVGImageView;

@interface MMChatLogMessageCellView : MMMessageCellView <IMessageServiceFileExt>
{
    BOOL _isRetry;
    MMView *_containerView;
    MMCTTextView *_titleLabel;
    MMCTTextView *_descriptionTextView;
    MMBorderView *_divider;
    MMTextView *_bottomTextView;
    SVGImageView *_bottomLeftIcon;
    CAShapeLayer *_highlightLayer;
    CAShapeLayer *_strokeLayer;
}

+ (double)containerHeightWithMessage:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)_formattedChatLogContentWithMsg:(id)arg1;
+ (id)_genSenderAndContentString:(id)arg1 isLastOne:(BOOL)arg2;
+ (id)_formattedChatLogBottomWithStr:(id)arg1;
+ (id)_formattedChatLogTitleWithMsg:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(nonatomic) BOOL isRetry; // @synthesize isRetry=_isRetry;
@property(retain, nonatomic) SVGImageView *bottomLeftIcon; // @synthesize bottomLeftIcon=_bottomLeftIcon;
@property(retain, nonatomic) MMTextView *bottomTextView; // @synthesize bottomTextView=_bottomTextView;
@property(retain, nonatomic) MMBorderView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) MMCTTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) MMCTTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
- (void)onFileDidExpireDownloadWithRecordMessage:(id)arg1;
- (void)onFileDidFailDownloadWithRecordMessage:(id)arg1;
- (void)onFileDidFinishDownloadWithRecordMessage:(id)arg1;
- (void)resendMessage;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (struct CGRect)bubbleFrame;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (void)updateMessageLayer;
- (BOOL)draggingEnabled;
- (void)updateHighlightMaskView;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (BOOL)isCanAddToFavorites;
- (struct CGRect)clickableArea;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)layoutBottomView;
- (void)layoutdescriptionTextView;
- (void)layoutTitleLabel;
- (void)layoutContainerView;
- (void)setupAccessibility;
- (void)populateWithMessage:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)viewDidChangeEffectiveAppearance;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
