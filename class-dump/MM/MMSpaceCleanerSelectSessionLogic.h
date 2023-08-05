//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMediaDataServiceExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSSortDescriptor, NSString;

@interface MMSpaceCleanerSelectSessionLogic : NSObject <IMediaDataServiceExt>
{
    BOOL _isLoadingSessions;
    unsigned int _currentType;
    NSSortDescriptor *_currentSortDesc;
    NSMutableArray *_displayedItems;
    NSMutableArray *_selectedItems;
    unsigned long long _deletedSessionCount;
    unsigned long long _deletedFileCount;
    unsigned long long _totalSpaceSize;
    double _lastLoadFinishTime;
    NSMutableDictionary *_displayedItemsDict;
    NSString *_cleaningChatName;
    NSMutableArray *_cleanedPathList;
    NSMutableDictionary *_cleanedPathDict;
}

+ (id)formatterItemTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cleanedPathDict; // @synthesize cleanedPathDict=_cleanedPathDict;
@property(retain, nonatomic) NSMutableArray *cleanedPathList; // @synthesize cleanedPathList=_cleanedPathList;
@property(retain, nonatomic) NSString *cleaningChatName; // @synthesize cleaningChatName=_cleaningChatName;
@property(retain) NSMutableDictionary *displayedItemsDict; // @synthesize displayedItemsDict=_displayedItemsDict;
@property(nonatomic) double lastLoadFinishTime; // @synthesize lastLoadFinishTime=_lastLoadFinishTime;
@property(nonatomic) BOOL isLoadingSessions; // @synthesize isLoadingSessions=_isLoadingSessions;
@property(nonatomic) unsigned long long totalSpaceSize; // @synthesize totalSpaceSize=_totalSpaceSize;
@property(nonatomic) unsigned long long deletedFileCount; // @synthesize deletedFileCount=_deletedFileCount;
@property(nonatomic) unsigned long long deletedSessionCount; // @synthesize deletedSessionCount=_deletedSessionCount;
@property(retain, nonatomic) NSMutableArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(retain, nonatomic) NSMutableArray *displayedItems; // @synthesize displayedItems=_displayedItems;
@property(retain, nonatomic) NSSortDescriptor *currentSortDesc; // @synthesize currentSortDesc=_currentSortDesc;
@property(nonatomic) unsigned int currentType; // @synthesize currentType=_currentType;
- (void)unselectAllSessions;
- (void)selectAllSessions;
- (void)deleteSelectedSession:(id)arg1;
- (void)addSelectedSession:(id)arg1;
- (BOOL)isSessionSelected:(id)arg1;
- (void)clearCleanedPathDict;
- (void)appendCleanedDictWithChatName:(id)arg1 withCleanedPath:(id)arg2;
- (void)updateMediaDBWithItem:(id)arg1;
- (void)recomputeAllDirtyItems;
- (void)markDirtyForItem:(id)arg1;
- (void)clearSessionSpace:(id)arg1 rowItem:(id)arg2;
- (void)clearSpace;
- (unsigned long long)indexOfDisplayedItem:(id)arg1;
- (id)getDisplayedItemAtIndex:(unsigned long long)arg1 WithType:(unsigned int)arg2;
- (unsigned long long)countForDisplayedItemType:(unsigned int)arg1;
- (void)resortAllItemList;
- (void)reloadVideoWithSessionList:(id)arg1;
- (void)parseRawVideoPath:(id)arg1 sessionInfo:(id)arg2 videoItemList:(id)arg3;
- (void)reloadFileWithSessionList:(id)arg1;
- (void)reloadSessionAndImageWithSessionList:(id)arg1;
- (void)reloadAllItemList;
- (void)startLoadSessionDataForced:(BOOL)arg1;
- (void)resetLogicState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

