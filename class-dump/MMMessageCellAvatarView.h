//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSCursor, NSString, NSTrackingArea;

@interface MMMessageCellAvatarView : NSImageView <CAAnimationDelegate>
{
    BOOL m_isMouseDown;
    BOOL m_isMousePressed;
    BOOL _allowPress;
    BOOL _allowPat;
    CDUnknownBlockType _didDoubleClickBlock;
    CDUnknownBlockType _didClickBlock;
    CDUnknownBlockType _didPressBlock;
    NSTrackingArea *_trackingArea;
    NSCursor *_patClickBeforCursor;
    NSCursor *_patClickAfterCursor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCursor *patClickAfterCursor; // @synthesize patClickAfterCursor=_patClickAfterCursor;
@property(retain, nonatomic) NSCursor *patClickBeforCursor; // @synthesize patClickBeforCursor=_patClickBeforCursor;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(copy, nonatomic) CDUnknownBlockType didPressBlock; // @synthesize didPressBlock=_didPressBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickBlock; // @synthesize didClickBlock=_didClickBlock;
@property(copy, nonatomic) CDUnknownBlockType didDoubleClickBlock; // @synthesize didDoubleClickBlock=_didDoubleClickBlock;
@property(nonatomic) BOOL allowPat; // @synthesize allowPat=_allowPat;
@property(nonatomic) BOOL allowPress; // @synthesize allowPress=_allowPress;
- (void)updateMouseCursorToAfter;
- (void)updateMouseCursorToBefore;
- (void)cursorUpdate:(id)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (void)doubleClickAction;
- (void)singleClickAction;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)getShakeHeadAnimation;
- (id)revokeShakeHeadAnimationForTimeOffset:(double)arg1;
- (id)shakeHeadAnimationForTimeOffset:(double)arg1;
- (void)revokeShakeHead;
- (void)shakeHeadAndHideCursor:(BOOL)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (double)arcWithAngle:(double)arg1;
- (void)prepareRevokeShakeHead;
- (void)prepareShakeHead;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

