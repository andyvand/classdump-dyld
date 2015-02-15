/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFMessageDeliverer.h>
#import <Mail/MFEWSErrorHandler.h>

@class MCError, NSString;

@interface MFEWSDeliverer : MFMessageDeliverer <MFEWSErrorHandler> {

	MCError* _error;

}

@property (retain) MCError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headersForDelivery;
-(void)handleEWSError:(id)arg1 ;
-(Class)deliveryClass;
-(long long)deliverSynchronously;
-(MCError *)error;
-(void)setError:(MCError *)arg1 ;
@end

