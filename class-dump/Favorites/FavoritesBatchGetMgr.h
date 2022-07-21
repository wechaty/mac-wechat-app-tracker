//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSMutableArray, NSString, WCFavoritesDB;
@protocol FavoritesBatchGetMgrDelegate, OS_dispatch_queue;

@interface FavoritesBatchGetMgr : NSObject <MMCGIDelegate>
{
    WCFavoritesDB *_favItemDB;
    NSMutableArray *_batchGetFavIDs;
    NSObject<OS_dispatch_queue> *queue_addNewList;
    unsigned int _failCount;
    BOOL _isGetting;
    BOOL _requested;
    NSObject<FavoritesBatchGetMgrDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<FavoritesBatchGetMgrDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)_checkInvalidNoteItemSyncFromSvr:(id)arg1;
- (BOOL)_checkConflict:(id)arg1 vs:(id)arg2;
- (void)_handleBatchGetFavItemResp:(id)arg1;
- (void)asyncDoAddNewItemList:(id)arg1;
- (void)_tryStartBatchGet;
- (void)addBatchGetFavoritesFavIds:(id)arg1;
- (void)dealloc;
- (id)initWithDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

