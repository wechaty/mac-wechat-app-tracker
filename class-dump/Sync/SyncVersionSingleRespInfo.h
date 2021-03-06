//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, WxaSyncCmds;

@interface SyncVersionSingleRespInfo : PBGeneratedMessage
{
    unsigned int hasWxaUserName:1;
    unsigned int hasCmds:1;
    unsigned int hasAppid:1;
    NSString *wxaUserName;
    WxaSyncCmds *cmds;
    NSString *appid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic, setter=SetCmds:) WxaSyncCmds *cmds; // @synthesize cmds;
@property(readonly, nonatomic) BOOL hasCmds; // @synthesize hasCmds;
@property(retain, nonatomic, setter=SetWxaUserName:) NSString *wxaUserName; // @synthesize wxaUserName;
@property(readonly, nonatomic) BOOL hasWxaUserName; // @synthesize hasWxaUserName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

