//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMChatBackupIndexDB, NSMutableArray, NSString;
@protocol MMChatBackupPersistentMgrDelegate, OS_dispatch_queue;

@interface MMChatBackupPersistentMgr : NSObject
{
    MMChatBackupIndexDB *m_indexDB;
    NSObject<OS_dispatch_queue> *m_FileSerialQueue;
    int fileWriteBlockCount;
    long long msgInfoOffset;
    long long msgInfoLength;
    NSString *msgInfoFileName;
    NSMutableArray *mediaInfoOffset;
    NSMutableArray *mediaInfoLength;
    NSMutableArray *mediaInfoID;
    NSMutableArray *mediaInfoFileName;
    NSMutableArray *mediaInfoInnerOffSet;
    NSMutableArray *mediaInfoTotalLength;
    NSMutableArray *mediaInfoBeginIndex;
    NSString *m_lastMediaStr;
    long long aTagMediaCount;
    long long aTagReceivedSize;
    unsigned long long m_processedTagCount;
    int _backupTransferType;
    id <MMChatBackupPersistentMgrDelegate> _delegate;
    long long _backupToken;
}

- (void).cxx_destruct;
@property(nonatomic) int backupTransferType; // @synthesize backupTransferType=_backupTransferType;
@property(nonatomic) long long backupToken; // @synthesize backupToken=_backupToken;
@property(nonatomic) __weak id <MMChatBackupPersistentMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (int)fileWriteBlockCount;
- (BOOL)p_writeMediaDataPush:(id)arg1 toPath:(id)arg2;
- (BOOL)p_writeMsgDataPush:(id)arg1 toPath:(id)arg2;
- (void)asyncProcessDataTag:(id)arg1;
- (void)asyncProcessPieceOfData:(id)arg1;
- (void)asyncProcessRequestSessionDataInfoArray:(id)arg1;
- (void)dealloc;
- (id)initWithDeviceId:(id)arg1;

@end

