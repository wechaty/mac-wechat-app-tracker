//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetUserNameRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasBindUin:1;
    unsigned int hasNickName:1;
    unsigned int hasTicket:1;
    unsigned int hasPwd:1;
    unsigned int hasMobile:1;
    unsigned int hasOpCode:1;
    unsigned int bindUin;
    unsigned int opCode;
    BaseRequest *baseRequest;
    NSString *nickName;
    NSString *ticket;
    NSString *pwd;
    NSString *mobile;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(retain, nonatomic, setter=SetMobile:) NSString *mobile; // @synthesize mobile;
@property(readonly, nonatomic) BOOL hasMobile; // @synthesize hasMobile;
@property(retain, nonatomic, setter=SetPwd:) NSString *pwd; // @synthesize pwd;
@property(readonly, nonatomic) BOOL hasPwd; // @synthesize hasPwd;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(nonatomic, setter=SetBindUin:) unsigned int bindUin; // @synthesize bindUin;
@property(readonly, nonatomic) BOOL hasBindUin; // @synthesize hasBindUin;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

