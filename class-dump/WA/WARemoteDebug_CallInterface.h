//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface WARemoteDebug_CallInterface : PBGeneratedMessage
{
    unsigned int hasObjName:1;
    unsigned int hasMethodName:1;
    unsigned int hasCallId:1;
    unsigned int callId;
    NSString *objName;
    NSString *methodName;
    NSMutableArray *mutableMethodArgListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetCallId:) unsigned int callId; // @synthesize callId;
@property(readonly, nonatomic) BOOL hasCallId; // @synthesize hasCallId;
@property(retain, nonatomic) NSMutableArray *mutableMethodArgListList; // @synthesize mutableMethodArgListList;
@property(retain, nonatomic, setter=SetMethodName:) NSString *methodName; // @synthesize methodName;
@property(readonly, nonatomic) BOOL hasMethodName; // @synthesize hasMethodName;
@property(retain, nonatomic, setter=SetObjName:) NSString *objName; // @synthesize objName;
@property(readonly, nonatomic) BOOL hasObjName; // @synthesize hasObjName;
- (void)addMethodArgListFromArray:(id)arg1;
- (void)addMethodArgList:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *methodArgList; // @dynamic methodArgList;
- (id)methodArgListList;
- (id)init;

@end

