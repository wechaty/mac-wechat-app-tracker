//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WeNoteLocationInfo : NSObject
{
    double _lat;
    double _lng;
    double _scale;
    NSString *_address;
    NSString *_poiName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;

@end

