//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LVTabView, NSString, NSViewController;

@protocol LVTabViewDataSource <NSObject>
- (NSViewController *)viewControllerForTab:(LVTabView *)arg1 atIndex:(unsigned long long)arg2;
- (NSString *)titleForTab:(LVTabView *)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTab:(LVTabView *)arg1;
@end

