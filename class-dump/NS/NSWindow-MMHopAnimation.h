//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface NSWindow (MMHopAnimation)
- (void)doHopAnimationWithImage:(id)arg1 originRect:(struct CGRect)arg2 destinationRect:(struct CGRect)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)doHopAnimationWithImage:(id)arg1 originView:(id)arg2 destinationView:(id)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)doHopAnimationWithImage:(id)arg1 originRect:(struct CGRect)arg2 topTabIndex:(int)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)makeWindowNonBehaviorFullScreenPrimary;
- (void)makeWindowBehaviorFullScreenPrimary;
- (void)makeWindowNonResizable;
- (void)makeWindowResizable;
- (BOOL)mm_isFullScreen;
- (id)windowImage;
@property double bottom;
@property double top;
@property double right;
@property double left;
@property double height;
@property double width;
@property double y;
@property double x;
@end

