//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSGPUDelegate-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"

@class NSString;

@interface AppDelegate : NSObject <NSApplicationDelegate, GSGPUDelegate>
{
    BOOL _shouldNormalTerminate;
}

@property(nonatomic) BOOL shouldNormalTerminate; // @synthesize shouldNormalTerminate=_shouldNormalTerminate;
- (void)GPUDidChangeTo:(int)arg1;
- (void)nslogToFile;
- (void)handleURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

