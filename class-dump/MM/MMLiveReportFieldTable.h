//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMLiveReportFieldTable : NSObject
{
    NSMutableDictionary *_fieldDict;
    Class _reportHandlerClass;
}

+ (void)addFieldWidthTable:(id)arg1 withClass:(Class)arg2 forFieldName:(id)arg3 forFieldIndex:(unsigned int)arg4;
- (void).cxx_destruct;
@property(nonatomic) Class reportHandlerClass; // @synthesize reportHandlerClass=_reportHandlerClass;
@property(retain, nonatomic) NSMutableDictionary *fieldDict; // @synthesize fieldDict=_fieldDict;
- (id)serializeAsLogString:(id)arg1;
- (id)fieldsSortByIndex;
- (id)init;

@end
