//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface ContactProfile : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasPyinitial:1;
    unsigned int hasQuanPin:1;
    unsigned int hasSex:1;
    unsigned int hasImgBuf:1;
    unsigned int hasBitMask:1;
    unsigned int hasBitVal:1;
    unsigned int hasRemark:1;
    unsigned int hasImgRet:1;
    unsigned int hasRemarkPyinitial:1;
    unsigned int hasRemarkQuanPin:1;
    unsigned int hasContactType:1;
    unsigned int hasRoomInfoCount:1;
    unsigned int hasDomainList:1;
    unsigned int hasChatRoomNotify:1;
    unsigned int hasAddContactScene:1;
    unsigned int hasExtInfo:1;
    unsigned int hasExtUpdateSeq:1;
    unsigned int hasImgUpdateSeq:1;
    unsigned int hasAlias:1;
    int sex;
    unsigned int bitMask;
    unsigned int bitVal;
    unsigned int imgRet;
    unsigned int contactType;
    unsigned int roomInfoCount;
    unsigned int chatRoomNotify;
    unsigned int addContactScene;
    unsigned int extUpdateSeq;
    unsigned int imgUpdateSeq;
    NSString *userName;
    NSString *nickName;
    NSString *pyinitial;
    NSString *quanPin;
    SKBuiltinBuffer_t *imgBuf;
    NSString *remark;
    NSString *remarkPyinitial;
    NSString *remarkQuanPin;
    NSMutableArray *mutableRoomInfoListList;
    NSString *domainList;
    NSString *extInfo;
    NSString *alias;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAlias:) NSString *alias; // @synthesize alias;
@property(readonly, nonatomic) BOOL hasAlias; // @synthesize hasAlias;
@property(nonatomic, setter=SetImgUpdateSeq:) unsigned int imgUpdateSeq; // @synthesize imgUpdateSeq;
@property(readonly, nonatomic) BOOL hasImgUpdateSeq; // @synthesize hasImgUpdateSeq;
@property(nonatomic, setter=SetExtUpdateSeq:) unsigned int extUpdateSeq; // @synthesize extUpdateSeq;
@property(readonly, nonatomic) BOOL hasExtUpdateSeq; // @synthesize hasExtUpdateSeq;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(nonatomic, setter=SetAddContactScene:) unsigned int addContactScene; // @synthesize addContactScene;
@property(readonly, nonatomic) BOOL hasAddContactScene; // @synthesize hasAddContactScene;
@property(nonatomic, setter=SetChatRoomNotify:) unsigned int chatRoomNotify; // @synthesize chatRoomNotify;
@property(readonly, nonatomic) BOOL hasChatRoomNotify; // @synthesize hasChatRoomNotify;
@property(retain, nonatomic, setter=SetDomainList:) NSString *domainList; // @synthesize domainList;
@property(readonly, nonatomic) BOOL hasDomainList; // @synthesize hasDomainList;
@property(retain, nonatomic) NSMutableArray *mutableRoomInfoListList; // @synthesize mutableRoomInfoListList;
@property(nonatomic, setter=SetRoomInfoCount:) unsigned int roomInfoCount; // @synthesize roomInfoCount;
@property(readonly, nonatomic) BOOL hasRoomInfoCount; // @synthesize hasRoomInfoCount;
@property(nonatomic, setter=SetContactType:) unsigned int contactType; // @synthesize contactType;
@property(readonly, nonatomic) BOOL hasContactType; // @synthesize hasContactType;
@property(retain, nonatomic, setter=SetRemarkQuanPin:) NSString *remarkQuanPin; // @synthesize remarkQuanPin;
@property(readonly, nonatomic) BOOL hasRemarkQuanPin; // @synthesize hasRemarkQuanPin;
@property(retain, nonatomic, setter=SetRemarkPyinitial:) NSString *remarkPyinitial; // @synthesize remarkPyinitial;
@property(readonly, nonatomic) BOOL hasRemarkPyinitial; // @synthesize hasRemarkPyinitial;
@property(nonatomic, setter=SetImgRet:) unsigned int imgRet; // @synthesize imgRet;
@property(readonly, nonatomic) BOOL hasImgRet; // @synthesize hasImgRet;
@property(retain, nonatomic, setter=SetRemark:) NSString *remark; // @synthesize remark;
@property(readonly, nonatomic) BOOL hasRemark; // @synthesize hasRemark;
@property(nonatomic, setter=SetBitVal:) unsigned int bitVal; // @synthesize bitVal;
@property(readonly, nonatomic) BOOL hasBitVal; // @synthesize hasBitVal;
@property(nonatomic, setter=SetBitMask:) unsigned int bitMask; // @synthesize bitMask;
@property(readonly, nonatomic) BOOL hasBitMask; // @synthesize hasBitMask;
@property(retain, nonatomic, setter=SetImgBuf:) SKBuiltinBuffer_t *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(nonatomic, setter=SetSex:) int sex; // @synthesize sex;
@property(readonly, nonatomic) BOOL hasSex; // @synthesize hasSex;
@property(retain, nonatomic, setter=SetQuanPin:) NSString *quanPin; // @synthesize quanPin;
@property(readonly, nonatomic) BOOL hasQuanPin; // @synthesize hasQuanPin;
@property(retain, nonatomic, setter=SetPyinitial:) NSString *pyinitial; // @synthesize pyinitial;
@property(readonly, nonatomic) BOOL hasPyinitial; // @synthesize hasPyinitial;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void)addRoomInfoList:(id)arg1;
- (void)addRoomInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *roomInfoList; // @dynamic roomInfoList;
- (id)roomInfoListList;
- (id)init;

@end

