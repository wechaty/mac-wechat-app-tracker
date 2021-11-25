//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMButton.h"

#import "NSDraggingDestination-Protocol.h"

@class MMBadgeOverlayView, MMTabbarController, MMTabbarItem, MMTimer, NSImage, NSMutableDictionary, NSString;

@interface MMTabbarButton : MMButton <NSDraggingDestination>
{
    BOOL _dragEnded;
    BOOL _didBeginLongDrop;
    BOOL _isInAnimation;
    MMBadgeOverlayView *_badgeView;
    long long _badgeValue;
    MMTabbarItem *_tabbarItem;
    SEL _doubleAction;
    NSImage *_onStateImage;
    NSImage *_onStateAlternateImage;
    NSImage *_offStateImage;
    NSImage *_offStateAlternateImage;
    MMTabbarController *_tabBarController;
    NSMutableDictionary *_animationImageCache;
    MMTimer *_longDropTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *longDropTimer; // @synthesize longDropTimer=_longDropTimer;
@property(nonatomic) BOOL isInAnimation; // @synthesize isInAnimation=_isInAnimation;
@property(retain, nonatomic) NSMutableDictionary *animationImageCache; // @synthesize animationImageCache=_animationImageCache;
@property(nonatomic) __weak MMTabbarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) NSImage *offStateAlternateImage; // @synthesize offStateAlternateImage=_offStateAlternateImage;
@property(retain, nonatomic) NSImage *offStateImage; // @synthesize offStateImage=_offStateImage;
@property(retain, nonatomic) NSImage *onStateAlternateImage; // @synthesize onStateAlternateImage=_onStateAlternateImage;
@property(retain, nonatomic) NSImage *onStateImage; // @synthesize onStateImage=_onStateImage;
@property(nonatomic) SEL doubleAction; // @synthesize doubleAction=_doubleAction;
@property(nonatomic) __weak MMTabbarItem *tabbarItem; // @synthesize tabbarItem=_tabbarItem;
@property(nonatomic) long long badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) MMBadgeOverlayView *badgeView; // @synthesize badgeView=_badgeView;
- (BOOL)performDragOperation:(id)arg1;
- (void)_checkStartLongDrop;
- (void)stopLongDropTimer;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setup;
- (void)setState:(long long)arg1;
- (id)initWithTabbarItem:(id)arg1;
- (id)initWithTitle:(id)arg1 onStateImage:(id)arg2 onStateAlternateImage:(id)arg3 offStateImage:(id)arg4 offStateAlternateImage:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
