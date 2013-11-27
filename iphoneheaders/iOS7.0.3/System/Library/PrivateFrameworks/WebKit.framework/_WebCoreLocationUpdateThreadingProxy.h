/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebGeolocationCoreLocationUpdateListener.h>

@class WebGeolocationProviderIOS;

@interface _WebCoreLocationUpdateThreadingProxy : NSObject <WebGeolocationCoreLocationUpdateListener> {

	WebGeolocationProviderIOS* _provider;

}
-(id)initWithProvider:(id)arg1 ;
-(void)resetGeolocation;
-(void)geolocationDelegateUnableToStart;
-(void)geolocationDelegateStarted;
-(void)positionChanged:(GeolocationPosition*)arg1 ;
-(void)errorOccurred:(id)arg1 ;
@end
