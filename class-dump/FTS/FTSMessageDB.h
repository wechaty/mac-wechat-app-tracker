//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSBaseDB.h"

@class MemoryMappedKV, NSDictionary, NSMutableDictionary, NSObject, NSRecursiveLock, WCTTable;
@protocol OS_dispatch_queue;

@interface FTSMessageDB : FTSBaseDB
{
    NSObject<OS_dispatch_queue> *_queryQueue;
    BOOL m_stopQuery;
    BOOL isFtsOptimizing;
    NSRecursiveLock *m_oLock;
    NSDictionary *m_dictCreateTable;
    WCTTable *m_tableChatContext;
    NSMutableDictionary *m_dictChatContext;
    MemoryMappedKV *m_markKV;
    long long dbSize;
}

+ (void)deleteFTSMessageDB;
- (void).cxx_destruct;
@property(nonatomic) long long dbSize; // @synthesize dbSize;
@property(nonatomic) BOOL isFtsOptimizing; // @synthesize isFtsOptimizing;
@property(retain, nonatomic) MemoryMappedKV *m_markKV; // @synthesize m_markKV;
@property(retain, nonatomic) NSMutableDictionary *m_dictChatContext; // @synthesize m_dictChatContext;
@property(retain, nonatomic) WCTTable *m_tableChatContext; // @synthesize m_tableChatContext;
@property(retain, nonatomic) NSDictionary *m_dictCreateTable; // @synthesize m_dictCreateTable;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
- (void)markAndOptimize:(id)arg1 index:(unsigned int)arg2;
- (BOOL)markWriteBack:(id)arg1 result:(unsigned int)arg2 opValue:(id)arg3;
- (void)findOneTableToOptimize;
- (BOOL)optimizeOnly:(id)arg1 index:(unsigned int)arg2;
- (void)markOnly:(id)arg1 cost:(unsigned long long)arg2;
- (id)getMark:(id)arg1;
- (void)findAllTablesToOptimize;
- (BOOL)optimize:(unsigned int)arg1 opValue:(id)arg2;
- (BOOL)deleteRowInChatContextTable:(unsigned int)arg1;
- (BOOL)updateChatContext:(unsigned int)arg1 lastMesLocalId:(unsigned int)arg2;
- (BOOL)insertRowInChatContextTable:(id)arg1 lastMsg:(id)arg2;
- (id)getLatestChatContextByChatName:(id)arg1;
- (BOOL)createChatContextTable;
- (BOOL)createNewChatContextForChat:(id)arg1;
- (id)getChatContextById:(unsigned int)arg1;
- (unsigned long long)getLastMesLocalID:(id)arg1;
- (id)selectMsgsWithChatName:(id)arg1 limit:(unsigned int)arg2;
- (void)cancelQuery;
- (void)reportCostTime:(unsigned long long)arg1;
- (id)innerQueryMsgsBySelectRowsWithKeyword:(id)arg1 tableIndex:(unsigned int)arg2 chatNameId:(unsigned int)arg3 maxTime:(unsigned int)arg4 limit:(unsigned int)arg5;
- (id)innerQueryMsgsWithKeyword:(id)arg1 tableIndex:(unsigned int)arg2;
- (void)transformSessionResult:(id)arg1 exitMsgIds:(id)arg2 resultDic:(id)arg3;
- (id)queryWithKeyword:(id)arg1 chatName:(id)arg2 maxTime:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)queryWithKeyword:(id)arg1 chatName:(id)arg2;
- (BOOL)deleteAllRowsInChatTable:(id)arg1;
- (BOOL)deleteRowInChatTable:(id)arg1 arrMsgData:(id)arg2;
- (BOOL)deleteRowInChatTable:(id)arg1 msgData:(id)arg2;
- (id)innerSelectRowInChatTable:(id)arg1 msgData:(id)arg2;
- (BOOL)innerInsertRowsInChatTable:(id)arg1 arrMsgData:(id)arg2;
- (BOOL)insertRowsInChatTable:(id)arg1 arrMsgData:(id)arg2;
- (unsigned int)tableIndexOfChatName:(id)arg1;
- (id)msgTableWithChatName:(id)arg1;
- (id)msgTableWithIndex:(unsigned int)arg1;
- (id)msgTableNameWithIndex:(unsigned int)arg1;
- (BOOL)createFTSMsgTables;
- (id)init;

@end
