//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LBSLifeAction;

@interface LBSLifeActionList : PBGeneratedMessage
{
    unsigned int hasType:1;
    unsigned int hasLifeAction:1;
    unsigned int type;
    LBSLifeAction *lifeAction;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetLifeAction:) LBSLifeAction *lifeAction; // @synthesize lifeAction;
@property(readonly, nonatomic) BOOL hasLifeAction; // @synthesize hasLifeAction;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
