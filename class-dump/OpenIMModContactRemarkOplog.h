//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface OpenIMModContactRemarkOplog : PBGeneratedMessage
{
    unsigned int hasTpUsername:1;
    unsigned int hasRemark:1;
    NSString *tpUsername;
    NSString *remark;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetRemark:) NSString *remark; // @synthesize remark;
@property(readonly, nonatomic) BOOL hasRemark; // @synthesize hasRemark;
@property(retain, nonatomic, setter=SetTpUsername:) NSString *tpUsername; // @synthesize tpUsername;
@property(readonly, nonatomic) BOOL hasTpUsername; // @synthesize hasTpUsername;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

