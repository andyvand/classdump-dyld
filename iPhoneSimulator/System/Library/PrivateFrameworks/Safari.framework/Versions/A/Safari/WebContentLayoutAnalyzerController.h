/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface WebContentLayoutAnalyzerController : NSObject {

	BundleFrame* _bundleFrame;
	BundleScriptWorld* _isolatedWorld;

}
-(id)initWithBundleFrame:(const BundleFrame*)arg1 ;
-(void)collectInformationBeforeResize;
-(void)collectInformationAfterResize;
-(id)layoutInformation;
-(id)_invokeMethod:(id)arg1 withArguments:(id)arg2 ;
-(void)dealloc;
-(id)_jsContext;
@end

