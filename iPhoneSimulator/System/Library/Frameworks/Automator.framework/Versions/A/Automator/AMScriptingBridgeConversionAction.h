/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class SBApplication;

@interface AMScriptingBridgeConversionAction : AMBundleAction {

	SBApplication* _sbApplication;

}

@property (retain) SBApplication * sbApplication;              //@synthesize sbApplication=_sbApplication - In the implementation block
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(SBApplication *)sbApplication;
-(id)sbObjectForDescriptor:(id)arg1 ;
-(char)isTypeValidForObject:(id)arg1 ;
-(id)outputObjectArrayForInput:(id)arg1 ;
-(id)descriptorForOutputObject:(id)arg1 ;
-(void)setSbApplication:(SBApplication *)arg1 ;
-(id)scriptingBridgeApplication;
@end

