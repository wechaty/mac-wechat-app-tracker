//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMView.h"

@class NSButton, NSClipView, NSMutableArray, SwipeDetector;

@interface MMStickerPickerToolbar : MMView
{
    NSClipView *_clipView;
    NSButton *_leftChevron;
    NSButton *_rightChevron;
    double _buttonWidth;
    NSMutableArray *_groupButtons;
    int _curPage;
    SwipeDetector *_swipeDetector;
    BOOL _isAnimating;
    BOOL _shouldShowEmoji;
    BOOL _shouldHiddenSticker;
    unsigned long long _selectedIndex;
    CDUnknownBlockType _didSelectGroupCallback;
    CDUnknownBlockType _toolbarButtonDidChangeHighlighted;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType toolbarButtonDidChangeHighlighted; // @synthesize toolbarButtonDidChangeHighlighted=_toolbarButtonDidChangeHighlighted;
@property(copy, nonatomic) CDUnknownBlockType didSelectGroupCallback; // @synthesize didSelectGroupCallback=_didSelectGroupCallback;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) BOOL shouldHiddenSticker; // @synthesize shouldHiddenSticker=_shouldHiddenSticker;
@property(nonatomic) BOOL shouldShowEmoji; // @synthesize shouldShowEmoji=_shouldShowEmoji;
- (void)viewDidChangeEffectiveAppearance;
- (void)_resolveChevronsOverlayButtons:(unsigned long long)arg1;
- (unsigned long long)_calRightChevronPosAtPage:(unsigned long long)arg1 withPerPageItemCount:(unsigned long long)arg2;
- (unsigned long long)_calLeftChevronPosAtPage:(unsigned long long)arg1 withPerPageItemCount:(unsigned long long)arg2;
- (void)scrollWheel:(id)arg1;
- (BOOL)scrollToPage:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToStart:(BOOL)arg1;
- (void)_updateChevronVisibilityForX:(double)arg1;
- (BOOL)_scrollTo:(double)arg1 animated:(BOOL)arg2;
- (void)rightChevronPressed:(id)arg1;
- (unsigned long long)_countForButtonFullfillToPage:(unsigned long long)arg1 withPerPageItemCount:(unsigned long long)arg2;
- (void)leftChevronPressed:(id)arg1;
- (void)groupButtonPressed:(id)arg1;
- (BOOL)updateGroupButton:(id)arg1;
- (void)setSelectedIndexWithoutCallback:(unsigned long long)arg1;
- (void)_layoutButtons;
- (BOOL)updateStoreEmticonIcon:(id)arg1;
- (long long)getEmoticonGroupType;
- (id)initWithFrame:(struct CGRect)arg1;

@end

