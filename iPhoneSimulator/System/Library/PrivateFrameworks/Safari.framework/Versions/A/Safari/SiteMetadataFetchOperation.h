/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SiteMetadataRequest;

@interface SiteMetadataFetchOperation : NSOperation {

	int _status;
	SiteMetadataRequest* _request;

}

@property (nonatomic,readonly) SiteMetadataRequest * request;                           //@synthesize request=_request - In the implementation block
@property (assign,setter=_setStatus:,getter=_status,nonatomic) int status;              //@synthesize status=_status - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)_setStatus:(int)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(char)isExecuting;
-(int)_status;
-(SiteMetadataRequest *)request;
-(id)init;
-(void)start;
-(char)isFinished;
@end

