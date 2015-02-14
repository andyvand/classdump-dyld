/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class WKWebProcessPlugInNodeHandle, NSString;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;

}

@property (readonly) WKWebProcessPlugInNodeHandle * nodeHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(WKWebProcessPlugInNodeHandle *)nodeHandle;
-(void)dealloc;
@end

