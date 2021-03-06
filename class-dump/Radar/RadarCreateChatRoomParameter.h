//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface RadarCreateChatRoomParameter : PBGeneratedMessage
{
    unsigned int hasTicket:1;
    unsigned int hasRadarMemberCount:1;
    unsigned int radarMemberCount;
    NSString *ticket;
    NSMutableArray *mutableRadarMemberListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableRadarMemberListList; // @synthesize mutableRadarMemberListList;
@property(nonatomic, setter=SetRadarMemberCount:) unsigned int radarMemberCount; // @synthesize radarMemberCount;
@property(readonly, nonatomic) BOOL hasRadarMemberCount; // @synthesize hasRadarMemberCount;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
- (void)addRadarMemberList:(id)arg1;
- (void)addRadarMemberListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *radarMemberList; // @dynamic radarMemberList;
- (id)radarMemberListList;
- (id)init;

@end

