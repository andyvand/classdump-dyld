/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/Resources/storeassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>
#import <storeassetd/ISStoreURLOperationDelegate.h>

@class NSArray, NSString;

@interface LoadUpdateQueueOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSArray* _availableUpdates;
	NSArray* _incompatibleUpdates;

}

@property (retain) NSArray * availableUpdates;                      //@synthesize availableUpdates=_availableUpdates - In the implementation block
@property (retain) NSArray * incompatibleUpdates;                   //@synthesize incompatibleUpdates=_incompatibleUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAvailableUpdates:(NSArray *)arg1 ;
-(void)setIncompatibleUpdates:(NSArray *)arg1 ;
-(NSArray *)incompatibleUpdates;
-(NSArray *)availableUpdates;
-(id)initWithStoreClient:(id)arg1 ;
-(void)run;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end
