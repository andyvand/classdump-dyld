/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class BBZeroingWeakReference, NSString;

@interface BBAssertion : NSObject {

	BBZeroingWeakReference* _delegate;
	NSString* _identifier;
	unsigned _transactionID;

}
-(void)dealloc;
-(id)identifier;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)increaseOrIgnoreTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
@end
