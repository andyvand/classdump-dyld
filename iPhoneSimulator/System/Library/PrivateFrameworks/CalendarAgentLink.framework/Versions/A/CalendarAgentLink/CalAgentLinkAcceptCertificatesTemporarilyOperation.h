/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:20 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalAgentLinkOneWayOperation.h>

@class NSArray, NSString, NSURL;

@interface CalAgentLinkAcceptCertificatesTemporarilyOperation : CalAgentLinkOneWayOperation {

	NSArray* _certificates;
	NSString* _nodeObjectID;
	NSURL* _url;

}

@property (nonatomic,retain) NSArray * certificates;               //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSString * nodeObjectID;              //@synthesize nodeObjectID=_nodeObjectID - In the implementation block
@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
-(NSArray *)certificates;
-(id)inputPayload;
-(NSString *)nodeObjectID;
-(void)setCertificates:(NSArray *)arg1 ;
-(void)setNodeObjectID:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 certificates:(id)arg2 nodeObjectID:(id)arg3 ;
@end

