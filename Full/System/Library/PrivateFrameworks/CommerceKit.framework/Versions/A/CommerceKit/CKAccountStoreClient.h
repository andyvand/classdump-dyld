/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/ISAccountStoreObserver.h>

@interface CKAccountStoreClient : NSObject <ISAccountStoreObserver> {

	/*^block*/id _primaryAccountChangeObserver;

}

@property (copy) id primaryAccountChangeObserver;              //@synthesize primaryAccountChangeObserver=_primaryAccountChangeObserver - In the implementation block
-(void)setPrimaryAccountChangeObserver:(id)arg1 ;
-(id)primaryAccountChangeObserver;
-(void)primaryAccountDidChange:(id)arg1 ;
@end

