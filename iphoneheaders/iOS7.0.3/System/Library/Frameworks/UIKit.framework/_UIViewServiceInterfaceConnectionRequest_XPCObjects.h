/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIViewServiceInterfaceConnectionRequest.h>

@protocol OS_xpc_object;
@class _UIViewServiceSessionEndpoint, NSObject;

@interface _UIViewServiceInterfaceConnectionRequest_XPCObjects : _UIViewServiceInterfaceConnectionRequest {

	_UIViewServiceSessionEndpoint* _serviceSessionEndpoint;
	NSObject<OS_xpc_object>* _serviceSessionManagerConnection;

}
-(void)dealloc;
-(void)_establishConnection;
-(void)_didConnectToService;
-(void)_connectToServiceSessionViaEndpoint:(id)arg1 ;
@end
