//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "ISolitaireMgrExt-Protocol.h"
#import "MMCTTextViewDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class CAShapeLayer, MMCTTextView, MMRoundedRectangleView, MMTextView, NSProgressIndicator, NSString, NSTextField, NSTextView, SVGImageView;

@interface MMTextMessageCellView : MMMessageCellView <MMCTTextViewDelegate, ISolitaireMgrExt, NSTextViewDelegate>
{
    struct CGRect _calculatedBounds;
    struct CGRect _calculatedTextRect;
    struct CGRect _calculatedBubbleRect;
    struct CGRect _calculatedTranslationRect;
    struct CGRect _calculatedBrandRect;
    struct CGRect _calculatedsolitaireRect;
    BOOL _resizedForNewBounds;
    BOOL _m_isSolitaire;
    BOOL _m_isAnnouncement;
    BOOL _isNeedScrollToSelf;
    MMCTTextView *_messageTextView;
    MMCTTextView *_translationTextView;
    MMRoundedRectangleView *_translationBrandView;
    NSProgressIndicator *_waitingProgressIndicator;
    SVGImageView *_translationGetIconView;
    NSTextView *_translationBrandTextView;
    unsigned long long _recalcHeightCount;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_dividerLayer;
    NSString *_textLink;
    MMRoundedRectangleView *_solitaireTipsView;
    NSTextField *_solitaireTipsTextField;
    SVGImageView *_solitaireTipsIconView;
    MMTextView *_announceLearnMoreTextView;
}

+ (id)_translationStringForTableItem:(id)arg1;
+ (id)_bodyStringForTableItem:(id)arg1;
+ (id)formatMessageText:(id)arg1 replaceHtmlATag:(BOOL)arg2 isSendFromSelf:(BOOL)arg3 isQQEmojisToImages:(BOOL)arg4;
+ (id)formatMessageText:(id)arg1 replaceHtmlATag:(BOOL)arg2 isSendFromSelf:(BOOL)arg3;
+ (double)availableTextWidthForItem:(id)arg1 constraitWidth:(double)arg2;
+ (struct CGRect)_getOneLineTranslationRectWithWidthConstraint:(double)arg1;
+ (struct CGRect)_getRectForAttrString:(id)arg1 widthConstraint:(double)arg2;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (void)cellViewRectsForTableItem:(id)arg1 constrainedToWidth:(double)arg2 leftPadding:(double)arg3 bounds:(struct CGRect *)arg4 bubble:(struct CGRect *)arg5 text:(struct CGRect *)arg6 translation:(struct CGRect *)arg7 brand:(struct CGRect *)arg8 solitaire:(struct CGRect *)arg9;
+ (struct CGSize)getAssumedTextSizeWithMessageBodyTextRect:(struct CGRect)arg1;
+ (double)adjustHeightToMakeCenter;
+ (struct CGRect)getTranslationRectWithTableItem:(id)arg1 widthConstraint:(double)arg2;
+ (struct CGRect)getMessageBodyTextRectWithTableItem:(id)arg1 widthConstraint:(double)arg2;
+ (struct CGRect)translatedStringBoundsWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTextView *announceLearnMoreTextView; // @synthesize announceLearnMoreTextView=_announceLearnMoreTextView;
@property(nonatomic) BOOL isNeedScrollToSelf; // @synthesize isNeedScrollToSelf=_isNeedScrollToSelf;
@property(retain, nonatomic) SVGImageView *solitaireTipsIconView; // @synthesize solitaireTipsIconView=_solitaireTipsIconView;
@property(retain, nonatomic) NSTextField *solitaireTipsTextField; // @synthesize solitaireTipsTextField=_solitaireTipsTextField;
@property(retain, nonatomic) MMRoundedRectangleView *solitaireTipsView; // @synthesize solitaireTipsView=_solitaireTipsView;
@property(nonatomic) BOOL m_isAnnouncement; // @synthesize m_isAnnouncement=_m_isAnnouncement;
@property(nonatomic) BOOL m_isSolitaire; // @synthesize m_isSolitaire=_m_isSolitaire;
@property(retain, nonatomic) NSString *textLink; // @synthesize textLink=_textLink;
@property(retain, nonatomic) CAShapeLayer *dividerLayer; // @synthesize dividerLayer=_dividerLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) unsigned long long recalcHeightCount; // @synthesize recalcHeightCount=_recalcHeightCount;
@property(retain, nonatomic) NSTextView *translationBrandTextView; // @synthesize translationBrandTextView=_translationBrandTextView;
@property(retain, nonatomic) SVGImageView *translationGetIconView; // @synthesize translationGetIconView=_translationGetIconView;
@property(retain, nonatomic) NSProgressIndicator *waitingProgressIndicator; // @synthesize waitingProgressIndicator=_waitingProgressIndicator;
@property(nonatomic) BOOL resizedForNewBounds; // @synthesize resizedForNewBounds=_resizedForNewBounds;
@property(retain, nonatomic) MMRoundedRectangleView *translationBrandView; // @synthesize translationBrandView=_translationBrandView;
@property(retain, nonatomic) MMCTTextView *translationTextView; // @synthesize translationTextView=_translationTextView;
@property(retain, nonatomic) MMCTTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
- (void)onSolitaireDeactiveWithChatName:(id)arg1 LocalIds:(id)arg2;
- (void)onSolitaireActiveWithChatName:(id)arg1 LocalIds:(id)arg2;
- (void)registerSolitaireExtIfNeeded;
- (void)pushSolitaireWindowController:(BOOL)arg1;
- (BOOL)allowMultipleSelect;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)copyActionInTextView:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (id)draggablePasteboardTypes;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (struct CGRect)clickableArea;
- (id)getTextViewSelectedString;
- (void)contextMenuSearch;
- (void)contextMenuSolitaire;
- (void)updateMessageCellHeight:(BOOL)arg1;
- (void)contextMenuHideTranslation;
- (void)doxxCgi;
- (void)contextMenuTranslate;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)getURLString;
- (id)contentForSharing;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (id)contextMenuMenuExtendSection;
- (BOOL)alwaysDisableMessageTextViewSelectableProperty;
- (id)translationBrandDividerColor;
- (id)bubbleFillColor;
- (id)textBackgoundColor;
- (void)setHighlighted:(BOOL)arg1;
- (void)_updateMessageTextViewFrames;
- (double)getShowInWidth;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToSuperview;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)shouldDrawBubbleMask;
- (void)populateWithMessage:(id)arg1;
- (void)updateHighlightMaskView;
- (void)prepareForReuse;
- (void)setHasTopPadding:(double)arg1;
- (void)_frameChanged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityPerformPress;
- (void)updateAccessibility;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

