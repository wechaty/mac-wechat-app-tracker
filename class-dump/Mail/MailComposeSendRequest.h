//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface MailComposeSendRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasMailAccount:1;
    unsigned int hasOldMailId:1;
    unsigned int hasSubject:1;
    unsigned int hasRcptTo:1;
    unsigned int hasCc:1;
    unsigned int hasBcc:1;
    unsigned int hasFrom:1;
    unsigned int hasMailContent:1;
    unsigned int hasReplyType:1;
    int replyType;
    BaseRequest *baseRequest;
    NSString *mailAccount;
    NSString *oldMailId;
    NSString *subject;
    NSString *rcptTo;
    NSString *cc;
    NSString *bcc;
    NSString *from;
    NSString *mailContent;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetReplyType:) int replyType; // @synthesize replyType;
@property(readonly, nonatomic) BOOL hasReplyType; // @synthesize hasReplyType;
@property(retain, nonatomic, setter=SetMailContent:) NSString *mailContent; // @synthesize mailContent;
@property(readonly, nonatomic) BOOL hasMailContent; // @synthesize hasMailContent;
@property(retain, nonatomic, setter=SetFrom:) NSString *from; // @synthesize from;
@property(readonly, nonatomic) BOOL hasFrom; // @synthesize hasFrom;
@property(retain, nonatomic, setter=SetBcc:) NSString *bcc; // @synthesize bcc;
@property(readonly, nonatomic) BOOL hasBcc; // @synthesize hasBcc;
@property(retain, nonatomic, setter=SetCc:) NSString *cc; // @synthesize cc;
@property(readonly, nonatomic) BOOL hasCc; // @synthesize hasCc;
@property(retain, nonatomic, setter=SetRcptTo:) NSString *rcptTo; // @synthesize rcptTo;
@property(readonly, nonatomic) BOOL hasRcptTo; // @synthesize hasRcptTo;
@property(retain, nonatomic, setter=SetSubject:) NSString *subject; // @synthesize subject;
@property(readonly, nonatomic) BOOL hasSubject; // @synthesize hasSubject;
@property(retain, nonatomic, setter=SetOldMailId:) NSString *oldMailId; // @synthesize oldMailId;
@property(readonly, nonatomic) BOOL hasOldMailId; // @synthesize hasOldMailId;
@property(retain, nonatomic, setter=SetMailAccount:) NSString *mailAccount; // @synthesize mailAccount;
@property(readonly, nonatomic) BOOL hasMailAccount; // @synthesize hasMailAccount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

