//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface ShakeBuffer : PBGeneratedMessage
{
    unsigned int hasReportTime:1;
    unsigned int hasX:1;
    unsigned int hasY:1;
    unsigned int reportTime;
    unsigned int x;
    unsigned int y;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetY:) unsigned int y; // @synthesize y;
@property(readonly, nonatomic) BOOL hasY; // @synthesize hasY;
@property(nonatomic, setter=SetX:) unsigned int x; // @synthesize x;
@property(readonly, nonatomic) BOOL hasX; // @synthesize hasX;
@property(nonatomic, setter=SetReportTime:) unsigned int reportTime; // @synthesize reportTime;
@property(readonly, nonatomic) BOOL hasReportTime; // @synthesize hasReportTime;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

