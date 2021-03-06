//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCFPSRecorder : NSObject
{
    unsigned long long **m_stackCyclePool;
    unsigned long long *m_stackCount;
    unsigned long long m_poolTailPoint;
    unsigned int m_maxStackCount;
    unsigned int m_repeatCount;
    BOOL _shouldDump;
    BOOL _shouldDumpCpuUsage;
    BOOL _shouldExit;
    BOOL _autoUpload;
    int _recordID;
    int _dumpInterval;
    double _dumpTimeBegin;
    double _dumpTimeTotal;
    NSString *_scene;
    NSString *_reportID;
    NSString *_reportPath;
    NSMutableArray *_parentAddressFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *parentAddressFrame; // @synthesize parentAddressFrame=_parentAddressFrame;
@property(retain, nonatomic) NSString *reportPath; // @synthesize reportPath=_reportPath;
@property(retain, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) BOOL autoUpload; // @synthesize autoUpload=_autoUpload;
@property(nonatomic) BOOL shouldExit; // @synthesize shouldExit=_shouldExit;
@property(nonatomic) BOOL shouldDumpCpuUsage; // @synthesize shouldDumpCpuUsage=_shouldDumpCpuUsage;
@property(nonatomic) BOOL shouldDump; // @synthesize shouldDump=_shouldDump;
@property(nonatomic) double dumpTimeTotal; // @synthesize dumpTimeTotal=_dumpTimeTotal;
@property(nonatomic) double dumpTimeBegin; // @synthesize dumpTimeBegin=_dumpTimeBegin;
@property(nonatomic) int dumpInterval; // @synthesize dumpInterval=_dumpInterval;
@property(nonatomic) int recordID; // @synthesize recordID=_recordID;
- (id)description;
- (void)p_mergedAddressFrameArray:(id)arg1 with:(id)arg2;
- (void)p_mergeAddressFrame:(id)arg1 with:(id)arg2;
- (void)p_addAddressFrame:(id)arg1;
- (id)p_getAddressFrameWithStackTraces:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (id)p_getInfoDictFromAddressFrame:(id)arg1;
- (id)makeCallTree;
- (void)addThreadStack:(unsigned long long *)arg1 andLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithMaxStackTraceCount:(unsigned int)arg1 timeInterval:(unsigned int)arg2;
- (id)init;

@end

