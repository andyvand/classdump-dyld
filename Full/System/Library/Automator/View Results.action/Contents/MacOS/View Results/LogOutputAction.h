/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:58:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/View Results.action/Contents/MacOS/View Results
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSTextView;

@interface LogOutputAction : AMBundleAction {

	NSTextView* _outputTextView;

}
-(void)displayOutput;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(void)proxyActionDidRun:(id)arg1 ;
-(void)reset;
@end

