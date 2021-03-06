//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMAvatarImageView, MMTimerLabel, NSTextField, SVGButton, SVGImageView;

@interface LVInteractionOperateView : NSView
{
    MMAvatarImageView *_anchorHeard;
    NSTextField *_ancherName;
    SVGImageView *_netStatusView;
    SVGImageView *_liveDurationView;
    MMTimerLabel *_liveDurationText;
    SVGImageView *_likesCountView;
    NSTextField *_likesCountText;
    SVGImageView *_onlineAudienceCountView;
    NSTextField *_onlineAudienceCountText;
    SVGButton *_connectMicViewControl;
    SVGButton *_chatViewControl;
    SVGButton *_chooseCameraButton;
    SVGButton *_chooseMicButton;
    SVGButton *_chooseLiveSourceButton;
    SVGButton *_closeLive;
    SVGButton *_moreOperateButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SVGButton *moreOperateButton; // @synthesize moreOperateButton=_moreOperateButton;
@property(retain, nonatomic) SVGButton *closeLive; // @synthesize closeLive=_closeLive;
@property(retain, nonatomic) SVGButton *chooseLiveSourceButton; // @synthesize chooseLiveSourceButton=_chooseLiveSourceButton;
@property(retain, nonatomic) SVGButton *chooseMicButton; // @synthesize chooseMicButton=_chooseMicButton;
@property(retain, nonatomic) SVGButton *chooseCameraButton; // @synthesize chooseCameraButton=_chooseCameraButton;
@property(retain, nonatomic) SVGButton *chatViewControl; // @synthesize chatViewControl=_chatViewControl;
@property(retain, nonatomic) SVGButton *connectMicViewControl; // @synthesize connectMicViewControl=_connectMicViewControl;
@property(retain, nonatomic) NSTextField *onlineAudienceCountText; // @synthesize onlineAudienceCountText=_onlineAudienceCountText;
@property(retain, nonatomic) SVGImageView *onlineAudienceCountView; // @synthesize onlineAudienceCountView=_onlineAudienceCountView;
@property(retain, nonatomic) NSTextField *likesCountText; // @synthesize likesCountText=_likesCountText;
@property(retain, nonatomic) SVGImageView *likesCountView; // @synthesize likesCountView=_likesCountView;
@property(retain, nonatomic) MMTimerLabel *liveDurationText; // @synthesize liveDurationText=_liveDurationText;
@property(retain, nonatomic) SVGImageView *liveDurationView; // @synthesize liveDurationView=_liveDurationView;
@property(retain, nonatomic) SVGImageView *netStatusView; // @synthesize netStatusView=_netStatusView;
@property(retain, nonatomic) NSTextField *ancherName; // @synthesize ancherName=_ancherName;
@property(retain, nonatomic) MMAvatarImageView *anchorHeard; // @synthesize anchorHeard=_anchorHeard;
- (void)changeChooseScreenButtonStatus:(id)arg1 isOpen:(BOOL)arg2;
- (void)updateLiveTimer:(unsigned long long)arg1;
- (void)updateOperateView:(unsigned long long)arg1;
- (void)initSVGButton:(id)arg1 andImageName:(id)arg2 andAlternateImageName:(id)arg3 andButtonType:(unsigned long long)arg4 andImageSize:(struct CGSize)arg5;
- (void)initInfoViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

