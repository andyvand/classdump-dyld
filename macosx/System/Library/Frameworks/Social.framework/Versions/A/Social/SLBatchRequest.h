/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLRequest.h>

@class NSMutableArray;

@interface SLBatchRequest : SLRequest {

	NSMutableArray* _requests;

}
-(id)preparedURLRequest;
-(id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4 ;
-(void)addRequest:(id)arg1 ;
@end

