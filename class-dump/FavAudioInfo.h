//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FavAudioInfo : NSObject
{
    BOOL _bEnable;
    BOOL _bForceSpeeker;
    unsigned int _uiAudioFormat;
    unsigned int _uiAudioID;
    unsigned int _uiAudioDuration;
    NSString *_nsAudioID;
    NSString *_nsAudioPath;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bForceSpeeker; // @synthesize bForceSpeeker=_bForceSpeeker;
@property(nonatomic) BOOL bEnable; // @synthesize bEnable=_bEnable;
@property(retain, nonatomic) NSString *nsAudioPath; // @synthesize nsAudioPath=_nsAudioPath;
@property(retain, nonatomic) NSString *nsAudioID; // @synthesize nsAudioID=_nsAudioID;
@property(nonatomic) unsigned int uiAudioDuration; // @synthesize uiAudioDuration=_uiAudioDuration;
@property(nonatomic) unsigned int uiAudioID; // @synthesize uiAudioID=_uiAudioID;
@property(nonatomic) unsigned int uiAudioFormat; // @synthesize uiAudioFormat=_uiAudioFormat;

@end

