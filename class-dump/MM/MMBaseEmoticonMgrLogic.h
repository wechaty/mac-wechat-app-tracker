//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMHotAreaQueueDelegate-Protocol.h"

@class MMCache, MMHotAreaQueue, NSMutableArray, NSRecursiveLock, NSString;

@interface MMBaseEmoticonMgrLogic : NSObject <MMHotAreaQueueDelegate>
{
    BOOL _isGettingEmoticonList;
    NSRecursiveLock *_lock;
    NSMutableArray *_dataStorageList;
    NSRecursiveLock *_dataStorageLock;
    MMCache *_imageCache;
    MMCache *_dataCache;
    NSString *_dataPath;
    MMHotAreaQueue *_downloadQueueForEmoticonData;
    MMHotAreaQueue *_downloadQueueForMd5Object;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMHotAreaQueue *downloadQueueForMd5Object; // @synthesize downloadQueueForMd5Object=_downloadQueueForMd5Object;
@property(retain, nonatomic) MMHotAreaQueue *downloadQueueForEmoticonData; // @synthesize downloadQueueForEmoticonData=_downloadQueueForEmoticonData;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) MMCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) MMCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSRecursiveLock *dataStorageLock; // @synthesize dataStorageLock=_dataStorageLock;
@property(retain, nonatomic) NSMutableArray *dataStorageList; // @synthesize dataStorageList=_dataStorageList;
@property(nonatomic) BOOL isGettingEmoticonList; // @synthesize isGettingEmoticonList=_isGettingEmoticonList;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)onEmoticonMd5ObjectDownloadFail:(id)arg1;
- (void)onEmoticonMd5ObjectDownloadFinish:(id)arg1;
- (void)handleDownloadFinishedWithEmoticonMd5Object:(id)arg1 isSucc:(BOOL)arg2;
- (void)addToMd5ObjectDownloadQueue:(id)arg1;
- (void)downloadEmotionWithMd5Object:(id)arg1;
- (id)getEmotionThumbWithPackageID:(id)arg1;
- (id)getEmotionThumbWithMD5:(id)arg1;
- (BOOL)updateEmotionThumbCacheWithMD5:(id)arg1;
- (id)getEmotionImgWithMD5:(id)arg1 presistence:(BOOL)arg2;
- (id)getEmotionImgWithMD5:(id)arg1;
- (id)getEmotionDataWithMD5:(id)arg1 presistence:(BOOL)arg2;
- (id)getEmotionDataWithMD5:(id)arg1;
- (id)getEmoticons;
- (int)getEmoticonCustomTypeWithMD5:(id)arg1;
- (BOOL)isEmoticonMD5InDataStorageList:(id)arg1;
- (void)removeEmoticonFromLocalCache:(id)arg1;
- (void)removeEmoticonFromDataList:(id)arg1;
- (BOOL)deleteEmoticonWithMD5:(id)arg1;
- (void)onEmoticonDataDelete:(id)arg1;
- (void)hotAreaQueue:(id)arg1 onItemsEliminatedFromHotArea:(id)arg2;
- (void)hotAreaQueue:(id)arg1 onItemsAddToHotArea:(id)arg2;
- (void)onEmoticonDataDownloadFail:(id)arg1;
- (void)onEmoticonDataDownloadFinish:(id)arg1;
- (void)handleDownloadFinishedWithEmoticonData:(id)arg1 isSucc:(BOOL)arg2;
- (void)downloadEmotionWithEmoticonDataList:(id)arg1;
- (void)downloadEmotionWithEmotionData:(id)arg1;
- (void)addToDownloadQueue:(id)arg1;
- (void)loadEmoticonDataFromFile;
- (void)saveEmoticonDataListToFile;
- (void)dealloc;
- (id)initWithDataPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

