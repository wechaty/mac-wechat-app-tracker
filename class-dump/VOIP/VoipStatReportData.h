//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinString_t;

@interface VoipStatReportData : PBGeneratedMessage
{
    unsigned int hasStatReport:1;
    SKBuiltinString_t *statReport;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetStatReport:) SKBuiltinString_t *statReport; // @synthesize statReport;
@property(readonly, nonatomic) BOOL hasStatReport; // @synthesize hasStatReport;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

