/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSInvocation, NSConnection;

@interface NSDistantObjectRequest : NSObject

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) NSConnection * connection; 
@property (retain,readonly) id conversation; 
-(NSInvocation *)invocation;
-(NSConnection *)connection;
-(id)conversation;
-(void)replyWithException:(id)arg1 ;
@end

