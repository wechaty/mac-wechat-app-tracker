//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BoxWidgetUrlInfo;

@interface WebSearchBoxCtrlInfo : PBGeneratedMessage
{
    unsigned int hasCtrlType:1;
    unsigned int hasWidgetUrlInfo:1;
    unsigned long long ctrlType;
    BoxWidgetUrlInfo *widgetUrlInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetWidgetUrlInfo:) BoxWidgetUrlInfo *widgetUrlInfo; // @synthesize widgetUrlInfo;
@property(readonly, nonatomic) BOOL hasWidgetUrlInfo; // @synthesize hasWidgetUrlInfo;
@property(nonatomic, setter=SetCtrlType:) unsigned long long ctrlType; // @synthesize ctrlType;
@property(readonly, nonatomic) BOOL hasCtrlType; // @synthesize hasCtrlType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

