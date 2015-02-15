/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/CNCancelable.h>

@class NSMutableArray, NSString;

@interface CNCancelationToken : NSObject <CNCancelable> {

	char _isCanceled;
	NSMutableArray* _cancelationBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWrappingCancelable:(id)arg1 ;
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
-(void)addCancelable:(id)arg1 ;
-(id)nts_cancel;
-(void)callCancelationBlocks:(id)arg1 ;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(char)isCanceled;
-(id)init;
-(void)dealloc;
-(void)cancel;
@end
