/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:57:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Run JavaScript.action/Contents/MacOS/Run JavaScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class OSAScriptController;

@interface RunJavaScriptAction : AMBundleAction {

	OSAScriptController* _scriptController;

}
-(void)setScriptController:(id)arg1 ;
-(id)scriptController;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)updateParameters;
-(void)parametersUpdated;
-(id)resolvedParameters;
-(id)script;
-(void)awakeFromNib;
-(id)source;
-(void)setSource:(id)arg1 ;
@end

