//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SolitaireSessionHandler : NSObject <PBCoding>
{
    NSString *chatName;
    NSMutableDictionary *dicActiveSolitaire;
    NSMutableDictionary *dicSolitaireForMatch;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicSolitaireForMatch;
+ (void)PBArrayAdd_dicActiveSolitaire;
+ (void)PBArrayAdd_chatName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicSolitaireForMatch; // @synthesize dicSolitaireForMatch;
@property(retain, nonatomic) NSMutableDictionary *dicActiveSolitaire; // @synthesize dicActiveSolitaire;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
- (void)notifyDeactiveSolitaire:(id)arg1;
- (void)notifyActiveSolitaire:(id)arg1;
- (void)tryReportActive:(id)arg1 InfoObj:(id)arg2;
- (BOOL)matchSolitaireWithInfoObj:(id)arg1;
- (BOOL)checkAndDropSolitaire;
- (BOOL)dropForMatchSolitaire;
- (BOOL)dropActiveSolitaire;
- (id)getSolitaireWithMsgWrap:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

