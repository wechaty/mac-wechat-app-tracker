//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface DeviceCamera : PBGeneratedMessage
{
    unsigned int hasEnable:1;
    unsigned int hasFps:1;
    unsigned int hasOrien:1;
    unsigned int hasIsleft:1;
    unsigned int hasRotate:1;
    unsigned int hasWidth:1;
    unsigned int hasHeight:1;
    unsigned int enable;
    unsigned int fps;
    unsigned int orien;
    unsigned int isleft;
    unsigned int rotate;
    unsigned int width;
    unsigned int height;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetHeight:) unsigned int height; // @synthesize height;
@property(readonly, nonatomic) BOOL hasHeight; // @synthesize hasHeight;
@property(nonatomic, setter=SetWidth:) unsigned int width; // @synthesize width;
@property(readonly, nonatomic) BOOL hasWidth; // @synthesize hasWidth;
@property(nonatomic, setter=SetRotate:) unsigned int rotate; // @synthesize rotate;
@property(readonly, nonatomic) BOOL hasRotate; // @synthesize hasRotate;
@property(nonatomic, setter=SetIsleft:) unsigned int isleft; // @synthesize isleft;
@property(readonly, nonatomic) BOOL hasIsleft; // @synthesize hasIsleft;
@property(nonatomic, setter=SetOrien:) unsigned int orien; // @synthesize orien;
@property(readonly, nonatomic) BOOL hasOrien; // @synthesize hasOrien;
@property(nonatomic, setter=SetFps:) unsigned int fps; // @synthesize fps;
@property(readonly, nonatomic) BOOL hasFps; // @synthesize hasFps;
@property(nonatomic, setter=SetEnable:) unsigned int enable; // @synthesize enable;
@property(readonly, nonatomic) BOOL hasEnable; // @synthesize hasEnable;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

