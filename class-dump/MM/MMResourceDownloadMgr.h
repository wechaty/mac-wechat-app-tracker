//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMResourceDownloadDelegate-Protocol.h"
#import "MMResourceDownloadMgr-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString;
@protocol MMResDownloadMgrDelegate;

@interface MMResourceDownloadMgr : NSObject <MMResourceDownloadDelegate, MMResourceDownloadMgr>
{
    NSMutableArray *_taskQueue;
    NSMutableDictionary *_dictDownloadingTask;
    NSRecursiveLock *_lock;
    NSOperationQueue *_operationQueue;
    id <MMResDownloadMgrDelegate> _downloadMgrDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMResDownloadMgrDelegate> downloadMgrDelegate; // @synthesize downloadMgrDelegate=_downloadMgrDelegate;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3;
- (void)checkQueue;
- (void)cancelDownload:(id)arg1;
- (void)addDownloadTask:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

