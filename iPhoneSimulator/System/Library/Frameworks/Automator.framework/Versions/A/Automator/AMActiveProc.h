/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AMWorkflowRunner, OSALanguage;

@interface AMActiveProc : NSObject {

	void* _oldRefCon;
	/*function pointer*/void* _oldActiveProc;
	/*function pointer*/void* _activeProc;
	AMWorkflowRunner* _runner;
	OSALanguage* _language;

}
-(id)initWithRunner:(id)arg1 forLanguage:(id)arg2 ;
-(void)dealloc;
-(void)cleanUp;
@end

