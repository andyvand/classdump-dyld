/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CalendarPersistence/CalendarPersistence-Structs.h>
@interface CALScriptUtils : NSObject
+(char)_realRunScript:(id)arg1 ;
+(id)createScriptDescFromPath:(id)arg1 ;
+(id)infoForOSAError:(int)arg1 fromComponentInstance:(ComponentInstanceRecord*)arg2 ;
+(id)generateAppleEventForFunction:(id)arg1 withStringArgs:(id)arg2 ;
+(id)executeScript:(id)arg1 withArgs:(id)arg2 returnError:(id*)arg3 ;
+(char)_realExecuteSubroutine:(id)arg1 ;
+(id)executeSubroutine:(id)arg1 inScript:(id)arg2 withArgs:(id)arg3 returnError:(id*)arg4 ;
+(char)hasPendingScript;
+(char)runScript:(id)arg1 ;
+(char)runCompiledScript:(id)arg1 error:(id*)arg2 ;
+(char)executeSubroutine:(id)arg1 inScript:(id)arg2 withArgs:(id)arg3 ;
@end

