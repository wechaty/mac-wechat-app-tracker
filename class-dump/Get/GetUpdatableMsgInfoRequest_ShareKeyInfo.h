//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GetUpdatableMsgInfoRequest_ShareKeyInfo : PBGeneratedMessage
{
    unsigned int hasAppid:1;
    unsigned int hasShareKey:1;
    NSString *appid;
    NSString *shareKey;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetShareKey:) NSString *shareKey; // @synthesize shareKey;
@property(readonly, nonatomic) BOOL hasShareKey; // @synthesize hasShareKey;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

