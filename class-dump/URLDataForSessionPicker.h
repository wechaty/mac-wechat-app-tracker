//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MessageData, NSData, NSString, NSURL;

@interface URLDataForSessionPicker : NSObject
{
    NSURL *_dataUrl;
    NSData *_cacheData;
    long long _urlType;
    NSString *_title;
    MessageData *_fakeMessageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MessageData *fakeMessageData; // @synthesize fakeMessageData=_fakeMessageData;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long urlType; // @synthesize urlType=_urlType;
@property(retain, nonatomic) NSData *cacheData; // @synthesize cacheData=_cacheData;
@property(retain, nonatomic) NSURL *dataUrl; // @synthesize dataUrl=_dataUrl;

@end

