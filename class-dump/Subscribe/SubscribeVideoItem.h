//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface SubscribeVideoItem : PBGeneratedMessage
{
    unsigned int hasMemberid:1;
    unsigned int hasVideoLength:1;
    unsigned int memberid;
    unsigned int videoLength;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetVideoLength:) unsigned int videoLength; // @synthesize videoLength;
@property(readonly, nonatomic) BOOL hasVideoLength; // @synthesize hasVideoLength;
@property(nonatomic, setter=SetMemberid:) unsigned int memberid; // @synthesize memberid;
@property(readonly, nonatomic) BOOL hasMemberid; // @synthesize hasMemberid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

