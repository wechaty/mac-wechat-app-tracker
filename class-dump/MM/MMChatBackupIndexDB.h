//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCTDatabase;

@interface MMChatBackupIndexDB : NSObject
{
    WCTDatabase *m_db;
    NSString *m_deviceId;
}

- (void).cxx_destruct;
- (BOOL)rollbackTransaction;
- (BOOL)commitTransaction;
- (BOOL)beginTransaction;
- (long long)getTotalSizeOfSessions:(id)arg1;
- (id)getSessionNickNameBySessionName:(id)arg1;
- (id)getConfigObject;
- (id)getAllMediaStr2IDObjects;
- (id)getAllFileSegObjectsOfMediaIDArr:(id)arg1;
- (id)getAllFileSegObjectsOfMediaID:(long long)arg1;
- (long long)getMediaIdByMediaStr:(id)arg1;
- (long long)getSessionIdBySessionName:(id)arg1;
- (id)getBackupMediaFilePathByFileSize:(unsigned int)arg1;
- (id)getBackupMsgFilePathByFileSize:(unsigned int)arg1;
- (id)getBackupMediaFilePathByIndex:(unsigned long long)arg1;
- (id)getBackupMsgFilePathByIndex:(unsigned long long)arg1;
- (id)getNeededTimeIntervalsOfSession:(id)arg1 fromTime:(long long)arg2 toTime:(long long)arg3 withTransferType:(int)arg4;
- (id)getOrderedTimeIntervalsFromTxtMsgTableOfSession:(id)arg1;
- (id)getOrderedTimeIntervalsFromMsgTableOfSession:(id)arg1;
- (id)getOrderedTimeIntervalsOfSession:(id)arg1 withTransferType:(int)arg2;
- (id)getUnOrderedTimeIntervalsOfSession:(id)arg1;
- (id)getBackupRecordMsgTimeInterval;
- (id)getOneObjectFromSessionTable;
- (id)getAllSessionObjects;
- (id)getSessionObjectBySessionName:(id)arg1;
- (id)getMediaInfoOfMediaID:(long long)arg1;
- (id)getMediaIDListOfStartTime:(long long)arg1;
- (id)getTxtMsgInfoOfListID:(id)arg1 withSesionId:(long long)arg2;
- (id)getAllTxtMsgListIDOfSessionId:(long long)arg1 fromTime:(long long)arg2 toTime:(long long)arg3;
- (id)getAllTxtMsgListIDOfSessionId:(long long)arg1;
- (id)getMsgInfoOfListID:(id)arg1 withSesionId:(long long)arg2;
- (id)getMsgInfoListOfListID:(id)arg1 withSesionId:(long long)arg2;
- (id)getAllMsgListIDOfSessionId:(long long)arg1 fromTime:(long long)arg2 toTime:(long long)arg3;
- (id)getAllMsgListIDOfSessionId:(long long)arg1;
- (unsigned long long)getSessionCount;
- (id)getAllSessionName;
- (BOOL)insertOrUpdateConfigObjectWithGeneralInfo:(id)arg1;
- (BOOL)insertDataWithMsgFileSegmentObject:(id)arg1;
- (BOOL)insertDataWithUnFinishSessionObject:(id)arg1;
- (BOOL)insertDataWithConfigObject:(id)arg1;
- (long long)insertDataWithMediaStr2IDObject:(id)arg1;
- (long long)insertDataWithName2IDObject:(id)arg1;
- (BOOL)insertDataWithMsgMediaObject:(id)arg1;
- (BOOL)insertDataWithTxtMsgSegmentsObject:(id)arg1;
- (BOOL)insertDataWithMsgSegmentsObject:(id)arg1;
- (BOOL)insertDataWithSessionObject:(id)arg1;
- (BOOL)isTableExists:(id)arg1;
- (BOOL)createMsgFileSegmentTable;
- (BOOL)createUnFinishSessionTable;
- (BOOL)createConfigTable;
- (BOOL)createMsgMediaTable;
- (BOOL)createTxtMsgSegmentsTable;
- (BOOL)createMsgSegmentsTable;
- (BOOL)createSessionTable;
- (BOOL)createName2IDTable;
- (BOOL)createMediaStr2IDTable;
- (id)currDeviceId;
- (void)removeDBFile;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (void)backupDB;
- (BOOL)initDataBase;
- (void)dealloc;
- (id)initWithDeviceId:(id)arg1;

@end

