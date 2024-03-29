//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface ModFavItemRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFavId:1;
    unsigned int hasIndexCount:1;
    unsigned int hasObjectCount:1;
    unsigned int hasReplaceObject:1;
    unsigned int hasScene:1;
    unsigned int favId;
    unsigned int indexCount;
    unsigned int objectCount;
    unsigned int scene;
    BaseRequest *baseRequest;
    NSMutableArray *mutableIndexListList;
    NSMutableArray *mutableObjectListList;
    NSString *replaceObject;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetReplaceObject:) NSString *replaceObject; // @synthesize replaceObject;
@property(readonly, nonatomic) BOOL hasReplaceObject; // @synthesize hasReplaceObject;
@property(retain, nonatomic) NSMutableArray *mutableObjectListList; // @synthesize mutableObjectListList;
@property(nonatomic, setter=SetObjectCount:) unsigned int objectCount; // @synthesize objectCount;
@property(readonly, nonatomic) BOOL hasObjectCount; // @synthesize hasObjectCount;
@property(retain, nonatomic) NSMutableArray *mutableIndexListList; // @synthesize mutableIndexListList;
@property(nonatomic, setter=SetIndexCount:) unsigned int indexCount; // @synthesize indexCount;
@property(readonly, nonatomic) BOOL hasIndexCount; // @synthesize hasIndexCount;
@property(nonatomic, setter=SetFavId:) unsigned int favId; // @synthesize favId;
@property(readonly, nonatomic) BOOL hasFavId; // @synthesize hasFavId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addObjectList:(id)arg1;
- (void)addObjectListFromArray:(id)arg1;
- (void)addIndexList:(id)arg1;
- (void)addIndexListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *objectList; // @dynamic objectList;
- (id)objectListList;
@property(retain, nonatomic) NSMutableArray *indexList; // @dynamic indexList;
- (id)indexListList;
- (id)init;

@end

