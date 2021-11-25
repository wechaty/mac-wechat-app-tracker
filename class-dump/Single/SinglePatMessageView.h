//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTextViewDelegate-Protocol.h"
#import "SendPatExt-Protocol.h"

@class MMTextView, MessageData, NSMutableAttributedString, NSProgressIndicator, NSString, NSTrackingArea, PatWrap;

@interface SinglePatMessageView : NSView <NSTextViewDelegate, SendPatExt>
{
    BOOL _isChatDetailScene;
    BOOL _isRecalling;
    MMTextView *_patMsgTextView;
    MMTextView *_recallTextField;
    PatWrap *_patViewDataSource;
    NSProgressIndicator *_waitingProgressIndicator;
    NSMutableAttributedString *_displayString;
    NSTrackingArea *_trackingArea;
    NSString *_chatUserName;
    MessageData *_messageWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MessageData *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) BOOL isRecalling; // @synthesize isRecalling=_isRecalling;
@property(nonatomic) BOOL isChatDetailScene; // @synthesize isChatDetailScene=_isChatDetailScene;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSMutableAttributedString *displayString; // @synthesize displayString=_displayString;
@property(retain, nonatomic) NSProgressIndicator *waitingProgressIndicator; // @synthesize waitingProgressIndicator=_waitingProgressIndicator;
@property(retain, nonatomic) PatWrap *patViewDataSource; // @synthesize patViewDataSource=_patViewDataSource;
@property(retain, nonatomic) MMTextView *recallTextField; // @synthesize recallTextField=_recallTextField;
@property(retain, nonatomic) MMTextView *patMsgTextView; // @synthesize patMsgTextView=_patMsgTextView;
- (void)onRevokePatEnd:(BOOL)arg1 forUser:(id)arg2 n64MsgId:(long long)arg3 clientMsgId:(id)arg4;
- (void)onStartRevokePat:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)addBubbleMaskToView;
- (void)updateTextFrame:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
