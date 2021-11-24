//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageDataExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class MessageData, NSString;

@interface CExtendInfoOfVoip : NSObject <IMessageDataExt, IMsgExtendOperation, NSCopying>
{
    unsigned int m_uiVoipRecvTime;
    int m_iFromAnswer;
    unsigned int m_uiVoipStatus;
    unsigned int m_uiVoipInviteType;
    int m_iVoipRoomid;
    long long m_i64VoipKey;
    unsigned int m_wordingType;
    unsigned int m_duration;
    MessageData *m_refMessageData;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_duration; // @synthesize m_duration;
@property(nonatomic) unsigned int m_wordingType; // @synthesize m_wordingType;
@property(nonatomic) __weak MessageData *m_refMessageData; // @synthesize m_refMessageData;
@property(nonatomic) unsigned int m_uiVoipStatus; // @synthesize m_uiVoipStatus;
@property(nonatomic) int m_iFromAnswer; // @synthesize m_iFromAnswer;
@property(nonatomic) unsigned int m_uiVoipRecvTime; // @synthesize m_uiVoipRecvTime;
@property(nonatomic) unsigned int m_uiVoipInviteType; // @synthesize m_uiVoipInviteType;
@property(nonatomic) int m_iVoipRoomid; // @synthesize m_iVoipRoomid;
@property(nonatomic) long long m_i64VoipKey; // @synthesize m_i64VoipKey;
- (void)updateContent:(id)arg1;
- (void)parseMsgFieldFromXML;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

