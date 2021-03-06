//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMLiveReportEventMgr : MMService <MMService>
{
    NSMutableDictionary *_handlerObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *handlerObjects; // @synthesize handlerObjects=_handlerObjects;
- (void)unRegisterReportHandlerClass:(Class)arg1;
- (void)registerReportHandlerClass:(Class)arg1;
- (id)sessionIdOfHandlerClass:(Class)arg1;
- (void)bindSessionId:(id)arg1 withHandlerClass:(Class)arg2;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

