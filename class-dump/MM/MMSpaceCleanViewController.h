//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "IMMSpaceCleanSelectSessionExt-Protocol.h"
#import "MMNavigationControllerDelegate-Protocol.h"

@class MMBorderView, MMNavigationController, MMSpaceCleanCacheViewController, MMView, NSPopUpButton, NSString, NSTextField, SVGButton;

@interface MMSpaceCleanViewController : MMViewController <MMNavigationControllerDelegate, IMMSpaceCleanSelectSessionExt>
{
    unsigned int _headerViewStyle;
    MMNavigationController *_navController;
    MMSpaceCleanCacheViewController *_cacheViewController;
    MMView *_headerView;
    MMBorderView *_headerSeperator;
    SVGButton *_backBtn;
    NSTextField *_titleField;
    NSPopUpButton *_itemTypeSelector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPopUpButton *itemTypeSelector; // @synthesize itemTypeSelector=_itemTypeSelector;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) SVGButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) MMBorderView *headerSeperator; // @synthesize headerSeperator=_headerSeperator;
@property(retain, nonatomic) MMView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) unsigned int headerViewStyle; // @synthesize headerViewStyle=_headerViewStyle;
@property(retain, nonatomic) MMSpaceCleanCacheViewController *cacheViewController; // @synthesize cacheViewController=_cacheViewController;
@property(retain, nonatomic) MMNavigationController *navController; // @synthesize navController=_navController;
- (void)resumeReturnBtn;
- (void)disableReturnBtn;
- (void)handlePopupButton;
- (void)enableWindowResize:(BOOL)arg1;
- (void)adaptWindowWithViewSize:(struct CGSize)arg1;
- (void)adaptWindowWithViewSize:(struct CGSize)arg1 identifier:(id)arg2;
- (BOOL)isOpenBackupWindow;
- (void)showSessionViewController;
- (void)showCacheViewController;
- (void)updateNavigationTitle:(id)arg1;
- (void)layoutSubviews;
- (void)layoutHeaderItems;
- (void)setupHeaderView;
- (void)viewChangedEffectiveAppearance;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

