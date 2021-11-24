//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class MMComplexContactSearchTask, NSString;
@protocol OS_dispatch_queue;

@interface MMComplexContactSearchTaskMgr : NSObject <AccountServiceExt>
{
    MMComplexContactSearchTask *_task;
    NSObject<OS_dispatch_queue> *_searchSerialQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *searchSerialQueue; // @synthesize searchSerialQueue=_searchSerialQueue;
@property(retain, nonatomic) MMComplexContactSearchTask *task; // @synthesize task=_task;
- (void)doComplexContactSearch:(id)arg1 searchScene:(unsigned long long)arg2 searchSessions:(id)arg3 searchContacts:(id)arg4 searchGroups:(id)arg5 complete:(CDUnknownBlockType)arg6 cancelable:(BOOL)arg7;
- (void)doComplexContactSearch:(id)arg1 searchScene:(unsigned long long)arg2 complete:(CDUnknownBlockType)arg3 cancelable:(BOOL)arg4;
- (void)createComplexSearchCaches;
- (void)onUserLogout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

