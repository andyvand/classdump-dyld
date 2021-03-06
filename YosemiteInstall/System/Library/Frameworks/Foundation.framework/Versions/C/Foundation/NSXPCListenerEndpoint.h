/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {

	void* _internal;

}
+(char)supportsSecureCoding;
-(xpc_endpoint_sRef)_endpoint;
-(id)_initWithConnection:(xpc_connection_sRef)arg1 ;
-(void)_setEndpoint:(xpc_endpoint_sRef)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

