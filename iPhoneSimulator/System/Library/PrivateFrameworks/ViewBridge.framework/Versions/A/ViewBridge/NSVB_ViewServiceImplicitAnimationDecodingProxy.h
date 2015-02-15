/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/NSVB_TargetedProxy.h>
#import <ViewBridge/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h>

@class NSVB_ViewAnimationAttributes, NSString;

@interface NSVB_ViewServiceImplicitAnimationDecodingProxy : NSVB_TargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {

	SEL _implicitAnimationSelector;
	NSVB_ViewAnimationAttributes* _animationAttributes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyDecodingAnimationsForTarget:(id)arg1 ;
-(void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end
