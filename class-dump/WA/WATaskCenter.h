//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TaskInstanceDelegate-Protocol.h"
#import "WAIPCServerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, TaskSetting, WAIPCServer;

@interface WATaskCenter : NSObject <TaskInstanceDelegate, WAIPCServerDelegate>
{
    BOOL _isLaunching;
    BOOL _preventPreload;
    WAIPCServer *_ipcServer;
    NSRecursiveLock *_taskLock;
    TaskSetting *_myConfig;
    NSMutableDictionary *_taskInstances;
    NSMutableDictionary *_completions;
    NSMutableDictionary *_pendingLaunchMap;
    NSMutableArray *_waitingInstanceArray;
    NSMutableDictionary *_IDKeyReportDic;
    NSMutableDictionary *_IDKeyReportDic2;
    NSMutableDictionary *_seqNOOfTnstance;
    NSMutableSet *_customHandlerClasses;
    NSMutableDictionary *_customHandlers;
    NSMutableArray *_preloadInstances;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL preventPreload; // @synthesize preventPreload=_preventPreload;
@property(retain, nonatomic) NSMutableArray *preloadInstances; // @synthesize preloadInstances=_preloadInstances;
@property(retain, nonatomic) NSMutableDictionary *customHandlers; // @synthesize customHandlers=_customHandlers;
@property(retain, nonatomic) NSMutableSet *customHandlerClasses; // @synthesize customHandlerClasses=_customHandlerClasses;
@property(retain, nonatomic) NSMutableDictionary *seqNOOfTnstance; // @synthesize seqNOOfTnstance=_seqNOOfTnstance;
@property(retain, nonatomic) NSMutableDictionary *IDKeyReportDic2; // @synthesize IDKeyReportDic2=_IDKeyReportDic2;
@property(retain, nonatomic) NSMutableDictionary *IDKeyReportDic; // @synthesize IDKeyReportDic=_IDKeyReportDic;
@property(nonatomic) BOOL isLaunching; // @synthesize isLaunching=_isLaunching;
@property(retain, nonatomic) NSMutableArray *waitingInstanceArray; // @synthesize waitingInstanceArray=_waitingInstanceArray;
@property(retain, nonatomic) NSMutableDictionary *pendingLaunchMap; // @synthesize pendingLaunchMap=_pendingLaunchMap;
@property(retain, nonatomic) NSMutableDictionary *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSMutableDictionary *taskInstances; // @synthesize taskInstances=_taskInstances;
@property(retain, nonatomic) TaskSetting *myConfig; // @synthesize myConfig=_myConfig;
@property(retain, nonatomic) NSRecursiveLock *taskLock; // @synthesize taskLock=_taskLock;
@property(retain, nonatomic) WAIPCServer *ipcServer; // @synthesize ipcServer=_ipcServer;
- (void)terminateAllPreloadInstances;
- (BOOL)hasConnectedPreloadTask;
- (id)popPreloadInstance;
- (void)pushPreloadInstanceIfNeeded;
- (BOOL)launchUsingPreloadProcess;
- (BOOL)usingPreloadProcess;
- (BOOL)internalHandleClientMessage:(id)arg1;
- (void)launchFinish:(id)arg1;
- (void)sendRequestToMiniProgram:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveMessageFromClient:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)clientDidRegisterWithPid:(id)arg1 identifier:(id)arg2;
- (void)taskDidEnd:(id)arg1;
- (void)taskDidConnected:(id)arg1;
- (void)taskDidFinishLaunch:(id)arg1;
- (void)taskDidStart:(id)arg1;
- (id)instanceForKey:(id)arg1;
- (void)removeInstance:(id)arg1;
- (void)addInstance:(id)arg1 forKey:(id)arg2;
- (void)doNextTaskInstance;
- (void)checkAndStartInstance:(id)arg1;
- (void)registerCustomMessageHandlers:(id)arg1;
- (void)registerCustomMessageHandlerClasses:(id)arg1;
- (void)registerCustomMessageHandlerClass:(Class)arg1;
- (void)terminateAllMiniProgram;
- (void)terminateMiniProgramWithAppId:(id)arg1;
- (void)innerLaunchMiniProgram:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doLaunchMiniProgram:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminate;
- (void)launch:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
