//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface OauthAuthorizeConfirmReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasOauthUrl:1;
    unsigned int hasOpt:1;
    unsigned int opt;
    BaseRequest *baseRequest;
    NSString *oauthUrl;
    NSMutableArray *mutableScopeList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableScopeList; // @synthesize mutableScopeList;
@property(nonatomic, setter=SetOpt:) unsigned int opt; // @synthesize opt;
@property(readonly, nonatomic) BOOL hasOpt; // @synthesize hasOpt;
@property(retain, nonatomic, setter=SetOauthUrl:) NSString *oauthUrl; // @synthesize oauthUrl;
@property(readonly, nonatomic) BOOL hasOauthUrl; // @synthesize hasOauthUrl;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addScopeFromArray:(id)arg1;
- (void)addScope:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *scope; // @dynamic scope;
- (id)scopeList;
- (id)init;

@end

