//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WXCPbCSCancelCreateVoiceGroupReq : PBGeneratedMessage
{
    unsigned int hasClientGroupId:1;
    unsigned int hasReason:1;
    int reason;
    NSString *clientGroupId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetReason:) int reason; // @synthesize reason;
@property(readonly, nonatomic) BOOL hasReason; // @synthesize hasReason;
@property(retain, nonatomic, setter=SetClientGroupId:) NSString *clientGroupId; // @synthesize clientGroupId;
@property(readonly, nonatomic) BOOL hasClientGroupId; // @synthesize hasClientGroupId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

