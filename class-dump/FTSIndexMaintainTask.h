//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FTSIndexMaintainTask : NSObject
{
    unsigned int _lastMesLocalID;
    NSString *_nsChatName;
    unsigned long long _scene;
    NSArray *_list;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int lastMesLocalID; // @synthesize lastMesLocalID=_lastMesLocalID;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;

@end

