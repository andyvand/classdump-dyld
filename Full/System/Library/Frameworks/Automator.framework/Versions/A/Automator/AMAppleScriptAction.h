/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class OSAScript;

@interface AMAppleScriptAction : AMBundleAction {

	OSAScript* _script;

}

@property (retain) OSAScript * script; 
-(id)richTextOutput;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)_emptyInput;
-(void)activated;
-(void)updateParameters;
-(void)parametersUpdated;
-(void)opened;
-(void)willBecomeActive;
-(void)_closed;
-(id)initWithBundle:(id)arg1 ;
-(id)resolvedParameters;
-(id)executeScript:(id)arg1 withParameter:(id)arg2 error:(id*)arg3 ;
-(void)_executeWithInfo:(id)arg1 ;
-(void)_richTextOutputFromScriptOnMainThreadWithDict:(id)arg1 ;
-(void)setScript:(OSAScript *)arg1 ;
-(OSAScript *)script;
-(void)willOpen;
-(void)closed;
-(id)init;
-(void)dealloc;
@end

