//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSString, NSTextField, NSTrackingArea;

@interface MMChatDetailAnnounceView : NSView
{
    NSTextField *_label;
    NSTextField *_announceContent;
    NSTrackingArea *_trackingArea;
    NSButton *_button;
    NSString *_contentString;
    CDUnknownBlockType _didShowAnnouncementBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didShowAnnouncementBlock; // @synthesize didShowAnnouncementBlock=_didShowAnnouncementBlock;
@property(retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSTextField *announceContent; // @synthesize announceContent=_announceContent;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)updateTrackingAreaWithRect:(struct CGRect)arg1;
- (void)updateTracking;
- (void)relayout;
- (void)updateContent:(id)arg1 isGroupChatOwner:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

