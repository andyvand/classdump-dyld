/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSXPCConnection, NSFileHandle;

@interface NSUserScriptTask : NSObject {

	NSURL* _scriptURL;
	NSXPCConnection* _connection;
	char _hasExeced;
	char _hasTerminated;
	NSFileHandle* _stdin;
	NSFileHandle* _stdout;
	NSFileHandle* _stderr;

}

@property (copy,readonly) NSURL * scriptURL; 
@property (assign) char showsProgressInMenuBar; 
@property (retain) NSFileHandle * standardInput;               //@synthesize stdin=_stdin - In the implementation block
@property (retain) NSFileHandle * standardOutput;              //@synthesize stdout=_stdout - In the implementation block
@property (retain) NSFileHandle * standardError;               //@synthesize stderr=_stderr - In the implementation block
+(id)badFileError:(id)arg1 ;
+(char)isValidScriptFile:(id)arg1 error:(id*)arg2 ;
-(NSFileHandle *)standardOutput;
-(void)setStandardError:(NSFileHandle *)arg1 ;
-(NSFileHandle *)standardInput;
-(NSFileHandle *)standardError;
-(char)showsProgressInMenuBar;
-(id)interpretErrorStatus:(int)arg1 withOutput:(id)arg2 ;
-(NSURL *)scriptURL;
-(void)setShowsProgressInMenuBar:(char)arg1 ;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)executeWithInterpreter:(id)arg1 arguments:(id)arg2 :(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)setStandardOutput:(NSFileHandle *)arg1 ;
-(void)setStandardInput:(NSFileHandle *)arg1 ;
@end

