//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ClientContextInfo : PBGeneratedMessage
{
    unsigned int hasContextId:1;
    unsigned int hasClickTabContextId:1;
    unsigned int hasClientReportBuff:1;
    NSString *contextId;
    NSString *clickTabContextId;
    NSString *clientReportBuff;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetClientReportBuff:) NSString *clientReportBuff; // @synthesize clientReportBuff;
@property(readonly, nonatomic) BOOL hasClientReportBuff; // @synthesize hasClientReportBuff;
@property(retain, nonatomic, setter=SetClickTabContextId:) NSString *clickTabContextId; // @synthesize clickTabContextId;
@property(readonly, nonatomic) BOOL hasClickTabContextId; // @synthesize hasClickTabContextId;
@property(retain, nonatomic, setter=SetContextId:) NSString *contextId; // @synthesize contextId;
@property(readonly, nonatomic) BOOL hasContextId; // @synthesize hasContextId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

