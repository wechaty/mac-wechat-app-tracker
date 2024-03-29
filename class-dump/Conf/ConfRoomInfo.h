//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface ConfRoomInfo : PBGeneratedMessage
{
    unsigned int hasImroomid:1;
    unsigned int hasRoomid:1;
    unsigned int hasRoomType:1;
    unsigned int hasSelfMemberid:1;
    unsigned int roomType;
    unsigned int selfMemberid;
    unsigned long long imroomid;
    unsigned long long roomid;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSelfMemberid:) unsigned int selfMemberid; // @synthesize selfMemberid;
@property(readonly, nonatomic) BOOL hasSelfMemberid; // @synthesize hasSelfMemberid;
@property(nonatomic, setter=SetRoomType:) unsigned int roomType; // @synthesize roomType;
@property(readonly, nonatomic) BOOL hasRoomType; // @synthesize hasRoomType;
@property(nonatomic, setter=SetRoomid:) unsigned long long roomid; // @synthesize roomid;
@property(readonly, nonatomic) BOOL hasRoomid; // @synthesize hasRoomid;
@property(nonatomic, setter=SetImroomid:) unsigned long long imroomid; // @synthesize imroomid;
@property(readonly, nonatomic) BOOL hasImroomid; // @synthesize hasImroomid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

