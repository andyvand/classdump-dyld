/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMRunActionOperation.h>

@interface AMRunActionAsyncOperation : AMRunActionOperation {

	long long _state;

}
-(void)didFinishRunningWithError:(id)arg1 ;
-(void)didFinishRunningWithErrorDictionary:(id)arg1 ;
-(void)am_main;
-(void)finish;
-(char)isExecuting;
-(char)isConcurrent;
-(void)start;
-(char)isFinished;
@end

