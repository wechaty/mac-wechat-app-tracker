//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface WARemoteDebug_RegisterInterface : PBGeneratedMessage
{
    unsigned int hasObjName:1;
    NSString *objName;
    NSMutableArray *mutableObjMethodListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableObjMethodListList; // @synthesize mutableObjMethodListList;
@property(retain, nonatomic, setter=SetObjName:) NSString *objName; // @synthesize objName;
@property(readonly, nonatomic) BOOL hasObjName; // @synthesize hasObjName;
- (void)addObjMethodList:(id)arg1;
- (void)addObjMethodListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *objMethodList; // @dynamic objMethodList;
- (id)objMethodListList;
- (id)init;

@end
