//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAppMsgBaseDB.h"

@class WCTTable;

@interface MMAppMsgUploadDB : MMAppMsgBaseDB
{
    WCTTable *_m_tableUpload;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *m_tableUpload; // @synthesize m_tableUpload=_m_tableUpload;
- (void)setupTable;
- (id)getAMUItem:(unsigned int)arg1;
- (BOOL)deleteAllItemFroUser:(id)arg1;
- (BOOL)deleteAMUItemForMsg:(id)arg1;
- (BOOL)deleteAMUItemInDB:(id)arg1;
- (BOOL)updateAMUItemInDB:(id)arg1;
- (id)init;

@end
