//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCDBHelper : NSObject
{
}

+ (id)GetRecoverFilePath:(unsigned int)arg1 identifier:(id)arg2;
+ (id)GetDBFilePath:(unsigned int)arg1 identifier:(id)arg2;
+ (id)GetRecoverFilePath:(unsigned int)arg1;
+ (id)GetDBFilePath:(unsigned int)arg1;
+ (void)RemoveDBFile:(id)arg1 withExt:(BOOL)arg2;
+ (void)RemoveAllDBFile;
+ (id)CipherKey;
+ (int)DefaultPageSize;
+ (int)CompatiblePageSize;
+ (id)genFileInfoItemWithDBTag:(unsigned int)arg1 identifier:(id)arg2;
+ (void)reportBusinessWithDBTag:(unsigned int)arg1 identifier:(id)arg2 type:(unsigned int)arg3 cost:(double)arg4 funcName:(id)arg5;
+ (void)reportDBOpType:(unsigned int)arg1 dbTag:(unsigned int)arg2;
+ (void)reportTableCount:(unsigned int)arg1 dbIdentifier:(id)arg2 dbTag:(unsigned int)arg3;
+ (void)reportCheckpoint:(unsigned int)arg1 identifier:(id)arg2 opTime:(unsigned int)arg3 scene:(int)arg4 mode:(int)arg5;
+ (id)buildFileInfoItemsForTagList:(id)arg1;
+ (id)genDBFileInfo;
+ (id)genMesssageDBFileSizeInfo;
+ (void)logDBFileInfoWithReport:(BOOL)arg1;
+ (void)reportAddSyncMsgList:(id)arg1 chatName:(id)arg2;
+ (void)reportAddSendMsgList:(id)arg1 chatName:(id)arg2;

@end

