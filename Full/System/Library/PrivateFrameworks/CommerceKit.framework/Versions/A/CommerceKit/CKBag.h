/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/CKServiceInterface.h>

@interface CKBag : CKServiceInterface
+(id)productionBag;
+(id)sandboxBox;
+(id)serialDispatchQueue;
+(id)bagWithType:(unsigned long long)arg1 ;
+(void)_invalidateAllBags;
+(id)valueForKey:(id)arg1 ;
+(id)urlForKey:(id)arg1 ;
-(void)startUpdate;
-(char)urlIsTrusted:(id)arg1 ;
-(char)regexWithKey:(id)arg1 matchesString:(id)arg2 ;
-(char)sendGUIDWithURL:(id)arg1 ;
-(id)storefrontURL;
-(char)_loadBagSynchronouslyReturningError:(id*)arg1 ;
-(id)loadBagAndObserveUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopObservingBagWithObserver:(id)arg1 ;
-(char)isLoading;
-(id)valueForKey:(id)arg1 ;
-(id)dictionary;
-(char)isValid;
-(id)urlForKey:(id)arg1 ;
-(id)initWithBagType:(unsigned long long)arg1 ;
@end

