//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class FetchDataRequest_FetchItem_LaunchParam, NSString;

@interface FetchDataRequest_FetchItem : PBGeneratedMessage
{
    unsigned int hasUsername:1;
    unsigned int hasFetchType:1;
    unsigned int hasPreFetchParam:1;
    unsigned int fetchType;
    NSString *username;
    FetchDataRequest_FetchItem_LaunchParam *preFetchParam;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPreFetchParam:) FetchDataRequest_FetchItem_LaunchParam *preFetchParam; // @synthesize preFetchParam;
@property(readonly, nonatomic) BOOL hasPreFetchParam; // @synthesize hasPreFetchParam;
@property(nonatomic, setter=SetFetchType:) unsigned int fetchType; // @synthesize fetchType;
@property(readonly, nonatomic) BOOL hasFetchType; // @synthesize hasFetchType;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

