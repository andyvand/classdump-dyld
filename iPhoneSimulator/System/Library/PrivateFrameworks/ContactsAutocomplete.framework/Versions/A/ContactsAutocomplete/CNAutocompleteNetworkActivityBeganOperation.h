/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface CNAutocompleteNetworkActivityBeganOperation : NSOperation {

	double _delay;
	/*^block*/id _completionHandler;

}
+(id)operationWithDelay:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDelay:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)delayExecution;
-(void)main;
@end

