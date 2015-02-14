/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/CKServiceInterface.h>

@class NSMutableArray, NSLock;

@interface CKSoftwareMap : CKServiceInterface {

	NSMutableArray* _observers;
	NSLock* _observersLock;

}
+(id)sharedSoftwareMap;
-(id)addProductsObserver:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)removeProductsObserver:(id)arg1 ;
-(id)productForBundleIdentifier:(id)arg1 ;
-(id)productForItemIdentifier:(unsigned long long)arg1 ;
-(id)allProducts;
-(id)productForPath:(id)arg1 ;
-(char)isTrialVersionOfBundleIdentifier:(id)arg1 ;
-(id)bundleInfoFromBundleAtPath:(id)arg1 ;
-(id)iconForApplicationWithBundeID:(id)arg1 ;
-(id)updateRequestBodyData:(char*)arg1 includeInstalledApps:(char)arg2 includeBundledApps:(char)arg3 conditionally:(char)arg4 hadUnadoptedApps:(out char*)arg5 ;
-(char)adoptionCompletedForBundleID:(id)arg1 adoptingDSID:(out id*)arg2 appleID:(out id*)arg3 ;
-(id)adaptableBundleIdentifiers;
-(id)initWithStoreClient:(id)arg1 ;
-(id)receiptFromBundleAtPath:(id)arg1 ;
@end

