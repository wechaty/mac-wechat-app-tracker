//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, WXCPbVoiceGroupInfo;

@interface WXCPbCSModifyVoiceGroupInfoReq : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasGroupInfo:1;
    NSString *groupId;
    WXCPbVoiceGroupInfo *groupInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetGroupInfo:) WXCPbVoiceGroupInfo *groupInfo; // @synthesize groupInfo;
@property(readonly, nonatomic) BOOL hasGroupInfo; // @synthesize hasGroupInfo;
@property(retain, nonatomic, setter=SetGroupId:) NSString *groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

