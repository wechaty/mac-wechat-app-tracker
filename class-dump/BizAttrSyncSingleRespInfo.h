//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString;

@interface BizAttrSyncSingleRespInfo : PBGeneratedMessage
{
    unsigned int hasBizUserName:1;
    unsigned int hasLastAttrVersion:1;
    NSString *bizUserName;
    NSData *lastAttrVersion;
    NSMutableArray *mutableUpdateInfoListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableUpdateInfoListList; // @synthesize mutableUpdateInfoListList;
@property(retain, nonatomic, setter=SetLastAttrVersion:) NSData *lastAttrVersion; // @synthesize lastAttrVersion;
@property(readonly, nonatomic) BOOL hasLastAttrVersion; // @synthesize hasLastAttrVersion;
@property(retain, nonatomic, setter=SetBizUserName:) NSString *bizUserName; // @synthesize bizUserName;
@property(readonly, nonatomic) BOOL hasBizUserName; // @synthesize hasBizUserName;
- (void)addUpdateInfoList:(id)arg1;
- (void)addUpdateInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *updateInfoList; // @dynamic updateInfoList;
- (id)updateInfoListList;
- (id)init;

@end

