//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface Setting : NSObject <PBCoding>
{
    BOOL m_bNewMsgSound;
    BOOL m_bNewMsgVibration;
    unsigned int m_qqUin;
    unsigned int m_weixinUin;
    unsigned int m_uiStatus;
    unsigned int m_uiSelfShowType;
    NSString *m_nsUinPwdMD5;
    NSString *m_nsUin16PwdMD5;
    NSString *m_nsPassWordMD5;
    NSString *m_nsPwd16MD5;
    NSString *m_nsAutoAuthTicket;
    NSString *m_nsLastUUID;
    NSString *m_nsMsgPushSound;
    NSData *m_dtA2Key;
    NSData *m_dtLastKSid;
    NSData *m_dtAutoAuthKey;
    NSData *m_dtA2KeyNew;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_dtA2KeyNew;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_uiSelfShowType;
+ (void)PBArrayAdd_m_dtLastKSid;
+ (void)PBArrayAdd_m_dtA2Key;
+ (void)PBArrayAdd_m_uiStatus;
+ (void)PBArrayAdd_m_bNewMsgVibration;
+ (void)PBArrayAdd_m_bNewMsgSound;
+ (void)PBArrayAdd_m_nsMsgPushSound;
+ (void)PBArrayAdd_m_nsLastUUID;
+ (void)PBArrayAdd_m_nsAutoAuthTicket;
+ (void)PBArrayAdd_m_nsPwd16MD5;
+ (void)PBArrayAdd_m_nsPassWordMD5;
+ (void)PBArrayAdd_m_nsUin16PwdMD5;
+ (void)PBArrayAdd_m_nsUinPwdMD5;
+ (void)PBArrayAdd_m_weixinUin;
+ (void)PBArrayAdd_m_qqUin;
- (void).cxx_destruct;
@property(retain) NSData *m_dtA2KeyNew; // @synthesize m_dtA2KeyNew;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey;
@property(nonatomic) unsigned int m_uiSelfShowType; // @synthesize m_uiSelfShowType;
@property(retain) NSData *m_dtLastKSid; // @synthesize m_dtLastKSid;
@property(retain) NSData *m_dtA2Key; // @synthesize m_dtA2Key;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) BOOL m_bNewMsgVibration; // @synthesize m_bNewMsgVibration;
@property(nonatomic) BOOL m_bNewMsgSound; // @synthesize m_bNewMsgSound;
@property(retain) NSString *m_nsMsgPushSound; // @synthesize m_nsMsgPushSound;
@property(retain) NSString *m_nsLastUUID; // @synthesize m_nsLastUUID;
@property(retain) NSString *m_nsAutoAuthTicket; // @synthesize m_nsAutoAuthTicket;
@property(retain) NSString *m_nsPwd16MD5; // @synthesize m_nsPwd16MD5;
@property(retain) NSString *m_nsPassWordMD5; // @synthesize m_nsPassWordMD5;
@property(retain) NSString *m_nsUin16PwdMD5; // @synthesize m_nsUin16PwdMD5;
@property(retain) NSString *m_nsUinPwdMD5; // @synthesize m_nsUinPwdMD5;
@property(nonatomic) unsigned int m_weixinUin; // @synthesize m_weixinUin;
@property(nonatomic) unsigned int m_qqUin; // @synthesize m_qqUin;
- (void)copyFromModUserInfo:(id)arg1;
- (void)copyFromServerObj:(id)arg1;
- (const void *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

