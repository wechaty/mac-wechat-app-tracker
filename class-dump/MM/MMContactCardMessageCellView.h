//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "IContactMgrExt-Protocol.h"

@class CAShapeLayer, MMAvatarImageView, MMContactCardData, MMDivider, MMTextField, MMView, NSImageView, NSString;

@interface MMContactCardMessageCellView : MMMessageCellView <IContactMgrExt>
{
    MMContactCardData *_contactCardData;
    MMView *_containerView;
    MMAvatarImageView *_contactCardAvatar;
    MMTextField *_contactCardNickName;
    MMTextField *_contactCardUserName;
    NSImageView *_iconImgView;
    NSString *_stripeHeading;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_highlightLayer;
    MMDivider *_divider;
    MMTextField *_stripeHeadingTextField;
}

+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTextField *stripeHeadingTextField; // @synthesize stripeHeadingTextField=_stripeHeadingTextField;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) NSString *stripeHeading; // @synthesize stripeHeading=_stripeHeading;
@property(retain, nonatomic) NSImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) MMTextField *contactCardUserName; // @synthesize contactCardUserName=_contactCardUserName;
@property(retain, nonatomic) MMTextField *contactCardNickName; // @synthesize contactCardNickName=_contactCardNickName;
@property(retain, nonatomic) MMAvatarImageView *contactCardAvatar; // @synthesize contactCardAvatar=_contactCardAvatar;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMContactCardData *contactCardData; // @synthesize contactCardData=_contactCardData;
- (void)onModifyUserImageWithUrl:(id)arg1 userName:(id)arg2;
- (void)updateAvatarWithContact:(id)arg1;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (BOOL)allowStickyAndUnStickly;
- (void)showProfile:(int)arg1;
- (id)getSection1MenuItem;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)clickableArea;
- (void)updateHighlightMaskView;
- (struct CGRect)bubbleFrame;
- (void)updateMessageLayer;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityContent;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)viewDidChangeEffectiveAppearance;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

