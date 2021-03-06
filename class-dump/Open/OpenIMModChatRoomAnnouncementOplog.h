//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface OpenIMModChatRoomAnnouncementOplog : PBGeneratedMessage
{
    unsigned int hasRoomName:1;
    unsigned int hasAnnouncement:1;
    NSString *roomName;
    NSString *announcement;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAnnouncement:) NSString *announcement; // @synthesize announcement;
@property(readonly, nonatomic) BOOL hasAnnouncement; // @synthesize hasAnnouncement;
@property(retain, nonatomic, setter=SetRoomName:) NSString *roomName; // @synthesize roomName;
@property(readonly, nonatomic) BOOL hasRoomName; // @synthesize hasRoomName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

