//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MASViewAttribute, MMToastView, NSMutableSet;

@interface NSView (MASConstraints)
+ (id)rootDesc;
+ (id)recursiveDescriptionOfView:(id)arg1 level:(long long)arg2;
+ (BOOL)rbl_isInAnimationContext;
+ (void)rbl_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)rbl_animate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)rbl_animate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSMutableSet *mas_installedConstraints;
- (id)mas_closestCommonSuperview:(id)arg1;
@property(retain, nonatomic) id mas_key;
@property(readonly, nonatomic) CDUnknownBlockType mas_attribute;
@property(readonly, nonatomic) MASViewAttribute *mas_baseline;
@property(readonly, nonatomic) MASViewAttribute *mas_centerY;
@property(readonly, nonatomic) MASViewAttribute *mas_centerX;
@property(readonly, nonatomic) MASViewAttribute *mas_height;
@property(readonly, nonatomic) MASViewAttribute *mas_width;
@property(readonly, nonatomic) MASViewAttribute *mas_trailing;
@property(readonly, nonatomic) MASViewAttribute *mas_leading;
@property(readonly, nonatomic) MASViewAttribute *mas_bottom;
@property(readonly, nonatomic) MASViewAttribute *mas_right;
@property(readonly, nonatomic) MASViewAttribute *mas_top;
@property(readonly, nonatomic) MASViewAttribute *mas_left;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
- (void)removeAllSubViews;
- (void)bringSubviewToFront:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)hideToast;
- (void)showToast;
- (void)setupDidClickOnToastViewBlock;
- (id)makeToastActivityWithText:(id)arg1 image:(id)arg2;
- (id)makeToastActivityWithText:(id)arg1;
- (id)makeFailToastWithText:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)makeSuccessToastWithText:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)makeToastWithText:(id)arg1 duration:(double)arg2 image:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)makeToastWithText:(id)arg1 image:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)makeToastWithText:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL clickToDismissToast;
@property(retain, nonatomic) MMToastView *toastView;
- (BOOL)isMouseReallyInside;
- (id)firstSubviewOfClass:(id)arg1;
- (id)rootDescWithLevel6;
- (id)rootDescWithLevel5;
- (id)rootDescWithLevel4;
- (id)rootDescWithLevel3;
- (id)rootDescWithLevel2;
- (id)rootDescWithLevel1;
- (id)rootDescWithLevel:(long long)arg1;
- (id)debugDescription;
- (id)rootDescWithLevel;
- (id)selfDesc;
- (id)screenCacheImageForViewWithRect:(struct CGRect)arg1;
- (id)screenCacheImageForView;
- (id)imageWithSubviews;
@property double cornerRadius;
@property double centerY;
@property double centerX;
@property double bottom;
@property double top;
@property double right;
@property double left;
@property double height;
@property double width;
@property double y;
@property double x;
- (id)rbl_animator;
@end
