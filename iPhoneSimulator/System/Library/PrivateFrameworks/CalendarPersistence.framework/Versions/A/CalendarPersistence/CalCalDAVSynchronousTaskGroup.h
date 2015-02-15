/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSError, CoreDAVTaskGroup;

@interface CalCalDAVSynchronousTaskGroup : NSObject {

	char _completed;
	NSError* _error;
	CoreDAVTaskGroup* _taskGroup;

}

@property (assign,nonatomic) char completed;                            //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CoreDAVTaskGroup * taskGroup;              //@synthesize taskGroup=_taskGroup - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(char)completed;
-(void)setCompleted:(char)arg1 ;
-(CoreDAVTaskGroup *)taskGroup;
-(void)setTaskGroup:(CoreDAVTaskGroup *)arg1 ;
-(void)executeTaskGroup:(id)arg1 ;
@end

