//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMMediumDivider, MMOutlineButton, NSButton, NSColor, NSMutableArray, NSVisualEffectView;
@protocol MMImageEditToolbarViewDelegate;

@interface MMImageEditToolbarView : NSView
{
    BOOL _postedBeginEditNotification;
    id <MMImageEditToolbarViewDelegate> _delegate;
    long long _graphTypeSelected;
    NSMutableArray *_graphButtonArray;
    NSMutableArray *_functionButtonArray;
    MMOutlineButton *_finishButton;
    NSButton *_menuButton;
    NSColor *_backgroundColor;
    MMMediumDivider *_seperateImageViewStart;
    MMMediumDivider *_seperateImageViewMiddle;
    MMMediumDivider *_seperateImageViewEnd;
    NSVisualEffectView *_gaussEffectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSVisualEffectView *gaussEffectView; // @synthesize gaussEffectView=_gaussEffectView;
@property(nonatomic) BOOL postedBeginEditNotification; // @synthesize postedBeginEditNotification=_postedBeginEditNotification;
@property(retain, nonatomic) MMMediumDivider *seperateImageViewEnd; // @synthesize seperateImageViewEnd=_seperateImageViewEnd;
@property(retain, nonatomic) MMMediumDivider *seperateImageViewMiddle; // @synthesize seperateImageViewMiddle=_seperateImageViewMiddle;
@property(retain, nonatomic) MMMediumDivider *seperateImageViewStart; // @synthesize seperateImageViewStart=_seperateImageViewStart;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) MMOutlineButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) NSMutableArray *functionButtonArray; // @synthesize functionButtonArray=_functionButtonArray;
@property(retain, nonatomic) NSMutableArray *graphButtonArray; // @synthesize graphButtonArray=_graphButtonArray;
@property(nonatomic) long long graphTypeSelected; // @synthesize graphTypeSelected=_graphTypeSelected;
@property(nonatomic) __weak id <MMImageEditToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selectGraphTypeReportWithType:(unsigned long long)arg1;
- (id)functionButtonByGraphType:(unsigned long long)arg1;
- (id)graphButtonByGraphType:(long long)arg1;
- (struct CGRect)buttonFrameOfGraphType:(long long)arg1;
- (struct CGRect)buttonFrameOfFunctionType:(long long)arg1;
- (void)onMenuButtonClicked:(id)arg1;
- (void)onFunctionButtonClicked:(id)arg1;
- (void)onGraphButtonClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)configAppearanceAndLayout;
- (void)disableCustomButtons;
- (void)toggleEnableShrink:(BOOL)arg1;
- (void)toggleEnableMagnify:(BOOL)arg1;
- (void)disableEdit;
@property(nonatomic) BOOL enableUndo;
- (void)setupImageView;
- (void)setupCustomButtons;
- (void)setupFunctionButtons;
- (void)setupGraphButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

