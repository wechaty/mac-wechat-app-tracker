//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString;

@interface _TtC6WeChat15TrackButtonView : NSView
{
    // Error parsing type: , name: target
    // Error parsing type: , name: action
    // Error parsing type: , name: isEnabled
    // Error parsing type: , name: leftAlign
    // Error parsing type: , name: imageName
    // Error parsing type: , name: imageSize
    // Error parsing type: , name: radius
    // Error parsing type: , name: buttonImageView
    // Error parsing type: , name: bkgView
    // Error parsing type: , name: clickCoverView
    // Error parsing type: , name: visualEffectView
    // Error parsing type: , name: bkSize
    // Error parsing type: , name: hideImageWhenMouseExit
    // Error parsing type: , name: bkColor
    // Error parsing type: , name: clickCoverColor
    // Error parsing type: , name: hoverHidingDelayInSec
    // Error parsing type: , name: hoverHidingTimer
    // Error parsing type: , name: lastMovedLocation
    // Error parsing type: , name: trackingArea
    // Error parsing type: , name: buttonPresent
}

- (void).cxx_destruct;
- (void)hideButton;
- (id)hitTest:(struct CGPoint)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) struct CGColor *clickCoverColor; // @synthesize clickCoverColor;
@property(nonatomic, retain) struct CGColor *bkColor; // @synthesize bkColor;
@property(nonatomic) BOOL hideImageWhenMouseExit; // @synthesize hideImageWhenMouseExit;
@property(nonatomic) struct CGSize bkSize; // @synthesize bkSize;
@property(nonatomic) double radius; // @synthesize radius;
- (id)accessibilityRole;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize;
@property(nonatomic, copy) NSString *imageName;
@property(nonatomic) BOOL leftAlign; // @synthesize leftAlign;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled;
@property(nonatomic) SEL action; // @synthesize action;
@property(nonatomic) __weak id target; // @synthesize target;

@end

