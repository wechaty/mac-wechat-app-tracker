//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMEmoticonServerNotifyTaskGenerator : NSObject
{
}

+ (const char *)emojiDeviceIDNodeName;
+ (const char *)emojiMd5NodeName;
+ (const char *)emojiCustomBackupNodeName;
+ (const char *)emojiBackupNodeName;
+ (const char *)opCodeNodeName;
+ (long long)opcodeForTop;
+ (long long)opcodeForAdd;
+ (long long)opcodeForDelete;
+ (id)EmoticonMd5ObjectFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)getTaskForXmlString:(id)arg1;

@end

