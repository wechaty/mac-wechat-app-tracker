//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEmoticonServerNotifyTask.h"

@class NSArray;
@protocol MMEmoticonAddFromServerLogicDelegate;

@interface MMEmoticonAddFromServerLogic : MMEmoticonServerNotifyTask
{
    NSArray *_addMd5Array;
    id <MMEmoticonAddFromServerLogicDelegate> _m_delegate;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <MMEmoticonAddFromServerLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSArray *addMd5Array; // @synthesize addMd5Array=_addMd5Array;
- (BOOL)resumeLogic;
- (id)initWithDelegate:(id)arg1 md5ObjectArray:(id)arg2 type:(unsigned long long)arg3;

@end
