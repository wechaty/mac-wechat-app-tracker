//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface WCContactDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
}

+ (void)deleteContactDB;
- (void).cxx_destruct;
- (id)getAndUpdateContact:(id)arg1 propertyDict:(id)arg2;
- (id)getAndUpdateContactFlag:(id)arg1 flag:(unsigned int)arg2 isOpen:(BOOL)arg3;
- (BOOL)deleteContactsFromContactDB:(id)arg1;
- (BOOL)deleteContactFromContactDB:(id)arg1;
- (BOOL)addOrModifyContactsKeepLocalField:(id)arg1 removeStrangerList:(id)arg2;
- (BOOL)addOrModifyContactKeepLocalField:(id)arg1;
- (BOOL)addOrModifyContactsToContactDB:(id)arg1;
- (BOOL)addOrModifyContactToContactDB:(id)arg1;
- (id)getContactsWithUsernames:(id)arg1;
- (id)getAllContactsInContactDBWithListType:(unsigned int)arg1;
- (id)getContactDataFromContactDBWithNickName:(id)arg1;
- (id)getContactsFromContactDB:(id)arg1;
- (id)getContactDataFromContactDB:(id)arg1;
- (BOOL)isContactDataExistInContactDB:(id)arg1;
- (BOOL)isFriendContactData:(id)arg1;
- (void)dealloc;
- (void)close;
- (void)closeDBBeforeInit;
- (id)init;

@end

