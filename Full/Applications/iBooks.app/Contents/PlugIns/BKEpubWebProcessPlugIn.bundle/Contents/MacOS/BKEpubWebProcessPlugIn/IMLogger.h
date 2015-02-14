/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKEpubWebProcessPlugIn.bundle/Contents/MacOS/BKEpubWebProcessPlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSFileHandle, NSRegularExpression;

@interface IMLogger : NSObject {

	NSString* _auxPath;
	NSFileHandle* _fileHandle;
	NSString* _filter;
	NSString* _runtimeOverride;
	int _pid;
	NSString* _procName;
	char _logTofileOnly;
	NSRegularExpression* _runtimeOverrideRegex;

}

@property (nonatomic,copy) NSString * filter;              //@synthesize filter=_filter - In the implementation block
@property (copy) NSString * runtimeOverride;               //@synthesize runtimeOverride=_runtimeOverride - In the implementation block
+(id)rolledLogPrefix;
+(void)rollLogPath:(id)arg1 maxSize:(unsigned long long)arg2 ;
+(void)deleteRolledLogsForLogPath:(id)arg1 maxAge:(double)arg2 ;
+(id)sharedLogger;
-(void)setRuntimeOverride:(NSString *)arg1 ;
-(void)logFile:(const char*)arg1 lineNumber:(int)arg2 format:(id)arg3 ;
-(NSString *)runtimeOverride;
-(void)setAuxPath:(id)arg1 ;
-(id)auxPath;
-(void)setLogToFileOnly:(char)arg1 ;
-(char)logTofileOnly;
-(char)shouldOverrideCondition:(id)arg1 file:(id)arg2 ;
-(void)logFunction:(const char*)arg1 format:(id)arg2 ;
-(void)addRuntimeOverride:(id)arg1 ;
-(void)removeRuntimeOverride:(id)arg1 ;
-(NSString *)filter;
-(void)logString:(id)arg1 ;
-(void)setFilter:(NSString *)arg1 ;
-(id)init;
@end

