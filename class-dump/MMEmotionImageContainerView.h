//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSTrackingArea;
@protocol MMEmotionImageContainerViewDelegate;

@interface MMEmotionImageContainerView : NSView
{
    NSTrackingArea *trackingArea;
    unsigned long long _selectedIndex;
    NSImageView *_imageView;
    id <MMEmotionImageContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMEmotionImageContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)setSelected:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

