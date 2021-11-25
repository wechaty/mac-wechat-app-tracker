//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

@class NSArray, NSMutableArray;
@protocol MMNavigationControllerDelegate;

@interface MMNavigationController : MMViewController
{
    id <MMNavigationControllerDelegate> _delegate;
    MMViewController *_rootViewController;
    MMViewController *_topViewController;
    NSMutableArray *_viewControllerStack;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *viewControllerStack; // @synthesize viewControllerStack=_viewControllerStack;
@property(nonatomic) __weak MMViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(readonly, nonatomic) __weak MMViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <MMNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clear;
- (id)lastViewController;
- (void)removeLastViewController;
- (void)popViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)popToRootViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) NSArray *viewControllers;
- (id)initWithRootViewController:(id)arg1;

@end
