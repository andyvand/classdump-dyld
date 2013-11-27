/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TULogger.h>

@protocol TUAppender;
@class NSString, NSObject;

@interface TUBasicLogger : NSObject <TULogger> {

	opaque_pthread_mutex_t _lock;
	NSString* _identifier;
	int _minimumLogLevel;
	BOOL _enabled;
	NSObject<TUAppender>* _appender;
	BOOL _backtracesEnabled;
	BOOL _symbolicateBacktraces;

}

@property (readonly) NSString * identifier; 
@property (assign) int minimumLogLevel; 
@property (assign) BOOL enabled; 
@property (readonly) NSObject<TUAppender> * appender; 
@property (assign) BOOL backtracesEnabled;                         //@synthesize backtracesEnabled=_backtracesEnabled - In the implementation block
@property (assign) BOOL symbolicateBacktraces;                     //@synthesize symbolicateBacktraces=_symbolicateBacktraces - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)setEnabled:(BOOL)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(BOOL)enabled;
-(void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 ;
-(BOOL)_shouldLogWithLevel:(int)arg1 topic:(id)arg2 ;
-(BOOL)symbolicateBacktraces;
-(void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 args:(void*)arg5 ;
-(void)setMinimumLogLevel:(int)arg1 ;
-(int)minimumLogLevel;
-(void)setAppender:(id)arg1 ;
-(id)appender;
-(void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 text:(id)arg4 ;
-(BOOL)shouldLog;
-(BOOL)shouldLogWithLevel:(int)arg1 topic:(id)arg2 ;
-(void)setBacktracesEnabled:(BOOL)arg1 ;
-(BOOL)backtracesEnabled;
-(void)setSymbolicateBacktraces:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 minimumLogLevel:(int)arg2 appender:(id)arg3 ;
@end
