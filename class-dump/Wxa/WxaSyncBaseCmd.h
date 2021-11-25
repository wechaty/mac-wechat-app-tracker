//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface WxaSyncBaseCmd : PBGeneratedMessage
{
    unsigned int hasDealEndTime:1;
    unsigned int hasCmdSequnce:1;
    unsigned int hasReportIdKey:1;
    unsigned int hasReportKeyOffset:1;
    unsigned int dealEndTime;
    unsigned int cmdSequnce;
    unsigned int reportIdKey;
    unsigned int reportKeyOffset;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetReportKeyOffset:) unsigned int reportKeyOffset; // @synthesize reportKeyOffset;
@property(readonly, nonatomic) BOOL hasReportKeyOffset; // @synthesize hasReportKeyOffset;
@property(nonatomic, setter=SetReportIdKey:) unsigned int reportIdKey; // @synthesize reportIdKey;
@property(readonly, nonatomic) BOOL hasReportIdKey; // @synthesize hasReportIdKey;
@property(nonatomic, setter=SetCmdSequnce:) unsigned int cmdSequnce; // @synthesize cmdSequnce;
@property(readonly, nonatomic) BOOL hasCmdSequnce; // @synthesize hasCmdSequnce;
@property(nonatomic, setter=SetDealEndTime:) unsigned int dealEndTime; // @synthesize dealEndTime;
@property(readonly, nonatomic) BOOL hasDealEndTime; // @synthesize hasDealEndTime;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
