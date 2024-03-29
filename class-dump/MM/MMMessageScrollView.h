//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RFOverlayScrollView.h"

@class MMTableFreshView;

@interface MMMessageScrollView : RFOverlayScrollView
{
    BOOL _isRefreshing;
    BOOL _overRefreshView;
    CDUnknownBlockType _pullDownRefreshBlock;
    MMTableFreshView *_refreshHeader;
    MMTableFreshView *_refreshFooter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableFreshView *refreshFooter; // @synthesize refreshFooter=_refreshFooter;
@property(retain, nonatomic) MMTableFreshView *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
@property(nonatomic) BOOL overRefreshView; // @synthesize overRefreshView=_overRefreshView;
@property(copy, nonatomic) CDUnknownBlockType pullDownRefreshBlock; // @synthesize pullDownRefreshBlock=_pullDownRefreshBlock;
@property(readonly, nonatomic) BOOL isRefreshing; // @synthesize isRefreshing=_isRefreshing;
- (double)maxmumScroll;
- (double)minimumScroll;
- (BOOL)isInPullUpVisiableRect;
- (BOOL)isInPullDownVisiableRect;
- (void)resetHeaderFooter;
- (void)footerEndRefreshing;
- (void)footerBeginRefreshing;
- (void)headerEndRefreshing;
- (void)headerBeginRefreshing;
- (void)scrollWheel:(id)arg1;
- (void)scrollToBottomWithAnimated:(BOOL)arg1;
- (BOOL)shouldAutoScrollToBottom;
- (BOOL)reachedBottom;
- (BOOL)reachedTop;
- (BOOL)isAllMessagesVisible;
- (void)createFreshView;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)init;

@end

