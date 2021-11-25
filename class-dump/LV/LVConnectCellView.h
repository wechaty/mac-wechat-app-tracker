//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMAvatarImageView, MMOutlineButton, NSTextField, SVGButton;
@protocol LVConnectCellViewDelegate;

@interface LVConnectCellView : NSView
{
    BOOL _enableHoverHighLight;
    long long _index;
    MMAvatarImageView *_avatarImgView;
    NSTextField *_nickNameTextFiled;
    MMOutlineButton *_acceptButton;
    SVGButton *_finishButton;
    id _data;
    id <LVConnectCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL enableHoverHighLight; // @synthesize enableHoverHighLight=_enableHoverHighLight;
@property(nonatomic) __weak id <LVConnectCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id data; // @synthesize data=_data;
@property(retain, nonatomic) SVGButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) MMOutlineButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) NSTextField *nickNameTextFiled; // @synthesize nickNameTextFiled=_nickNameTextFiled;
@property(retain, nonatomic) MMAvatarImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)doClickFinishMicButton;
- (void)doClickConnectMicButton;
- (void)initSVGButton:(id)arg1 andImageName:(id)arg2 andAlternateImageName:(id)arg3 andButtonType:(unsigned long long)arg4;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
