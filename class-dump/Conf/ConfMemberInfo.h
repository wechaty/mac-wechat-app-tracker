//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ConfMemberInfo : PBGeneratedMessage
{
    unsigned int hasMemberid:1;
    unsigned int hasOpenid:1;
    unsigned int hasStatus:1;
    unsigned int memberid;
    unsigned int status;
    NSString *openid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetOpenid:) NSString *openid; // @synthesize openid;
@property(readonly, nonatomic) BOOL hasOpenid; // @synthesize hasOpenid;
@property(nonatomic, setter=SetMemberid:) unsigned int memberid; // @synthesize memberid;
@property(readonly, nonatomic) BOOL hasMemberid; // @synthesize hasMemberid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

