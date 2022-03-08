//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "MMCTTextViewDelegate-Protocol.h"
#import "MMVoiceTranslateExt-Protocol.h"

@class CAShapeLayer, MMCTTextView, MMRoundedRectangleView, MMTextField, MMTimer, NSImageView, NSProgressIndicator, NSString, NSTextField, SVGImageView;

@interface MMVoiceMessageCellView : MMMessageCellView <MMVoiceTranslateExt, MMCTTextViewDelegate>
{
    struct CGRect _calculatedTranslationRect;
    BOOL _mouseDown;
    BOOL _isFirstStartTrans;
    BOOL _isFirstEndTrans;
    MMRoundedRectangleView *_unreadTip;
    MMTextField *_voiceTimeLabel;
    SVGImageView *_voiceWavImageView;
    NSImageView *_voiceToTextFailedImageView;
    MMTimer *_animationTimer;
    unsigned long long _animationCount;
    MMCTTextView *_translationTextView;
    NSProgressIndicator *_waitingProgressIndicator;
    CAShapeLayer *_highlightLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_dividerLayer;
    NSTextField *_noDataMetionTextField;
    unsigned long long _recalcHeightCount;
}

+ (double)cellWidthOfNoDataMetionTextCell;
+ (struct CGSize)translatedStringBoundsWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long recalcHeightCount; // @synthesize recalcHeightCount=_recalcHeightCount;
@property(nonatomic) BOOL isFirstEndTrans; // @synthesize isFirstEndTrans=_isFirstEndTrans;
@property(nonatomic) BOOL isFirstStartTrans; // @synthesize isFirstStartTrans=_isFirstStartTrans;
@property(retain, nonatomic) NSTextField *noDataMetionTextField; // @synthesize noDataMetionTextField=_noDataMetionTextField;
@property(retain, nonatomic) CAShapeLayer *dividerLayer; // @synthesize dividerLayer=_dividerLayer;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(nonatomic) BOOL mouseDown; // @synthesize mouseDown=_mouseDown;
@property(retain, nonatomic) NSProgressIndicator *waitingProgressIndicator; // @synthesize waitingProgressIndicator=_waitingProgressIndicator;
@property(retain, nonatomic) MMCTTextView *translationTextView; // @synthesize translationTextView=_translationTextView;
@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(retain, nonatomic) MMTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NSImageView *voiceToTextFailedImageView; // @synthesize voiceToTextFailedImageView=_voiceToTextFailedImageView;
@property(retain, nonatomic) SVGImageView *voiceWavImageView; // @synthesize voiceWavImageView=_voiceWavImageView;
@property(retain, nonatomic) MMTextField *voiceTimeLabel; // @synthesize voiceTimeLabel=_voiceTimeLabel;
@property(retain, nonatomic) MMRoundedRectangleView *unreadTip; // @synthesize unreadTip=_unreadTip;
- (void)onVoiceTranslateEnd:(id)arg1 voiceText:(id)arg2 voiceToTextStatus:(unsigned int)arg3;
- (void)onVoiceTranslateProceed:(id)arg1;
- (void)onVoiceTranslateStart:(id)arg1;
- (void)translateWithAuto:(BOOL)arg1;
- (void)playerDidStopPlay:(id)arg1;
- (void)playerDidStartPlay:(id)arg1;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)contextMenuRetryTranscribe;
- (void)contextMenuTranscribe;
- (void)contextMenuWipeOutText;
- (id)getSection1MenuItem;
- (id)getSection0MenuItem;
- (id)contextMenuMenuExtendSection;
- (BOOL)allowMultipleSelect;
- (void)copyActionInTextView:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)isSendFromSelf;
- (void)resendMessage;
- (struct CGRect)rectForContextMenuButton;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggablePasteboardTypes;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (double)voiceBubbleWidthWithTime:(unsigned int)arg1;
- (void)stopWavAnimation;
- (void)wavAnimation;
- (void)startWavAnimation;
- (void)playAudio;
- (void)mouseExited:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateHighlightMaskView;
- (id)getFillColor;
- (struct CGRect)clickableArea;
- (struct CGRect)bubbleFrame;
- (void)resetVoiceWavImage;
- (void)updateMessageHeight;
- (struct CGRect)rectForAccessory:(int)arg1;
- (void)updateVoiceMessageViewFrames;
- (void)layoutWavImageView:(struct CGRect)arg1;
- (void)layoutVoiceTimeLabel:(struct CGRect)arg1;
- (void)layoutUnreadTip:(struct CGRect)arg1;
- (void)layoutTranslationTextView;
- (void)layoutTranslationTextViewContent;
- (void)updateMessageLayer;
- (void)populateWithMessage:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (double)getShowInWidth;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

