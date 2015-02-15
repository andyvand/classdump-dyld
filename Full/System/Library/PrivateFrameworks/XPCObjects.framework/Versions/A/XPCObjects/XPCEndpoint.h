/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/Versions/A/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCObjects/NSCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface XPCEndpoint : NSObject <NSCoding> {

	NSObject*<OS_xpc_object> _endpoint;

}

@property (assign,nonatomic) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(id)_initWithEndpoint:(id)arg1 ;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)createConnection;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

