//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEmoticonServerNotifyTask.h"

@class NSArray;

@interface MMEmoticonDeleteFromServerLogic : MMEmoticonServerNotifyTask
{
    NSArray *_m_deleteMd5Array;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *m_deleteMd5Array; // @synthesize m_deleteMd5Array=_m_deleteMd5Array;
- (BOOL)resumeLogic;
- (id)initWithMd5ObjectArray:(id)arg1 type:(unsigned long long)arg2;

@end

