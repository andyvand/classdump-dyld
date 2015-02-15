/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSUserScriptTaskRunner.h>

@protocol NSUserScriptTaskRunner
@required
-(oneway void)executeScript:(id)arg1 interpreter:(id)arg2 arguments:(id)arg3 standardInput:(id)arg4 standardOutput:(id)arg5 standardError:(id)arg6 showingProgress:(char)arg7 :(/*^block*/id)arg8;

@end


@class NSXPCConnection, NSTask, NSProgress;

@interface NSUserScriptTaskRunner : NSObject <NSUserScriptTaskRunner> {

	NSXPCConnection* _connection;
	NSTask* _task;
	NSProgress* _progress;

}
-(oneway void)executeScript:(id)arg1 interpreter:(id)arg2 arguments:(id)arg3 standardInput:(id)arg4 standardOutput:(id)arg5 standardError:(id)arg6 showingProgress:(char)arg7 :(/*^block*/id)arg8 ;
-(char)isValidScriptPath:(id)arg1 ;
-(char)isSanitaryArgumentList:(id)arg1 forInterpreter:(id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(void)dealloc;
@end

