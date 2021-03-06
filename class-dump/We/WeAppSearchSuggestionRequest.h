//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface WeAppSearchSuggestionRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasQuery:1;
    unsigned int hasCliVersion:1;
    unsigned int hasSessionId:1;
    unsigned int hasKeywordId:1;
    unsigned int hasWordingId:1;
    unsigned int cliVersion;
    BaseRequest *baseRequest;
    NSString *query;
    NSString *sessionId;
    NSString *keywordId;
    NSString *wordingId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetWordingId:) NSString *wordingId; // @synthesize wordingId;
@property(readonly, nonatomic) BOOL hasWordingId; // @synthesize hasWordingId;
@property(retain, nonatomic, setter=SetKeywordId:) NSString *keywordId; // @synthesize keywordId;
@property(readonly, nonatomic) BOOL hasKeywordId; // @synthesize hasKeywordId;
@property(retain, nonatomic, setter=SetSessionId:) NSString *sessionId; // @synthesize sessionId;
@property(readonly, nonatomic) BOOL hasSessionId; // @synthesize hasSessionId;
@property(nonatomic, setter=SetCliVersion:) unsigned int cliVersion; // @synthesize cliVersion;
@property(readonly, nonatomic) BOOL hasCliVersion; // @synthesize hasCliVersion;
@property(retain, nonatomic, setter=SetQuery:) NSString *query; // @synthesize query;
@property(readonly, nonatomic) BOOL hasQuery; // @synthesize hasQuery;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

