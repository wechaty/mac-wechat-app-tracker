//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class WxaSyncBaseCmd;

@interface WxaSyncUpdateVersionCmd : PBGeneratedMessage
{
    unsigned int hasBase:1;
    unsigned int hasLastVersion:1;
    unsigned int lastVersion;
    WxaSyncBaseCmd *base;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetLastVersion:) unsigned int lastVersion; // @synthesize lastVersion;
@property(readonly, nonatomic) BOOL hasLastVersion; // @synthesize hasLastVersion;
@property(retain, nonatomic, setter=SetBase:) WxaSyncBaseCmd *base; // @synthesize base;
@property(readonly, nonatomic) BOOL hasBase; // @synthesize hasBase;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

