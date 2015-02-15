/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDistantObjectRequest.h>

@class NSInvocation, NSArray, NSConnection;

@interface NSConcreteDistantObjectRequest : NSDistantObjectRequest {

	NSInvocation* invocation;
	NSArray* importedObjects;
	id conversation;
	unsigned sequence;
	NSConnection* connection;

}
-(id)invocation;
-(id)connection;
-(id)conversation;
-(void)replyWithException:(id)arg1 ;
-(id)initWithInvocation:(id)arg1 conversation:(id)arg2 sequence:(unsigned)arg3 importedObjects:(id)arg4 connection:(id)arg5 ;
-(void)dealloc;
@end

