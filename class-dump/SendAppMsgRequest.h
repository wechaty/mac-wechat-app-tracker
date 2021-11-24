//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class AppMsg, BaseRequest, NSString;

@interface SendAppMsgRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasMsg:1;
    unsigned int hasCommentUrl:1;
    unsigned int hasReqTime:1;
    unsigned int hasMd5:1;
    unsigned int hasFileType:1;
    unsigned int hasSignature:1;
    unsigned int hasFromSence:1;
    unsigned int hasHitMd5:1;
    unsigned int hasCrc32:1;
    unsigned int hasMsgForwardType:1;
    unsigned int reqTime;
    unsigned int fileType;
    unsigned int hitMd5;
    unsigned int crc32;
    unsigned int msgForwardType;
    BaseRequest *baseRequest;
    AppMsg *msg;
    NSString *commentUrl;
    NSString *md5;
    NSString *signature;
    NSString *fromSence;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetMsgForwardType:) unsigned int msgForwardType; // @synthesize msgForwardType;
@property(readonly, nonatomic) BOOL hasMsgForwardType; // @synthesize hasMsgForwardType;
@property(nonatomic, setter=SetCrc32:) unsigned int crc32; // @synthesize crc32;
@property(readonly, nonatomic) BOOL hasCrc32; // @synthesize hasCrc32;
@property(nonatomic, setter=SetHitMd5:) unsigned int hitMd5; // @synthesize hitMd5;
@property(readonly, nonatomic) BOOL hasHitMd5; // @synthesize hasHitMd5;
@property(retain, nonatomic, setter=SetFromSence:) NSString *fromSence; // @synthesize fromSence;
@property(readonly, nonatomic) BOOL hasFromSence; // @synthesize hasFromSence;
@property(retain, nonatomic, setter=SetSignature:) NSString *signature; // @synthesize signature;
@property(readonly, nonatomic) BOOL hasSignature; // @synthesize hasSignature;
@property(nonatomic, setter=SetFileType:) unsigned int fileType; // @synthesize fileType;
@property(readonly, nonatomic) BOOL hasFileType; // @synthesize hasFileType;
@property(retain, nonatomic, setter=SetMd5:) NSString *md5; // @synthesize md5;
@property(readonly, nonatomic) BOOL hasMd5; // @synthesize hasMd5;
@property(nonatomic, setter=SetReqTime:) unsigned int reqTime; // @synthesize reqTime;
@property(readonly, nonatomic) BOOL hasReqTime; // @synthesize hasReqTime;
@property(retain, nonatomic, setter=SetCommentUrl:) NSString *commentUrl; // @synthesize commentUrl;
@property(readonly, nonatomic) BOOL hasCommentUrl; // @synthesize hasCommentUrl;
@property(retain, nonatomic, setter=SetMsg:) AppMsg *msg; // @synthesize msg;
@property(readonly, nonatomic) BOOL hasMsg; // @synthesize hasMsg;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

