//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContactData.h"

@class MessageData, NSString;

@interface WCPushContactData : WCContactData
{
    BOOL bReaded;
    unsigned int uiPushTime;
    unsigned int uiOpCode;
    unsigned int uiStatus;
    NSString *nsSource;
    NSString *nsDes;
    NSString *nsTicket;
    MessageData *oMsgData;
    NSString *m_nsChatRoomUserName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_nsChatRoomUserName;
+ (void)PBArrayAdd_oMsgData;
+ (void)PBArrayAdd_uiStatus;
+ (void)PBArrayAdd_uiOpCode;
+ (void)PBArrayAdd_nsTicket;
+ (void)PBArrayAdd_nsDes;
+ (void)PBArrayAdd_uiPushTime;
+ (void)PBArrayAdd_bReaded;
+ (void)PBArrayAdd_nsSource;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsChatRoomUserName; // @synthesize m_nsChatRoomUserName;
@property(retain, nonatomic) MessageData *oMsgData; // @synthesize oMsgData;
@property(nonatomic) unsigned int uiStatus; // @synthesize uiStatus;
@property(nonatomic) unsigned int uiOpCode; // @synthesize uiOpCode;
@property(copy, nonatomic) NSString *nsTicket; // @synthesize nsTicket;
@property(retain, nonatomic) NSString *nsDes; // @synthesize nsDes;
@property(nonatomic) unsigned int uiPushTime; // @synthesize uiPushTime;
@property(nonatomic) BOOL bReaded; // @synthesize bReaded;
@property(copy, nonatomic) NSString *nsSource; // @synthesize nsSource;
- (void)copyFieldFromWCContact:(id)arg1;
- (id)init;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

