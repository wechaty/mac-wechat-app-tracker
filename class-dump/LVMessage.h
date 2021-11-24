//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface LVMessage : NSObject
{
    BOOL _isSelfCommit;
    BOOL _isLikeMsg;
    unsigned int _msgType;
    unsigned int _atime;
    NSImage *_headImage;
    long long _localSeq;
    NSString *_clientMsgId;
    NSString *_localClientMsgId;
    unsigned long long _seq;
    NSString *_identityId;
    NSString *_headimgurl;
    NSString *_content;
    NSString *_roomId;
    NSString *_nickName;
    struct CGSize _contentSize;
}

+ (id)contentAppendNickName:(id)arg1 andNickName:(id)arg2;
+ (id)contentAppendNickName:(id)arg1 andIdentityId:(id)arg2 andRoomId:(id)arg3;
+ (struct CGSize)calculateContentSize:(id)arg1 andType:(unsigned int)arg2;
+ (id)createSystemDisConnectMicNotifyWithConnectedMemName:(id)arg1;
+ (id)createSystemConnectMicNotifyWithConnectedMemName:(id)arg1;
+ (id)createSystemBanNotifyWithContent:(id)arg1;
+ (id)createSelfCommitCommentWithContent:(id)arg1 andRoomId:(id)arg2;
+ (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
+ (id)convertSystemMessageFromTemplateContentNode:(struct XmlReaderNode_t *)arg1 roomId:(id)arg2;
+ (id)convertSystemMessageFromXML:(id)arg1 roomId:(id)arg2 isLikeMsg:(char *)arg3;
+ (id)convertContent:(id)arg1 msgType:(unsigned int)arg2 roomId:(id)arg3 isLikeMsg:(char *)arg4;
+ (unsigned int)convertMsgType:(unsigned int)arg1;
+ (id)getNickName:(id)arg1 roomId:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) BOOL isLikeMsg; // @synthesize isLikeMsg=_isLikeMsg;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) BOOL isSelfCommit; // @synthesize isSelfCommit=_isSelfCommit;
@property(nonatomic) unsigned int atime; // @synthesize atime=_atime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *headimgurl; // @synthesize headimgurl=_headimgurl;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *localClientMsgId; // @synthesize localClientMsgId=_localClientMsgId;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) long long localSeq; // @synthesize localSeq=_localSeq;
@property(retain, nonatomic) NSImage *headImage; // @synthesize headImage=_headImage;
- (id)initWithLiveMessage:(id)arg1 roomId:(id)arg2;

@end

