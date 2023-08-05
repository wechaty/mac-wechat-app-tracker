//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMFooterButtonView, MMOutlineButton;

@interface MMProfileFooterView : NSView
{
    CDUnknownBlockType _didButtonClick;
    MMOutlineButton *_sendMsgBtn;
    MMOutlineButton *_voiceCallBtn;
    MMOutlineButton *_videoCallBtn;
    MMOutlineButton *_addFriendBtn;
    MMFooterButtonView *_sendMsgViewBtn;
    MMFooterButtonView *_voiceCallViewBtn;
    MMFooterButtonView *_videoCallViewBtn;
    MMFooterButtonView *_accountDeleteBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFooterButtonView *accountDeleteBtn; // @synthesize accountDeleteBtn=_accountDeleteBtn;
@property(retain, nonatomic) MMFooterButtonView *videoCallViewBtn; // @synthesize videoCallViewBtn=_videoCallViewBtn;
@property(retain, nonatomic) MMFooterButtonView *voiceCallViewBtn; // @synthesize voiceCallViewBtn=_voiceCallViewBtn;
@property(retain, nonatomic) MMFooterButtonView *sendMsgViewBtn; // @synthesize sendMsgViewBtn=_sendMsgViewBtn;
@property(retain, nonatomic) MMOutlineButton *addFriendBtn; // @synthesize addFriendBtn=_addFriendBtn;
@property(retain, nonatomic) MMOutlineButton *videoCallBtn; // @synthesize videoCallBtn=_videoCallBtn;
@property(retain, nonatomic) MMOutlineButton *voiceCallBtn; // @synthesize voiceCallBtn=_voiceCallBtn;
@property(retain, nonatomic) MMOutlineButton *sendMsgBtn; // @synthesize sendMsgBtn=_sendMsgBtn;
@property(copy, nonatomic) CDUnknownBlockType didButtonClick; // @synthesize didButtonClick=_didButtonClick;
- (double)getsuitFontSize;
- (void)onDeleteFriendAction;
- (void)onAddFriendAction;
- (void)onVideoCallAction;
- (void)onVoiceCallAction;
- (void)onSendMsgAction;
- (void)addFriendViews:(double)arg1;
- (void)setupSelfViews:(double)arg1;
- (void)setupAccountDeleteViews:(double)arg1;
- (void)setupFriendViews:(double)arg1;
- (double)updateUIAndCalculateHeight:(int)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

