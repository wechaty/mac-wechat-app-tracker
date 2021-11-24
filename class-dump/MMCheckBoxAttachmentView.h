//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseBulletAttachmentView.h"

@class MMButton, NSTrackingArea;
@protocol MMCheckBoxAttachmentViewDelegate;

@interface MMCheckBoxAttachmentView : MMBaseBulletAttachmentView
{
    NSTrackingArea *_trackingArea;
    BOOL _checked;
    MMButton *_checkBoxButton;
    id <MMCheckBoxAttachmentViewDelegate> _checkboxAttachmentViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMCheckBoxAttachmentViewDelegate> checkboxAttachmentViewDelegate; // @synthesize checkboxAttachmentViewDelegate=_checkboxAttachmentViewDelegate;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(retain, nonatomic) MMButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
- (BOOL)getState;
- (void)checkState:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)adjustCheckBoxButtonImage:(BOOL)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

